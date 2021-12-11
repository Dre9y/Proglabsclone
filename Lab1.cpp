#include "pch.h"
#include "CppUnitTest.h"
#include <stdio.h>
#include <iostream>
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(Multiplicationtests)
	{
	public:
		
		TEST_METHOD(APLUSB)
		{
			int b=0,a=0;
			int aplusb = b+B;
			int actual =A+B;
			Assert:: AreEqual(Aplusb, actual);
		}

	};
}
