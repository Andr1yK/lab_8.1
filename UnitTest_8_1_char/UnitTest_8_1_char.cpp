#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1_char/lab_8.1_char.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81char
{
	TEST_CLASS(UnitTest81char)
	{
	public:
		
    TEST_METHOD(TestCountIncludes)
    {
      char str[] = "BASIC AND Delphi";
      char letters[] = "BASIC";

      const int count = CountIncludes(str, letters);

      Assert::AreEqual(6, count);
    };

    TEST_METHOD(TestChange)
    {
      char str[] = "BASIC, Python and BASIC";
      char letters[] = "BASIC";

      char* dest = new char[30];
      dest = Change(str, "BASIC", "Delphi");

      Assert::AreEqual("Delphi, Python and Delphi", dest);
    };
  };
}
