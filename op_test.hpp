#ifndef __OP_TEST_HPP__
#define __OP_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "add.hpp"

TEST(OpTest, OpEvaluateNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->evaluate(), 8);
}

TEST(OpTest, OpStringifyNonZero) {
    Op* test = new Op(8);
    EXPECT_EQ(test->stringify(), "8.000000");
}

TEST(OpTest, OpEvaluateNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->evaluate(), -8);
}

TEST(OpTest, OpStringifyNegative) {
    Op* test = new Op(-8);
    EXPECT_EQ(test->stringify(), "-8.000000");
}

TEST(OpTest, OpEvaluateZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(OpTest, OpStringifyZero) {
    Op* test = new Op(0);
    EXPECT_EQ(test->stringify(), "0.000000");
}


TEST(AddTest, AddEvaluateNonZero) {
    Base* eight = new Op(8);
    Base* five = new Op(5);
    Base* test = new Add(eight,five); 
    EXPECT_EQ(test->evaluate(), 13);
}

TEST(AddTest, AddStringifyNonZero) {
    Base* eight = new Op(8);
    Base* five = new Op(5);
    Base* test = new Add(eight,five);
    EXPECT_EQ(test->stringify(), "8.000000+5.000000");
}

TEST(AddTest, AddEvaluateZero) {
    Base* zero = new Op(0);
    Base* zero2 = new Op(0);
    Base* test = new Add(zero,zero2);
    EXPECT_EQ(test->evaluate(), 0);
}

TEST(AddTest, AddStringifyZero) {
    Base* zero = new Op(0);
    Base* zero2 = new Op(0);
    Base* test = new Add(zero,zero2);
    EXPECT_EQ(test->stringify(), "0.000000+0.000000");
}

TEST(AddTest, AddEvaluateNegative) {
    Base* eight = new Op(-8);
    Base* five = new Op(5);
    Base* test = new Add(eight,five);
    EXPECT_EQ(test->evaluate(), -3);
}

TEST(AddTest, AddStringifyNegative) {
    Base* eight = new Op(-8);
    Base* five = new Op(5);
    Base* test = new Add(eight,five);
    EXPECT_EQ(test->stringify(), "-8.000000+5.000000");
}


#endif //__OP_TEST_HPP__
