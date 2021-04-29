#include <stdio.h>
void main()
{
  /*  结构体还可以是匿名结构体
        也就是使用一次就不使用了
  */
//匿名结构体的第一种使用方式
  struct
  {
    char *name;
    int age;
  }person,person1;

  person.name = "Lingzhi";
  person.age = 21;
  person1.name = "Ling";
  person1.age = 20;
  printf("%s\n%d\n", person.name, person.age);
  printf("%s\n%d\n", person1.name, person1.age);

//匿名结构体的第二种使用方式
  struct
  {
    char *name;
    int age;
  }person2={"Lingzhi",21},person3={"Ling",20};
  printf("%s\n%d\n", person2.name, person2.age);
  printf("%s\n%d\n", person3.name, person3.age);

  getchar();
}