//
// Created by Caesar on 16/9/17.
//

int globalVar=97;
// 本文件能访问,其他文件不能访问
static int staticVar=98;

staticExtern(){
    // static只能在本文件使用,不能在其他文件使用
    static int i=-1;
    //作用域没有改变,但是,退出函数后,变量还存在.
}

// 访问区域在本文件
static void staticFunction(){

}

