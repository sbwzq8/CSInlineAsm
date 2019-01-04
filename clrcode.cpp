#include "nativecode.h"
#include <stdio.h>

using namespace System;


namespace MyInteropCode

{


	ref class CPPClass

	{

	public:

		static String^ CallCPPFcn(int test)

		{
			int size = 1000;

			static wchar_t c[1000];
			wchar_t* ptr;

			ptr = GetStringFromNative(1500);

			printf("%s", ptr);
			printf("%d", test);


			return gcnew String(c);

		}

	};


}