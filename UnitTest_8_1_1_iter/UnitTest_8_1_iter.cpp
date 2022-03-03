#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_8.1.1/lab_8.1_iter.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest811iter
{
  TEST_CLASS(UnitTest811iter)
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
