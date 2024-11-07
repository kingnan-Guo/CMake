//
// Created by 90175 on 2024/11/7.
//
#pragma one
#ifndef CMAKEPROJECT_TESTCLASS_H
#define CMAKEPROJECT_TESTCLASS_H


class testClass {
public:
    testClass();
    void init();
    void run();
};

// C接口函数声明，使用 extern "C" 防止名称修饰
//extern "C" {
//testClass* createClass();
//void testClass_Init(testClass* instance);
//void testClass_delete(testClass* instance);
//}


extern "C" {
void * createClass();
void testClass_Init(testClass* instance);
void testClass_delete(testClass* instance);
}

#endif //CMAKEPROJECT_TESTCLASS_H
