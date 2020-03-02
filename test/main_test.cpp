#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "generator.h"

TEST(CHECK_MAIN, CHECK_STRING_GENERATOR)
{
    EXPECT_EQ("Hello world", gen_string_function());
}