#include <iostream>
#include <string>

#include <stlx.h>
#include <common.h>

using namespace std;

int main()
{
    std::cout << "Hello CMake!" << std::endl;
    runVectorDemo();

    // Shape *shape = new Shape(99, 98);
    // shape->printShape();
    // delete shape;

    // string str = "hello";
    // string newStr = str.substr(1, str.size()-1);
    // printf("string -> %s\n", newStr.c_str());
    // printf("str size: %zu\n", newStr.size());

    // vector<Shape> arr;
    // arr.push_back(Shape(1, 2));
    // arr.push_back(Shape(3, 3));
    // arr.push_back(Shape(8, 6));

    // vector<Shape>::iterator v = arr.begin();
    // while(v != arr.end())
    // {
    //     v.base()->printShape();
    //     printf("\n");
    //     v++;
    // }

    return 0;
}
