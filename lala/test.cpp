#include "pch.h"
#include "lb3.h"
TEST(Testsubtr, TestSimple) {
	struct Timeline a = { 12, 32, 21 };
	struct Timeline b = { 1, 21, 4 };
	struct Timeline result = { 11, 11, 17 };
	EXPECT_EQ(result.second, subtr(a, b).second);
	EXPECT_EQ(result.day, subtr(a, b).day);
	EXPECT_EQ(result.year, subtr(a, b).year);
}
TEST(Testsubtr, TestNUll) {
	struct Timeline a = { 12, 32, 56 };
	struct Timeline b = { 0, 0, 0 };
	struct Timeline result = { 12, 32, 56 };
	EXPECT_TRUE(0 == memcmp(&subtr(a, b), &result, sizeof(struct Timeline)));
}
TEST(Testsubtr, TestConv) {
	struct Timeline a;
	struct Timeline b;
	struct Timeline result;
	a.second = 56;
	a.day = 32;
	a.year = 12;
	b.second = 58;
	b.day = 21;
	b.year = 1;
	result.second = 86398;
	result.day = 10;
	result.year = 11;
	EXPECT_TRUE(0 == memcmp(&subtr(a,b), &result, sizeof(struct Timeline)));
}
TEST(Testsubtr, TestNegativres) {
	struct Timeline a;
	struct Timeline b;
	struct Timeline result;
	a.second = 56;
	a.day = 32;
	a.year = 12;
	b.second = 234;
	b.day = 123;
	b.year = 16;
	result.second = 86222;
	result.day = 273;
	result.year = -5;
	EXPECT_TRUE(0 == memcmp(&subtr(a, b), &result, sizeof(struct Timeline)));
}
TEST(Testsubtr, Test1) {
	struct Timeline a;
	struct Timeline b;
	struct Timeline result;
	a.second = 57843;
	a.day = 312;
	a.year = 126434;
	b.second = 1234;
	b.day = 213;
	b.year = 42723;
	result.second = 56609;
	result.day = 99;
	result.year = 83711;
	EXPECT_TRUE(0 == memcmp(&subtr(a, b), &result, sizeof(struct Timeline)));
}
TEST(Testsubtr, Test2) {
	struct Timeline a;
	struct Timeline b;
	struct Timeline result;
	a.second = 57843;
	a.day = 312;
	a.year = 126434;
	b.second = 1234;
	b.day = 213;
	b.year = 42723;
	result.second = 56609;
	result.day = 99;
	result.year = 83711;
	EXPECT_TRUE(0 == memcmp(&subtr(a, b), &result, sizeof(struct Timeline)));
}
TEST(Testsubtr, Test3) {
	struct Timeline a;
	struct Timeline b;
	struct Timeline result;
	a.second = 57843;
	a.day = 312;
	a.year = 126434;
	b.second = 1234;
	b.day = 213;
	b.year = 42723;
	result.second = 56609;
	result.day = 99;
	result.year = 83711;
	EXPECT_TRUE(0 == memcmp(&subtr(a, b), &result, sizeof(struct Timeline)));
}
