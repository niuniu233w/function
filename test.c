#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//交换两个数的函数
//void swap1(int x, int y) //swap1被调用的时候形参是实参的一份临时拷贝，改变形参不能影响实参
//{
//	int temp = 0;
//	temp = y; 
//	y = x;
//	x = temp; //将a,b地址所指的值进行交换操作
//}
//void swap2(int* x, int* y) //定义两个指针接收a,b的地址
//{
//	int temp = 0;
//	temp = *y; 
//	*y = *x;
//	*x = temp; //将a,b地址所指的值进行交换操作
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap2(&a, &b); //&a,&b 将a,b的地址传给swap定义的指针参数
//	printf("%d %d\n", a, b);
//	return 0;
//}

