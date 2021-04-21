#include <stdio.h>
/* 
  有参函数:
    参数也是变量名，定义时需要声明数据类型，形参和实参如果存在自动转换类型 则可以不一致 比如 int类型的实参 赋值给float类型的 会自动转换成float类型的
    如果函数设置了形参，那么
    Javascript等弱类型语言则默认为var 变量


*/
int sum(int m, int n);//先声明

void main(){
  printf("sum=%d",sum(1,2));
  getchar();
}

int sum(int m, int n){ //形参只是一个占位符，只有当函数被调用的时候才会分配内存(栈)接收传递进来的数据，只能在函数体内使用，函数执行完毕后，就会被清除
    int i, sum=0;
    printf("m=%dn=%d\n",m,n);
    for(i=m; i<=n; i++){
        sum+=i;
    }
    return sum;
}