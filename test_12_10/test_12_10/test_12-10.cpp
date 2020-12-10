//编写程序数一下1到100的所有整数中出现多少个数字9
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//个位为9的数
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("一共出现9的个数为：%d\n", count);
//}


//计算1/1+1/2+1/3+1/4+......+1/99+1/100的值，打印出结果
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//	int i = 1;
//	int n = 1;
//	double sum = 0;
//	for (n = 1; n <= 100; n++)
//	{
//		if (n % 2 == 0)
//			sum = sum - 1.0 / n;
//		else
//			sum = 1.0 / n + sum;
//	}
//	printf("%f\n", sum);
//	return 0;
//}


//计算1/1+1/2+1/3+1/4+.......+1/99-1/100的值，打印出结果
// //注意数据类型，并且在输出时时%lf
//#include<stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 1;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += j*1.0 / i;
//		j = -j;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}


//编写代码在一个整形有序数组中查找具体的某个数，找到了就打印数字所在的下
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组中元素个数
//
//	int left = 0;//数组最左边数的下标
//	int right = sz - 1;//数组最右边数的下标
//
//	while (left <= right)//防止交叉
//	{
//		int mid = (left + right) / 2;//mid是中间数的下标
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//中间数在k右边，查找范围变为最左边的数和中间数前一个数之间
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;//中间数在K左边，查找范围变为中间数后一个数与最右边的数之间
//		}
//
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)//左大于右，即交叉
//	{
//		printf("找不到！\n");
//	}
//
//	return 0;
//}
