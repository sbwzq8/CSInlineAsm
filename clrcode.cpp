#include "nativecode.h"
#include <stdio.h>

using namespace System;


namespace MyInteropCode

{


	ref class CPPClass

	{

	public:

		static String^ CallCPPFcn()

		{

			static wchar_t c[1500];
			wchar_t* ptr;

			ptr = GetStringFromNative();

			printf("%s", ptr);

			return gcnew String(c);

		}

	};


}