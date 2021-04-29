#include <stdio.h>
/* 
  由于C语言中没有面向对象的概念，所以我们想要使用对象这种结构，就需要通过结构体

  结构体:
    就相当于自定义数据类型，通过struct 关键字来声明结构

    
  

*/
void main()
{
  struct Person //声明一个结构，并标记为Person。简单来说就是声明一个Person结构。这里只是告诉编译器如何表示数据，并没有为数据分配空间
  {
    // char name[10];//char * str和 char str[10]的区别  前者是结构中只存放地址，不为字符串分配存储空间，适用于另外的地方已经为字符串分配了空间，后者是存储在结构内存，会分配10个字节来存放字符串
    char *name;
    int age;
  };
  //有名结构体有两种赋值形式   通过Person这个结构体 创建一个person变量
  // 创建结构变量 struct Person person。看到这个指令，编译器会创建一个person变量，使用Person模板为该变量分配空间，一个字符指针变量，一个整型变量。
  struct Person person = {"Lingzhi",21};

  struct Person person1;//注意 如果定义的时候没有赋值，接下来就只能挨个赋值了。
  person1.name = "Ling";
  person1.age = 20;

  printf("%s\n%d\n", person.name, person.age);
  printf("%s\n%d\n", person1.name, person1.age);

  getchar();
}