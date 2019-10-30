#include "circle/circle.hpp"
#include "gtest/gtest.h"

namespace hyped {
namespace rectangle {
struct circleTest : public ::testing::Test {
    protected:
      Circle* r;
      void SetUp() {r = new Circle(1);}
      void TearDown() {delete r;}
};

TEST_F(circleTest, circle_area_test) {
    float a = r->getArea();
    ASSERT_EQ(a, 1*2*3.14f);
}

TEST_F(circleTest, set_radius_test) {
    r->setRadius(5);
    ASSERT_EQ(5*2*3.14f, r->getArea()) << "Height not set correctly";
}

}}