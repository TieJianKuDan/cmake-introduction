#include <iostream>
#include <swap>

extern "C"
{
#include <abs.h>
#include <stdlib.h>
#include <stdio.h>
}

using namespace std;

int main()
{
    int num1 = 0, num2 = 0;

    cout << "请输入第一个数" << endl;
    cin >> num1;
    cout << "请输入第二个数" << endl;
    cin >> num2;

    printf("num1 = %d, num2 = %d\n", num1, num2);
    printf("After Swap...\n");
    swap(num1, num2);
    printf("num1 = %d, num2 = %d\n", num1, num2);

    system("pause");
    
    return 0;
}