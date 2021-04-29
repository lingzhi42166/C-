#include <stdio.h>
/* 
  结构体的应用:
    定义一个Dog结构体，通过say函数把Dog的成员通过字符串形式输出

*/
struct Dog //定义一个Dog结构体类型
{
  char *name;
  int age;
  double weight;
};
char *say(struct Dog dog) //根据Dog结构来分配内存空间，然后被dog连结一起。
{
  static char info[50];

  sprintf(info, "name=%s age=%d weight=%f", dog.name, dog.age, dog.weight);
  // printf("%p\n",info);
  return info; //字符串的名字会自动转换为字符串的地址，所以不用再多此一举加 & 了
}
void main()
{
  struct Dog dog;
  char *info = NULL;
  dog.name = "Dog";
  dog.age = 10;
  dog.weight = 30.6;
  info = say(dog);
  printf("%s\n", info);//需要注意的是，info存储的是字符串首个字符的地址，所以通过*info访问的是字符串的第一个字符 输出字符%c 而不是%f 如果是*info 输出为%f程序会被终止
  // 输出字符串就是传入字符串的起始地址。
  getchar();
}