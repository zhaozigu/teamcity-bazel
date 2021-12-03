#include "gtest/gtest.h"

#include "myadd.hpp"

TEST(testAdd, sampleAdd)
{
  EXPECT_EQ(15, add(5, 10));
}

TEST(testAdd, sampleNegative)
{
  EXPECT_EQ(-3, add(-5, 2));
}