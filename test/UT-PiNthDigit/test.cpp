#include "pch.h"
#include "../../PiNthDigit/PiNthDigit.h";

TEST(PiNthDigitBasicTest, HandelsPositiveInput) {
  EXPECT_EQ(VariousMath::PiDigitGenerator::getNthDigit(1), 1);
  EXPECT_EQ(VariousMath::PiDigitGenerator::getNthDigit(2), 4);
  EXPECT_EQ(VariousMath::PiDigitGenerator::getNthDigit(3), 1);
  EXPECT_EQ(VariousMath::PiDigitGenerator::getNthDigit(4), 5);
}

TEST(PiNthDigitBasicTest, HandelsZeroInput) {
	EXPECT_EQ(VariousMath::PiDigitGenerator::getNthDigit(0), 3);
}