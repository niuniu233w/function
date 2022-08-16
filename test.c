#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//交换两个数的函数
//void swap1(int x, int y) //swap1被调用的时候形参是实参的一份临时拷贝，改变形参不能影响实参  传值调用
//{
//	int temp = 0;
//	temp = y; 
//	y = x;
//	x = temp; //将a,b地址所指的值进行交换操作
//}
//void swap2(int* x, int* y) //定义两个指针接收a,b的地址 传址调用
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

//打印100-200之间的素数

//#include<math.h>
//
//int is_prime(int x)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(x); i++)
//	{
//		if (x % i == 0)
//			return 0;
//	}
//	return 1;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//
//}


