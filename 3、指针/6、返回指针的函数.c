#include <stdio.h>
/* 
    注意:
      在旧版本的C语言中，对于指针函数运行结束后会销毁函数的局部数据，这里的销毁并不是将局部数据所占用的空间清零，
      而是该程序放弃对它的权限，后面的代码可能还是可以访问到的(前提是再此之前没有对内存进行操作)。
      在新版本中，直接访问会报错。

      如果变量前面加了static关键字 则该变量会存储在全局区/静态存储区中



    旧版本以下的程序是可以执行的，新版本的不行。
    int *func()
    {
      int n = 10;
      return &n;
    }
    void main()
    {
      int *p = func();
      int i;
      i = *p;
      printf("%d\n", i);
      printf("%p\n", func());
      getchar();
    }
*/
int *func() //定义一个返回指针的函数
{
  static int n = 10;//存储在静态存储区中，并不会随着函数执行完毕后回收。
  return &n;
}
void main()
{
  int *p = func();
  int i;
  i = *p;
  printf("%p\n", func());
  printf("%d\n", i);
  getchar();
}
