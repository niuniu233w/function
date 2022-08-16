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


//判断1000-2000年之间的闰年


//int leap_year(int y)
//{
//	return (0 != y % 4 || (0 == y % 4 && 0 != y % 100));
//}
//
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (leap_year(year))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}


//int binary_search(int* a, int k, int s) //数组传参只传递数组第一个元素的地址
//{
//	int left = 0;
//	int right = s - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (a[mid] < k )
//		{
//			left = mid + 1;
//		}
//		else if (a[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//		
//}
//
//
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int key = 0;
//	scanf("%d", &key);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//找到了就返回找到的位置的下标
//	//找不到返回-1
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("找不到");
//	}
//	else
//		printf("找到了，下标为：%d", ret);
//	return 0;
//}