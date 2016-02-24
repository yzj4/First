//
//  main.c
//  callBack
//
//  Created by l k j y on 16/2/24.
//  Copyright © 2016年 尹照俊. All rights reserved.
//

#include <stdio.h>
#include "Function.h"
int main(int argc, const char * argv[])
{
    // insert code here...
//    Callyou(Date);
  
    int a=12;
    int b=13;
    int array[5]={1,2,3,4,5};
    int sum1=CallSum1(a,b,sumXY);
    int sum2=CallSum2(array,5,sumArray);
    printf("sum1:%d\nsum2:%d\n",sum1,sum2);
    return 0;
}
