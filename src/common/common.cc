#include <iostream>

#include <common.h>

using namespace std;

int doublex(int x)
{
    return x * 2;
}

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