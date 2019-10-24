
#ifndef HYPED_RECTANGLE_RECTANGE_H
#define HYPED_RECTANGLE_RECTANGE_H

namespace hyped {
namespace rectangle {

class Rectangle {
  // FILL HERE

 public:
  Rectangle(int height, int width)
    : height_(height),
      width_(width) { /* EMPTY */ }

  int getArea() { return height_ * width_; }

  void setHeight(int height) { height_ = height; }

  void setWidth(int width) { width_ = width; }

 private:
  Rectangle()
      : height_(0),
        width_(0) { /* EMPTY */ }

 private:
  int height_;
  int width_;
};

}}  // namespace hyped::rectangle

#endif  // HYPED_RECTANGLE_RECTANGE_H
