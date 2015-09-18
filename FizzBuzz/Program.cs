using System;
using System.IO;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FizzBuzz
{
    class Program
    {
        static void Main(string[] args)
        {
            using (StreamReader reader = File.OpenText(args[0]))
            {
                Int16 x, y, n;
                string[] numbers;
                string inputLine, outputLine;
                
                while (!reader.EndOfStream)
                {
                    inputLine = reader.ReadLine();
                    outputLine = String.Empty;

                    if (inputLine != null)
                    {
                        numbers = inputLine.Split(' ');

                        x = Int16.Parse(numbers[0]);
                        y = Int16.Parse(numbers[1]);
                        n = Int16.Parse(numbers[2]);

                        for (Int16 i = 1; i <= n; i++)
                        {
                            outputLine += i != 1 ? " " : "";
                            outputLine += (i % x == 0 && i % y == 0) ? "FB" : i % x == 0 ? "F" : i % y == 0 ? "B" : i.ToString();
                        }

                        Console.WriteLine(outputLine);
                    }
                } 
            }
        }
    }
}
