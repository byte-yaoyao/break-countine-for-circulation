//��д������һ��1��100�����������г��ֶ��ٸ�����9
//#include<stdio.h>
//int main()
//{
//	int i = 1;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)//��λΪ9����
//		{
//			printf("%d\n", i);
//			count++;
//		}
//	}
//	printf("һ������9�ĸ���Ϊ��%d\n", count);
//}


//����1/1+1/2+1/3+1/4+......+1/99+1/100��ֵ����ӡ�����
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


//����1/1+1/2+1/3+1/4+.......+1/99-1/100��ֵ����ӡ�����
// //ע���������ͣ����������ʱʱ%lf
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


//��д������һ���������������в��Ҿ����ĳ�������ҵ��˾ʹ�ӡ�������ڵ���
//#include<stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int k = 5;
//	int sz = sizeof(arr) / sizeof(arr[0]);//����������Ԫ�ظ���
//
//	int left = 0;//��������������±�
//	int right = sz - 1;//�������ұ������±�
//
//	while (left <= right)//��ֹ����
//	{
//		int mid = (left + right) / 2;//mid���м������±�
//		if (arr[mid] > k)
//		{
//			right = mid - 1;//�м�����k�ұߣ����ҷ�Χ��Ϊ����ߵ������м���ǰһ����֮��
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;//�м�����K��ߣ����ҷ�Χ��Ϊ�м�����һ���������ұߵ���֮��
//		}
//
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)//������ң�������
//	{
//		printf("�Ҳ�����\n");
//	}
//
//	return 0;
//}
