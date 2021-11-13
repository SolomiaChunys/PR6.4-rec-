#include "pch.h"
#include "CppUnitTest.h"
#include "../PR6.4(rec)/PR6.4(rec).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64rec
{
	TEST_CLASS(UnitTest64rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 5, 6, 7, 8 };
			int min = 0;
			int t = Min(a, 4, 1, a[0]);
			Assert::AreEqual(t, 5);
		}
	};
}
