//
// Created by 90175 on 2024/11/1.
//
#include <iostream>
#include "point.h"


void Point::setNum(int number) {
    this->num = number;
}

void Point::setChar(char y) {
    this->x = y;
}

void Point::setPoint(char * p){
    this->p = p;
}

void Point::print() {
    std::cout << this->num << std::endl;
    std::cout << this->x << std::endl;

}

void Point::printWH(){
    std::cout << this->width << std::endl;
    std::cout << this->height << std::endl;
}

void Point::printPoint(char * p) {
    // * p = 10;
    std::cout << p << std::endl;
    std::cout << "*p " <<  * p << std::endl;
    std::cout << "& p " <<  & p << std::endl;
//    std::cout <<   p << std::endl;
}