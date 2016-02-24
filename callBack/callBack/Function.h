//
//  Function.h
//  callBack
//
//  Created by l k j y on 16/2/24.
//  Copyright © 2016年 尹照俊. All rights reserved.
//

#ifndef Function_h
#define Function_h

#include <stdio.h>
//void Date();
//void Callyou(void(*p)());
int sumXY(int x,int y);
int sumArray(int array[],int  n);
int CallSum1(int a,int b,int (*p)());
int CallSum2(int array1[],int n,int (*p)());
#endif /* Function_h */
