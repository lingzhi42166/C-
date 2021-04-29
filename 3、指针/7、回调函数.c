#include <stdio.h>

/* 
  函数指针:
    用来实现回调函数。
    函数的地址 只能是函数指针类型接收
    int (*p)(attr1Type,attr2Type...)
      1、函数指针名为p
      2、该函数指针指向的函数所返回的数据类型是int类型的，也就是该函数指针能存储int类型的函数
      3、attrType 是 函数指针所指向的函数的形参必须是attrType所指定的类型的


    调用函数指针：
      (*p)()
      p();


*/
int cb(int num1, int num2)
{
  return num1 + num2;
}
int func(int (*cb)(int, int))
{
  int i = 1;
  int j = 2;
  int amount = cb(i, j);//(*cb)(i,j)
  printf("%d\n",amount);
}
void main()
{
  func(cb);
  getchar();
}
