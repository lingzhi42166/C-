//头文件 编译后会通过链接.exe把目标文件和库文件链接到一起 生成可执行文件
#include <stdio.h>
// 主函数，程序执行的入口。程序就是从main函数开始执行
// 一个程序只能有一个main主函数
void main(){
  printf("Hello world!!");//printf函数就是在stdio库文件中定义的
  getchar();
}