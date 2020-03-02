#include <gtest/gtest.h>
#include "gmock/gmock.h"

#include "main.h"

TEST(CHECK_HELLO_FUNCTIO)
{
    EXPECT_EQ("Hello world", gen_string_function());
}