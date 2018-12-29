using System;

using System.Collections.Generic;

using System.Text;

using MyInteropCode;

namespace testcpp
{
    class Program

    {

        static void Main(string[] args)

        {

            String s = CPPClass.CallCPPFcn();

            Console.WriteLine(s);

        }

    }
}
