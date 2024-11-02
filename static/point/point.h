//
// Created by 90175 on 2024/11/1.
//
#ifndef CMAKEPROJECT_POINT_H
#define CMAKEPROJECT_POINT_H
#include <iostream>
// 给point.cpp 添加头文件内容
class Point{
protected:
    int width, height;
public:
    Point( int a=0, int b=0)
    {
        width = a;
        height = b;
    }
    int num;
    char x;
    char * p;
    void setNum(int number);
    void setChar(char y);
    void setPoint(char * p);
    void print();
    void printWH();
    void printPoint(char * p);
};


class minPoint: public Point{
public:
    minPoint(int c, int d): Point(c, d){

    }
};

#endif //CMAKEPROJECT_POINT_H
