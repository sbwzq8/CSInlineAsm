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
            int test = 12543;

            String s = CPPClass.CallCPPFcn(test);

            Console.WriteLine(s);

        }

    }
}
