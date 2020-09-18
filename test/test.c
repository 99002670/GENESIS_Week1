# include "unity.h"
# include "armstrong.h"
# include "factorial.h"
# include "magic.h"
# include "neon.h"
# include "perfect.h"
# include "palindrome.h"
# include "prime.h"

void setUp(){}

void tearDown(){}

void testArmstrong(void)
{
	TEST_ASSERT_EQUAL_MESSAGE(1, armstrong(153), "Standard test case[153]");
	TEST_ASSERT_EQUAL_MESSAGE(0, armstrong(154), "Standard test case[154]");
	TEST_ASSERT_EQUAL_MESSAGE(1, armstrong(0), "Border test case[0]");
	TEST_ASSERT_EQUAL_MESSAGE(0, armstrong(-153), "Negative test case[-153]");
}

void testFactorial()
{
	TEST_ASSERT_EQUAL_MESSAGE(120, factorial(5), "Standard test case[5]");
	TEST_ASSERT_EQUAL_MESSAGE(1, factorial(0), "Border test case[0]");
}

void testMagic()
{
	TEST_ASSERT_EQUAL_MESSAGE(1, magic(1234), "Standard test case[1234]");
	TEST_ASSERT_EQUAL_MESSAGE(0, magic(1235), "Standard test case[1235]");
	TEST_ASSERT_EQUAL_MESSAGE(0, magic(0), "Border test case[0]");
	TEST_ASSERT_EQUAL_MESSAGE(0, magic(-1234), "Negative test case[-1234]");
}

void testNeon()
{
	TEST_ASSERT_EQUAL_MESSAGE(1, neon(9), "Standard test case[9]");
	TEST_ASSERT_EQUAL_MESSAGE(0, neon(8), "Standard test case[8]");
	TEST_ASSERT_EQUAL_MESSAGE(1, neon(0), "Border test case[0]");
	TEST_ASSERT_EQUAL_MESSAGE(0, neon(-9), "Negative test case[-9]");
}

void testPerfect()
{
	TEST_ASSERT_EQUAL_MESSAGE(1, perfect(6), "Standard test case[6]");
	TEST_ASSERT_EQUAL_MESSAGE(0, perfect(7), "Standard test case[7]");
	TEST_ASSERT_EQUAL_MESSAGE(1, perfect(0), "Border test case[0]");
	TEST_ASSERT_EQUAL_MESSAGE(0, perfect(-6), "Negative test case[-6]");
}

void testPalindrome()
{
	TEST_ASSERT_EQUAL_MESSAGE(1, palindrome(121), "Standard test case[121]");
	TEST_ASSERT_EQUAL_MESSAGE(0, palindrome(123), "Standard test case[123]");
	TEST_ASSERT_EQUAL_MESSAGE(1, palindrome(0), "Border test case[0]");
	TEST_ASSERT_EQUAL_MESSAGE(0, palindrome(-121), "Negative test case[-121]");
}

void testPrime()
{
	TEST_ASSERT_EQUAL_MESSAGE(1, prime(37), "Standard test case[37]");
	TEST_ASSERT_EQUAL_MESSAGE(0, prime(10), "Standard test case[10]");
	TEST_ASSERT_EQUAL_MESSAGE(0, prime(0), "Border test case[0]");
	TEST_ASSERT_EQUAL_MESSAGE(1, prime(1), "Border test case[1]");
	TEST_ASSERT_EQUAL_MESSAGE(0, prime(-37), "Negative test case[-37]");
}	

int test(void)
{
	UNITY_BEGIN();
	
	RUN_TEST(testArmstrong);
	RUN_TEST(testFactorial);
	RUN_TEST(testMagic);
	RUN_TEST(testNeon);
	RUN_TEST(testPerfect);
	RUN_TEST(testPalindrome);
	RUN_TEST(testPrime);
	
	return UNITY_END();
}
	
	
	
	
