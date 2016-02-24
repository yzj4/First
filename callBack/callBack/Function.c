//
//  Function.c
//  callBack
//
//  Created by l k j y on 16/2/24.
//  Copyright © 2016年 尹照俊. All rights reserved.
//

#include "Function.h"
//void Date()
//{
//    printf("看电影吧\n");
//}
//void Callyou(void (*p)())
//{
//    (*p)();
//}
int sumXY(int x,int y)
{
    return x+y;
}
int sumArray(int array[],int n)
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        sum+=array[i];
    }
    return  sum;
}
int CallSum1(int a,int b,int (*p)())
{
    return (*p)(a,b);
}
int CallSum2(int array1[],int n,int (*p)())
{
    return (*p)(array1,n);
}