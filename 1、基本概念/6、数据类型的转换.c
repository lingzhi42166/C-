#include <stdio.h>
/* 
  数据类型转换
    自动类型转换(隐式转换):
      1.将一种类型的数据赋值给另外一个类型的变量的时候就会自动转换
      比如:float类型赋值给int类型会自动转换成int
      在赋值运算中，赋值号两边的数据类型不同时，需要把右边表达式的类型转换为左边变量的类型，这可能会导致数据失真，或者精度降低；所以说，自动类型转换并不一定是安全的。对于不安全的类型转换，编译器一般会给出警告。
      2.不同类型的混合运算，编译器也会自动转换，将参与运算的所有数据先转换成一样的类型，再计算
      转换规则：
        1、按照数据长度增加的方向进行，以此保证数据不失真，精度不降低。
        比如int和long参与运算，先把int转换成long后再计算
        2、把所有浮点类型的都转换成双精度进行运算，即使都是float类型，也会转换成doble类型，再运算
        3、char和short参与运算，会先转换成int

    强制类型转换:
      自动类型转换是编译器根据上下文环境自动判断后的结果，并不完全智能。
      所以有些需要代码中明确类型转换。
      转换方式:
      (type_name) expression
      type_name为新的数据类型，expression为表达式
      (float) a   => 将变量a转换成float类型
      (int) (x+y) => 将x+y的结果转换成int类型




 */

// 需要强制转换的例子
void main()
{
  // 比如整数相除的表达式，因为都是整数型的 所以没有隐式转换，结算后的结果就会完全忽略小数点部分，如果结果需要小数点，那么就需要强制转换数据类型了。
  int sum = 103;  //总数
  int count = 7;  //数目
  double average; //平均数
  double average1;

  average1 = sum / count; //因为sum和count都是int类型，所以运算后的结果会完全忽略小数部分
  average = (double)sum / count; //就需要强制转换数据类型了
  printf("Average is %lf!\n", average);//Average is 14.714286!
  printf("Average1 is %lf!\n", average1);//Average1 is 14.000000!
  getchar();
}

