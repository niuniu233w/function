#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//�����������ĺ���
//void swap1(int x, int y) //swap1�����õ�ʱ���β���ʵ�ε�һ����ʱ�������ı��ββ���Ӱ��ʵ��  ��ֵ����
//{
//	int temp = 0;
//	temp = y; 
//	y = x;
//	x = temp; //��a,b��ַ��ָ��ֵ���н�������
//}
//void swap2(int* x, int* y) //��������ָ�����a,b�ĵ�ַ ��ַ����
//{
//	int temp = 0;
//	temp = *y; 
//	*y = *x;
//	*x = temp; //��a,b��ַ��ָ��ֵ���н�������
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%d %d\n", a, b);
//	swap2(&a, &b); //&a,&b ��a,b�ĵ�ַ����swap�����ָ�����
//	printf("%d %d\n", a, b);
//	return 0;
//}

//��ӡ100-200֮�������

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


//�ж�1000-2000��֮�������


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


//int binary_search(int* a, int k, int s) //���鴫��ֻ���������һ��Ԫ�صĵ�ַ
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
//	//�ҵ��˾ͷ����ҵ���λ�õ��±�
//	//�Ҳ�������-1
//	int ret = binary_search(arr, key, sz);
//	if (-1 == ret)
//	{
//		printf("�Ҳ���");
//	}
//	else
//		printf("�ҵ��ˣ��±�Ϊ��%d", ret);
//	return 0;
//}