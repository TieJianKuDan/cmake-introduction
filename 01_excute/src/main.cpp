#include <stdlib.h>
#include <iostream>

// 因为c和c++使用不同的编译器会有不同的取名会导致函数未声明，凡是用到c的头文件都需要这样写，才不会报 undefined 的错误
extern "C"
{
#include "hello.h"
}

int main()
{
    std::cout << "This is C++" << std::endl;
    SayHello();
    system("pause");
}