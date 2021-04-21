/* 
  全局变量:
    整个程序(系统)都可以访问
    如果变量前面加了static关键字 则该变量的作用域只在当前文件 只能被当前文件访问
  局部变量:(块级作用域)
    函数内定义的变量，包括形参，都是局部变量。
    因为函数执行后就是栈(Stack)中的一个帧，执行完毕后就会被回收(出栈)，帧内部变量就会被释放。
    Stack 是由于函数运行而临时占用的内存区域。
  块级作用域:
    在C语言中，只要是{}括起来的就是代码块，具有块级作用域，其内部定义的变量，就只能是内部使用。
    在Javascirpt ES6之前，只有函数有块级作用域，循环判断等都没有。


 */