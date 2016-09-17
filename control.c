//
// Created by Administrator on 2016/9/16.
//

#include <stdio.h>
#include <math.h>
void control(){
    int a=1;
    if (a>1)
        printf("a");
    else if(a<=1){
        printf("b");
    }
    switch(a){
        case 1:printf("1");
            break;
        case 2:printf("2");
            break;
        default:printf("none");
    }

    while(0)
        ;
    for(;;){
        break;
    }


}

