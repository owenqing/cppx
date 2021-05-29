#include <iostream>
#include <vector>

using namespace std;

// 如何使用 vector 容器
// vector 相当于:
//      python -> list
//      golang -> slice
//      java   -> arraylist
void runVectorDemo() 
{
    std::cout << "message this is vector demo!" << std::endl;
    
    vector<int> arr; // 初始化 vector，给定长度
    arr.push_back(99);
    arr.push_back(98);
    arr.push_back(97);

    // 遍历
    vector<int>::iterator v = arr.begin();
    while(v != arr.end())
    {
        std::cout << "vector num => " << *v << std::endl;
        v++;
    }

    std::cout << "message vector demo end!" << std::endl;
}