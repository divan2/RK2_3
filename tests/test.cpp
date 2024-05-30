#include "gtest/gtest.h"
#include "Circle.h"
#include "DrawAllShapes.h"
#include "Shape.h"
#include "Square.h"
#include "Point.h"


TEST(CircleTest, Constructor) {
  Circle circle(5.0);
  EXPECT_EQ(circle.radius(), 5.0);
}
