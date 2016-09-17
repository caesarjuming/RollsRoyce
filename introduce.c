//
// Created by Administrator on 2016/9/15.
//
#include <stdio.h>

#define MAX 10

// 所有函数都可以见
int count;
int count2;

// 声明的时候，可以没有变量名称
void sayHello(int,int);
void printArray(int [],int);

void introduce(){
    printf("||**********************introduce start******************||\r\n");

    printf("hello,world!\r\n");
    printf("%d\r\n",2/3);
    printf("%d\r\n",3/2);
    // full left by space
    printf("%3d,%4d\r\n",1,2);

    printf("%4.1f,%4.3f\r\n",1.0/2.0,3.0/4.0);
    printf("%4.1f,%4.3f\r\n",1/2.0,3.0/4);

    // 至少占几个字符宽
    printf("%2.1f,%2.3f\r\n",1.0/2.0f,3.0/4.0);

    // self
    printf("%%\r\n");

    printf("%d\r\n",MAX);

    // int 范围大于char，还包括其他一些输入，例如EOF
    // int c =getchar();
    // putchar(c);

    printf("%d\r\n",EOF);

    char c1='2';
    printf("is c1 char :%d\r\n",c1-'0'==2);
    sayHello(8,9);
    int arr[]={1,2,3,4,5};
    printArray(arr,5);

    // 调用外部变量得声明
    extern int count;
    alterCount(&count);
    printf("%d\r\n",count);

    // 先声明再用，也可以省略extern
    count2=888;
    printf("%d\r\n",count2);


    printf("||**********************introduce end******************||\r\n");

}


void sayHello(int i,int j){
    printf("hello,%d,%d\r\n",i,j);
}

// 注意和java的区别，java是int[] a和int a[] 都可以
void printArray(int a[],int size){

    //'for' loop initial declarations are only allowed in C99 mode
    // for(int i=0;i<size;++i){
    int i;
    for(i=0;i<size;++i){
        printf("%d",a[i]);
    }
    printf("\r\n");

}

void alterCount(int* i){
    *i=999;
}