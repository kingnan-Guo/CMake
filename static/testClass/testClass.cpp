//
// Created by 90175 on 2024/11/7.
//

#include "testClass.h"
#include <iostream>
#include "testClassT.h"


testClass::testClass() {

}
void testClass::run() {

}

void testClass::init(){

}



//extern "C" {
////    testClass * createClass(){
////        return new testClass();
////    }
////
////
////    void testClass_Init(testClass* instance) {
////        if (instance != nullptr) {
////            instance->init();
////        }
////    }
////
////    void testClass_delete(testClass* instance) {
////        delete instance;
////    }
////
////    void destory_class(testClass* instance){
////        delete static_cast<testClass*>(instance);
////    }
////
////    void call_run(testClass* instance){
////        return static_cast<testClass*>(instance) ->run();
////    }
////
////}


void* createClass(){
    return new testClass();
}


void testClass_Init(testClass* instance) {
    if (instance != nullptr) {
        instance->init();
    }
}

void testClass_delete(testClass* instance) {
    delete instance;
}

void destory_class(testClass* instance){
    delete static_cast<testClass*>(instance);
}

void call_run(testClass* instance){
    return static_cast<testClass*>(instance) ->run();
}