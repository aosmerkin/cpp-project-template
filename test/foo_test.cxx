#include "gtest/gtest.h"
#include "foo.hxx"

TEST(FooTest, testFooReturnsPassedValue)
{
  EXPECT_EQ(4, foo(5));
}

TEST(FooTest, testFooReturnsPassedValue2)
{
  EXPECT_EQ(4, foo(4));
}