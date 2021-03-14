#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Student\oop2.1\oop2.1\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest21
{
	TEST_CLASS(UnitTest21)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a(1,1);
			bool t;
			t = a.Init(1, 2);
			Assert::AreEqual(t, true);
		}
	};
}
