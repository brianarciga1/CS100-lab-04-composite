#include "gtest/gtest.h"

#include "op_test.hpp"
#include "op2_test.hpp"
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
