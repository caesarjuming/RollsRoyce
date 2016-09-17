//
// Created by Caesar on 16/9/17.
//

// 默认的返回值为int

#include <stdio.h>
#include "staticextern.c"

#define max(A,B) (A)>(B)?(A):(B)
#undef max(A,B)

#define  paste(A,B) A ## B

#if !defined(HDR)
#define HDR
#endif

#if SYSTEM == SYSV
    #define HDR "sysv.h"
#elif SYSTEM == BSD
    #define HDR "bsd.h"
#else
    #define HDR "default.h"
#endif


double returnDouble();

functionStructure(){

    printf("||**********************function start******************||\r\n");
    printf("%f \r\n",returnDouble());

    // 声明变量也可以同时声明函数,一个入参为char[]返回值为double的函数
    double sum,atof(char[]);

    extern int i;
    printf("%d\r\n",i);

    extern int myArr[];

    printf("arr length: %d\r\n",myArr[0]);

    // 可以引用其他文件的外部变量
    extern int globalVar;
    printf("%d\r\n",globalVar);

    printf("%d\r\n",staticVar);

    // 局部变量运行函数时自动初始化,外部变量和静态变量都被初始化为0,自动变量和寄存器变量的初始值没有定义
    // 对于自动变量和寄存器变量,初始化可以不是常量值,可以是表达式

    int arr2[]={1,2,3};
    char arr3[]="abcd";
    char arr4[]={'a','b','c','\0'};

    printf("||**********************function end******************||\r\n");


    return 0;
}

double returnDouble(){
    int i=99;
    return i+0.0;
}

// 外部变量的初始化只在定义中
// 外部变量定义中必须指定数组长度,但extern声明则不一定要指定数组的长度
int i = 66;
int myArr[3]={1,2,3};