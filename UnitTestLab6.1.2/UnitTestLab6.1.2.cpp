#include "pch.h"
#include "CppUnitTest.h"
#include "..\pr.6.1.2\Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLab612
{
	TEST_CLASS(UnitTestLab612)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[3] = { 6, 0, -4 };
			int t = CountingElementArr(A, 3, 0);
			Assert::AreEqual(3, t);
		}
	};
}
