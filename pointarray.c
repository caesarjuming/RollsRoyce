//
// Created by Caesar on 16/9/17.
//

void pointAndArray(){

    printf("||**********************pointarray start******************||\r\n");
    // 一元运算符* & 优先级比算数运算优先级高
    int i =1;
    int *p=&i;
    *p+=1;
    printf("%d\r\n",i);

    int arr[]={-1,-2,-3};
    printf("%d\r\n",arr[1]);

    int *pp=&arr[0];
    pp+=2;
    printf("%d\r\n",*pp);
    // arr 和 &arr[0]
    int *ppp=arr;
    printf("%d\r\n",*(++ppp));

    // 数组不是变量,不能和指针一样进行赋值



    printf("||**********************pointarray end******************||\r\n");
}

