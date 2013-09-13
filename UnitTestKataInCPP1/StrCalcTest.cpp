
#include <CppUTest/TestHarness.h>
#include <CppUTest/CommandLineTestRunner.h>
#include <CppUTestExt/MockSupport.h>
#include "StrCalc.h"

// Exec unit tests
int main(int ac, char** av)
{
	   return CommandLineTestRunner::RunAllTests(ac, av);
}

// Test group and unit tests
TEST_GROUP(strCalcTests)
{
	StrCalc* calc;

	void setup()
	{
		calc = new StrCalc();
	}
	void teardown()
	{
		delete calc;
    mock().clear();
	}

};

// Test with empty string
TEST(strCalcTests, EmptyShouldReturn0)
{
	CHECK_EQUAL(0,calc->add(""));
}

// Test with 1 string
TEST(strCalcTests, 1ShouldReturn1)
{
	CHECK_EQUAL(1,calc->add("1"));
}

