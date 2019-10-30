#include "rectangle/rectangle.hpp"
#include "gtest/gtest.h"

namespace hyped {
namespace rectangle {


TEST(test, area_test) {
    Rectangle r(5, 10);
    int area = r.getArea();
    ASSERT_EQ(area, 5*10) << "Correct area not returned";
}

struct rectangleTest : public ::testing::Test {
    protected:
      Rectangle* r;
      void SetUp() {r = new Rectangle(13, 14);}
      void TearDown() {delete r;}
};

TEST_F(rectangleTest, area_test_f) {
    int a = r->getArea();
    ASSERT_EQ(a, 13*14);
}

TEST_F(rectangleTest, set_height_test) {
    r->setHeight(5);
    ASSERT_EQ(5*14, r->getArea()) << "Height not set correctly";
}

TEST_F(rectangleTest, set_width_test) {
    r->setWidth(6);
    ASSERT_EQ(13*6, r->getArea()) << "Width not set correctly";
}
}}