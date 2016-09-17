//
// Created by Administrator on 2016/9/15.
//
#include <limits.h>
#include <float.h>
#include <ctype.h>

#define BELL '\013'

enum boolean{
    NO,YES
};

void typeExpress(){


    printf("||**********************typeexpress start******************||\r\n");

    // short与int类型至少是16位，而long类型至少为32位，
    // 并且short类型不得长于int类型，而int类型不得长于long类型

    // 类型限定符signed与unsigned可用于限定char类型或任何整形
    long l=100l;
    unsigned long ul=1000ul;

    // 没有后缀的浮点数为double
    long double ld=10000000.12345;

    char arr[]="hello" "world";
    int len=strlen(arr);
    printf("%d\r\n",len);

    printf("%d\r\n",YES);

    // 如果变量不是自动变量，则只能进行一次初始化操作
    // 默认情况，外部变量和静态变量将被初始化为0，未经初始化的值为无效值。

    // %运算符不能应用于float和double，有负数的情况下，整数除法，和取模的符号取决于具体的实现
    printf("%d\r\n",3/-2);
    printf("%d\r\n",-3/2);

    // 二元运算符 + - 具有相同的优先级，他们都优先级比* / % 低，但是 * / % 比+ -的一元运算符低
    // 运算符从左到右结合

    // > >= < <= 优先级小于 == !=

    // 关系运算符优先级比算数运算符低

    printf("%d\r\n",isdigit('2'));

    // 如果要在char类型的变量中存储非字符数据，最好指定signed或unsigned限定符

    char c1='a';
    short s1=1;
    // char和short运算会提升为int类型
    int i1=c1+s1;

    int i2=2,i3=3;
    printf("%d\r\n",i2++ + ++i3);

    // 位运算符只能用于整形
    // char short int long
    printf("%d,%d,%d\r\n",1|2,1&2,1^2);

    // << >> 右操作数必须是非负的
    printf("%d,%d\r\n",1>>2,1<<2);

    // ~反码
    printf("%d\r\n",~3);

    int x=1,y=2;
    x+=y+1;
    printf("%d\r\n",x);

    int n=1;

    // 和n的取值没关系，两个值都是float类型
    float f1=n>0?1:2.0;

    int arr2[]={1,2,3,4,5};

    // error
    // int i2=arr2[i2++];



    printf("||**********************typeexpress end******************||\r\n");




    return;
}

