//
// Created by WZTCM on 2017/3/26.
//

#include "testSwap.h"
void tranfer(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

}

void usPointTrans(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
