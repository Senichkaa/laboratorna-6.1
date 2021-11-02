#include "pch.h"
#include "CppUnitTest.h"
#include "../pr.6.1.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0, 7, -3,-1 };
			int S = SumArray(A, 4);
			Assert::AreEqual(-4, S);
		}
	};
}
