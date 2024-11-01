#include <iostream>
#include "test.hpp"
#include "point.h"
#include <cstring>

int main() {
    std::cout << "Hello, World!" << std::endl;
    testprint();

    Point point(1, 2);
    point.setNum(10);
    char a = 'a';
    point.setChar(a);
    point.print();


//    std::cout << point.num << std::endl;
//    std::cout << point.x << std::endl;


    char *dynamicArray = new char[6]; // 动态分配内存
    strcpy(dynamicArray, "Hello"); // 需要包含 <cstring> 头文件
    point.setPoint(dynamicArray);
    std::cout << point.p << std::endl;



//    point.setPoint("abc");
//    std::cout << point.p << std::endl;

    char myArray[] = "myArray";
    point.setPoint(myArray);
    std::cout << point.p << std::endl;


    char printPointData[] = "printPoint";
    point.printPoint(printPointData);



    Point * point1;
    minPoint mp(3, 4);
    point1 = &mp;
    point1->printWH();





    return 0;
}
