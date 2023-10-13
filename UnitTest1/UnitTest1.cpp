#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int*length, int*width);
extern "C" int getArea(int* length, int* width);
extern "C" int setLength(int input, int* length);



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
		TEST_METHOD(GetAreaTest)
		{
			int result = 0;
			int length = 4;
			int width = 4;
			result = getArea(&length, &width);
			Assert::AreEqual(16, result);
		}

		TEST_METHOD(GetLengthTest1)
		{
			int length = 0;
			int input = 25;
			setLength(input, &length);
			Assert::AreEqual(25, length);
		}

		TEST_METHOD(GetLengthTest2)
		{
			int length = 1;
			int input = 80;
			setLength(input, &length);
			Assert::AreEqual(80, length);
		}

		TEST_METHOD(GetLengthTest3)
		{
			int length = 6;
			int input = 12;
			setLength(input, &length);
			Assert::AreEqual(12, length);
		}

		TEST_METHOD(GetwidthTest1)
		{
			int width = 7;
			int input = 15;
			setLength(input, &width);
			Assert::AreEqual(15, width);
		}

		TEST_METHOD(GetwidthTest2)
		{
			int width = 0;
			int input = 44;
			setLength(input, &width);
			Assert::AreEqual(44, width);
		}
		
		TEST_METHOD(GetwidthTest3)
		{
			int width = 1;
			int input = 98;
			setLength(input, &width);
			Assert::AreEqual(98, width);
		}

	};
}
