//
// Created by 90175 on 2024/11/4.
//
#include <iostream>
#include "pointerTest.h"


//signed  char : -2^7 ~ 2^7-1
//unsigned char : 0 ~ 2^8-1;


// 指针 是 指针变量 ， 用于 存放其他数据单元 （变量 数组 结构体 函数 等）的首地址，若指针存放了某个数据的 首地址，则这个指针指向了这个单元数据， 若指针存放的值是 0 ，则这个指针为 空指针

//定义一个 指针变量
unsigned char a;
unsigned char * p;

int c = 0x123;// int 类型 占用 四个字节， 一个字节 8 位
short s; // short 占用 2 个字节

//指针占用  X 个字节, 不同 的系统 大小不一样，16位 系统 2 字节; 32位系统 4 字节; 64 位系统 8 字节; 指针 也是 变量 所以 会占用内存； 小端 存储
int * pInt; // 代表 pInt 是 (int *) 类型的，指向  int 的 指针变量

//char cc = 0x66;
//char css[] = {'a', 6, 0x33};



void pointerTest::printPointerTest() {
//    printf("%d\n", sizeof(c));
//    printf("%d\n", sizeof(s));
    printf("pInt %d\n", pInt);
    printf("c %d\n", c);

    printf("&pInt %d\n", &pInt);
    printf("&c 获取 c的首地址 %d\n", &c);
    // 将 c 的首地址 复制给 pInt
    pInt = &c;
    printf("pInt %d\n", pInt);// 小端 存储; &c 的值 是  1509404672， pInt 那么在内存中 存储的是 从上到下 72 46 40 09 15 00 00 00
    printf("* pInt 取出 指针指向 的 数据单元 %d\n", * pInt);// * pInt 间接 访问 ，先看一下 pInt 储存的是什么， 获取到 * pInt 的值， 然后 以 pInt 为地址  去找一下 这个 地址  上存的内容， 以什么形式打印 取决于 这个指针的类型，如果在这个给指针是 char 型， 占用一个字节 （8 位），那么 会把这个地址  和 他后面的变量 ，以 char 型 翻译出来，如果是 int  也是 一样，取 以地址为开始的 8 个字节， 并且以 int 类型 翻译出来
    pInt++;
    printf(" pInt ++ 指针向下 移动一个 数据宽度 %d\n", pInt);// 因为在这里是int 类型  所以 一次 ++  是加了 4 个字节； 如果是是 char 类型 那么会 加 1 个字节
    printf(" pInt + 5 指针向下 5 个 数据宽度 %d\n", pInt+5);




    // 数组 指针
    // 数组 是 一些 相同数据 类型 的 变量 组成的集合。其数组名 即为 指向 该数据 类型的 指针， 数组的定义 等效于 申请内存 ，定义指针  和 初始化

    // 申请内存 ，定义 char * cs = xxxxxx, 初始化 数据
    char cs[] = {0x33, 0x44, 0x55};
    printf(" cs  =  %d\n", cs);
    printf(" & cs  =  %d\n", & cs);

    printf(" * cs  =  %d\n", * cs);
    printf(" cs[0] 等效于 * cs %d\n", cs[0]);
    printf(" cs[1] 等效于 * (cs +  1) %d\n", cs[1]);
    printf(" cs[2] 等效于 * (cs +  2) %d\n", cs[2]);



}
