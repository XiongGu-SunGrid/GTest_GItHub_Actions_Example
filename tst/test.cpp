#include "pch.h"
#include "../src/cal.h"
#include "../src/cal.cpp"

TEST(TestCal, TestAdd) {
	Cal calTest;
  EXPECT_EQ(calTest.add(2,3), 6);
  EXPECT_TRUE(true);
}