using System;
using System.IO;
using System.Linq;

namespace ReverseWords
{
    class Program
    {
        static void Main(string[] args)
        {
            using (StreamReader reader = File.OpenText(args[0]))
            {
                string[] words;
                string outputLine;
                
                while (!reader.EndOfStream)
                {
                    string line = reader.ReadLine();

                    if (line != null)
                    {
                        words = line.Split(' ');
                        outputLine = String.Empty;

                        if (words.Any())
                        {
                            for (int i = words.Length - 1; i > -1; i--)
                            {
                                outputLine += i != words.Length - 1 ? " " : "";
                                outputLine += words[i];
                            }
                        }
                        
                        Console.WriteLine(outputLine);
                    }
                }
            }
        }
    }
}
