using System;
using System.Diagnostics;
using System.Linq;
using System.IO;
using System.Xml.Linq;
using System.Reflection;
using Xunit.Abstractions;

namespace TestCommon
{
    public static class TestUtils
    {
        public static string GetAssetFile(string fileName)
        {
            return Path.Combine(GetAssetDir(), fileName);
        }

        public static string GetAssetDir()
        {
            return Path.Combine(BinPath, "assets");
        }

        public static string GetWinmdUtilsPath()
        {
            XDocument xDocument = XDocument.Load(Path.GetFullPath(Path.Combine(BinPath, @"../../../obj/BuildTools/BuildTools.proj.nuget.g.props")));

            var winmdGeneratorPath = from e in xDocument.Descendants("{http://schemas.microsoft.com/developer/msbuild/2003}PkgMicrosoft_Windows_WinmdGenerator") select e.Value;

            return Path.Combine(winmdGeneratorPath.First(), @"tools/net8.0/winmdutils.dll");
        }

        public static string WDKWinmdPath => Path.GetFullPath(Path.Combine(BinPath, @"../../Windows.Wdk.winmd"));

        public static string BinPath => Path.GetDirectoryName(Assembly.GetExecutingAssembly().Location);

        public static int ExecuteCmd(string cmd, string args, out string output, ITestOutputHelper logger)
        {
            output = null;

            logger.WriteLine($"Calling: {cmd} {args}");

            using Process process = new Process();
            process.StartInfo.CreateNoWindow = true;
            process.StartInfo.UseShellExecute = false;
            process.StartInfo.RedirectStandardOutput = true;

            string errorText = null;
            process.StartInfo.RedirectStandardError = true;
            process.ErrorDataReceived +=
                new DataReceivedEventHandler((sender, e) => { errorText += e.Data; });

            process.StartInfo.FileName = cmd;
            process.StartInfo.Arguments = args;
            process.Start();

            process.BeginErrorReadLine();
            output = process.StandardOutput.ReadToEnd();
            process.WaitForExit();
            output += errorText;

            return process.ExitCode;
        }
    }
}

