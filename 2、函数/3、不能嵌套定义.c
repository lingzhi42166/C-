#include <stdio.h>
/* 
  因为不能嵌套定义，所以只能在全局中定义，所以作用域链只有全局和本身。

*/
void func1(){
    printf("http://c.biancheng.net");
    /* void func2(){              //在C语言中，函数是不能嵌套定义的，与Javascript不一样
        printf("C语言小白变怪兽");
    } */
}

int main(){
    func1();
    return 0;
}