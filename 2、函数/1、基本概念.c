#include <stdio.h>
//主函数  void关键字  该函数无返回值  只要被定义为void的函数 都不能接收返回值
void main(){

}
// 返回值为int类型的函数
int func(){

}
/* 
  定义函数:
    dataType  functionName(){
      //函数体
    }
    dataType 是返回值类型，它可以是C语言中的任意数据类型，例如 int、float、char 等。返回值的数据类型必须与定义的dataType相同
    functionName 是函数名

  注意:如果没有返回值 或者返回值不确定 dataType可以用 void 表示
  void是C语言中的一个关键字，表示“空类型”或“无类型”，绝大部分情况下也就意味着没有 return 语句。

  重点:
    一个C语言程序的执行过程可以认为是多个函数之间的相互调用过程，它们形成了一个或简单或复杂的调用链条。
  这个链条的起点是 main()，终点也是 main()。当 main() 调用完了所有的函数，它会返回一个值（例如return 0;）来结束自己的生命，从而结束整个程序。

*/