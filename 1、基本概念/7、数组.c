#include <stdio.h>
/* 
  数组是一个整体，它的内存是连续的；也就是说，数组元素之间是相互挨着的，彼此之间没有一点点缝隙。
  连续的内存为指针操作（通过指针来访问数组元素）和内存处理（整块内存的复制、写入等）提供了便利，这使得数组可以作为缓存（临时存储数据的一块内存）使用
  创建数组必须先分配内存，如果初始化的时候就赋值就可以无需设置长度，编译器会自动推算，如果初始化没有赋值，就必须先给出数组长度
  
  
  静态数组(传统数组)一旦定义了长度，就不能更改，也就是在运行的过程中数组的长度不能动态扩充和缩小
  静态数组(传统数组)所占用的内存空间无法手动释放

  创建数组的方式:(dataType arrayName[length])
    int arr[]  创建整型数组
    char arr[] 创建字符数组
    float arr[] 创建浮点数组
    ...

  通过sizeof(arr) 获取数组的长度  注意 这里的长度不是元素的个数，而是占用的内存大小

 */
void main()
{

  //1、先定义后赋值的，就必须在定义的时候给出数组长度，让编译器分配好内存
  int array[10]; //创建一个长度为10的数组  默认会分配10个垃圾值
  for (int i = 0; i < 10; i++)
  {
    array[i] = i;
    printf("array=%d", array[i]);
  };

  //2、定义的时候就赋值，可以不用给出数组的长度，编译器会自动推算出长度。 注意表达式的格式不同

  int array1[] = {1, 2, 3, 4, 5, 6}; // =>  int array1[6] = {1,2,3,4,5,6}

  //3、如果赋值元素少于初始化数组的长度的话，后面的元素会自动初始化为该数组的数据类型的0
  //对于short、int、long，就是整数 0；
  //对于char，就是字符 '\0'；
  //对于float、double，就是小数 0.0。

  /*  4、我们可以通过下面的形式将数组的所有元素初始化为 0：
  int nums[10] = {0};
  char str[10] = {0};
  float scores[10] = {0.0};
  由于剩余的元素会自动初始化为 0，所以只需要给第 0 个元素赋值为 0 即可。
  */
}