#include <stdio.h>
/* 
  整型数据类型:
    int:        占用2或4个字节  不同的环境下长度不同
    short int:  只占用2个字节   可以简写为short
    long int:   大于等于int长度 不同的环境下长度不同  可以简写为long

    C语言并没有严格规定 short、int、long 的长度，只做了宽泛的限制：
      1、short 至少占用 2 个字节。
      2、int 建议为一个机器字长。32 位环境下机器字长为 4 字节，64 位环境下机器字长为 8 字节。
      3、short 的长度不能大于 int，long 的长度不能小于 int。
      总结:
        2 ≤ short ≤ int ≤ long

    short、int、long 是C语言中常见的整数类型，其中 int 称为整型，short 称为短整型，long 称为长整型。
    short 可以节省内存，long 可以容纳更大的值。
    
    通过sizeof操作符查看指定的数据类型的长度
    (一种数据类型占用的字节数，称为该数据类型的长度)


    在现代操作系统中，int 一般占用 4 个字节（Byte）的内存，共计 32 位（Bit）。如果不考虑正负数，当所有的位都为 1 时它的值最大，为 232-1 = 4,294,967,295 ≈ 43亿，这是一个很大的数，实际开发中很少用到，而诸如 1、99、12098 等较小的数使用频率反而较高。
    使用 4 个字节保存较小的整数绰绰有余，会空闲出两三个字节来，这些字节就白白浪费掉了，不能再被其他数据使用。现在个人电脑的内存都比较大了，配置低的也有 2G，浪费一些内存不会带来明显的损失；而在C语言被发明的早期，或者在单片机和嵌入式系统中，内存都是非常稀缺的资源，所有的程序都在尽力节省内存。

*/
void main()
{
  int num1 = 1;
  short int num2 = 1;
  long int num3 = 1;
  printf("该平台下int 的长度=%d\n", sizeof(int));
  printf("int 的长度=%d\n", sizeof(num1));
  printf("short int 的长度=%d\n", sizeof(num2));
  printf("long int 的长度=%d\n", sizeof(num3));

  getchar();
}