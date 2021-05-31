#include <gtest/gtest.h>

#include <common.h>

TEST(TestDoublex, test_doublex_1)
{
    int ret = doublex(3);
    EXPECT_EQ(6, ret);
}
