#include <stdio.h>

//main.c 不能直接 引入 test.h , 因为 C语言不能识别 extern "C" 关键字。可以利用 C++ 预定义 宏实现头文件的改写
extern void testprint();
int main(){
    printf("daa \n");
    testprint();
    return 0;
}