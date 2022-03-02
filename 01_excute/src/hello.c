#include <Windows.h>
#include "hello.h"

void SayHello() {
    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
        Sleep(1000); 
    }
    printf("hello world!\n");
}