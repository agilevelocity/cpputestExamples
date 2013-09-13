#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTest/TestHarness.h>
#include <CppUTestExt/MockSupport.h>

// Externs for functions under test
extern "C"{
	extern int Add(char* strNumbers);
}

// Exec unit tests
int main(int ac, char** av)
{
	   return CommandLineTestRunner::RunAllTests(ac, av);
}

// Test group and unit tests
TEST_GROUP(strCalcTests)
{
  void teardown()
  {
    mock().clear();
  }
};

// Test with NULL
TEST(strCalcTests, NULLShouldReturnNeg1)
{
	CHECK_EQUAL(-1,Add(NULL));
}

// Test with empty string
TEST(strCalcTests, EmptyShouldReturn0)
{
	CHECK_EQUAL(0,Add(""));
}
