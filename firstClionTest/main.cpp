#include<iostream>
#include"testSwap.h"
using namespace std;
//这是clion的第一个测试，用于交换两个数，测试值传递，第二个传递数组
int main()
{
    //void tranfer(int a, int b);
    //void usPointTrans(int *a, int *b);
    int a1 = 99, a2 = 78, b1 = 32, b2 = -8;
    // this is called by value
    cout << "a1=" << a1 << " b1=" << b1 << endl;
    tranfer(a1, b1);
    cout << " after using fouction tranfer(int a, int b)"
        << "a1=" << a1 << " b1=" << b1 << endl;

    cout << "a2=" << a2<< " b2=" << b2 << endl;

    //this is using the point
   // int *p1 = &a2, *p2 = &b2;
    usPointTrans(&a2, &b2);
    cout << " after using fouction usPointTrans(int *a, int *b)"
        << "a2=" << a2 << " b2=" << b2 << endl;

    return 0;


}


