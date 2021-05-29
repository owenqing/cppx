#include <iostream>

using namespace std;

class Shape
{
public:
    int width;
    int height;
    Shape(int width, int height);
    void printShape();
};

Shape::Shape(int width, int height)
{
    this->width = width;
    this->height = height;
}

void Shape::printShape()
{
    std::cout << "---------------- Shape --------------" << std::endl;
    std::cout << "width: " << this->width << ", height: " << this->height << std::endl;
    std::cout << "---------------- Shape --------------" << std::endl;
}