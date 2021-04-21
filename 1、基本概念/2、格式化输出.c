#include <stdio.h>
char c = '@'; //单引号为字符  双引号为字符串  数据类型不同
char str[] = "string";
float f = 66.66;
/* 
  puts()    只能用来输出字符串 并且输出结束后会自动换行
  putchar()：只能输出单个字符
  printf  可以用来输出字符串、整数、小数、单个字符
  并且输出格式也可以自己定义，例如：
    以十进制 %d、八进制、十六进制形式输出；
    要求输出的数字占 n 个字符的位置；
    控制小数的位数。
*/

//先来看 %d格式控制符  表示以十进制整数的形式输出 并且与后面的变量是一一对应的，第一个 %d 对应第一个变量，第二个 %d 对应第二个变量……
void main(){
  printf("a=%d,b=%d,c=%d\n",1,2,3);
  PrintfCharacter(); 
  PrintfString();
  PrintfFloat();
  getchar();
}

//%c 输出一个字符
void PrintfCharacter(){
  printf("char=%c\n",c);
}

//%s：输出一个字符串。s 是 string 的简写。
void PrintfString(){
  printf("str=%s\n",str);
}

// %f：输出一个小数。f 是 float 的简写。
void PrintfFloat(){
  printf("str=%f",f);
}