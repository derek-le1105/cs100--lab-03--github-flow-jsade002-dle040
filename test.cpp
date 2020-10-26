#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, ALLCAPS) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "ALL"; test_val[2] = "CAPS"; test_val[3] = "TEST";
    EXPECT_EQ("ALL CAPS TEST", echo(4, test_val));
}

TEST(EchoTest, SpecialCharacters) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "!@#$%^&*()";
    EXPECT_EQ("!@#$%^&*()", echo(2, test_val));
}

TEST(EchoTest, LongString) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111";
    EXPECT_EQ("1111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111111", echo(2, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}


