
#ifndef HYPED_RECTANGLE_RECTANGE_H
#define HYPED_RECTANGLE_RECTANGE_H
#include <math.h>
namespace hyped {
namespace rectangle {

class Circle {
 

 public:
  Circle(float radius)
  : radius_(radius) { /* EMPTY */ }

  float getArea() { return radius_ * 2 * 3.14f; }

  void setRadius(float radius) { radius_=radius; }

 private:
  Circle()
      : radius_(0) {}
 private:
  float radius_;
};

}}  // namespace hyped::rectangle

#endif  // HYPED_RECTANGLE_RECTANGE_H
