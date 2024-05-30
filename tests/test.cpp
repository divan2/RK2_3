#include "gtest/gtest.h"
#include "Circle.h"
#include "Shape.h"
#include "Square.h"
#include "Point.h"


TEST(CircleTest, Constructor) {
  Circle circle(5.0);
  EXPECT_EQ(circle.radius(), 5.0);
}

TEST(CircleTest1, Constructor) {
  Circle circle(9.0);
  EXPECT_EQ(circle.radius(), 9.0);
}

TEST(CircleTest2, Constructor) {
  Circle circle(4.0);
  EXPECT_EQ(circle.radius(), 4.0);
}
