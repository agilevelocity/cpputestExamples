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

// Sample test 
TEST(strCalcTests, first)
{
	CHECK_EQUAL(-1,Add(NULL));
}

