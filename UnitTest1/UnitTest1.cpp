#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*length, int*width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(GetPerimeterTest)
		{
			int result = 0;
			int length = 5;
			int width = 7;
			result = getPerimeter(&length, &width);
			Assert::AreEqual(24, result);
		}
	};
}
