//
// Created by 90175 on 2024/11/2.
//

#ifndef CMAKEPROJECT_PRINTTASK_H
#define CMAKEPROJECT_PRINTTASK_H

#include <iostream>
class PrintTask {
    int num;
public:
    PrintTask(int n = 0){
        num = n;
    };
    //void operator();
    void print();
};


//class Point{
//protected:
//    int width, height;
//public:
//    Point( int a=0, int b=0)
//    {
//        width = a;
//        height = b;
//    }
//    int num;
//    char x;
//    char * p;
//    void setNum(int number);
//    void setChar(char y);
//    void setPoint(char * p);
//    void print();
//    void printWH();
//    void printPoint(char * p);
//};


#endif //CMAKEPROJECT_PRINTTASK_H
