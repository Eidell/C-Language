#include <stdio.h>
void Print(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
//void InsertSort(int* a, int n)
//{
//	for (int i = 0; i < n - 1; ++i)
//	{
//		int end = i;   //������������е�ĩβ�±�
//		int tmp = a[end + 1];  //���潫����Ԫ�صĴ�С
//		while (end >= 0)    //�������Ԫ�������
//		{
//			if (a[end] > tmp)
//			{
//				a[end + 1] = a[end];
//				--end;
//			}
//			else
//				break;
//		}
//			a[end + 1] = tmp;   //����Ԫ��
//	}
//}
//void TestInsertSort()
//{
//	int a[] = { 5,8,2,50,7,-1,100,66 };
//	int n = sizeof(a) / sizeof(a[0]);
//	InsertSort(a, n);
//	Print(a, n);
//}
//
//
//int main()
//{
//	TestInsertSort();
//}

void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap > 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; ++i)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (a[end] > tmp)
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}
void TestShellSort()
{
	int a[] = { 5,8,2,50,7,-1,100,66 };
	int n = sizeof(a) / sizeof(a[0]);
	ShellSort(a, n);
	Print(a, n);
}
int main()
{
	TestShellSort();
}





//void Swap(int* a, int* b)
//{
//	int tmp;
//	tmp = *a;
//	*a = *b;
//	*b = tmp;
//	
//}
//int PartSort(int* a, int left, int right)  //һ������
//{
//	int keyi = left;
//	while (left < right)
//	{
//		//r��С
//		while (left < right && a[right] >= a[keyi]) //��ȵ�����������ν
//		{
//			--right;
//		}
//		while (left < right && a[left] <= a[keyi])//����left<right ,���ܻ���
//		{
//			++left;
//		}
//		if(left<right) //û�������ͽ���
//		Swap(&a[left], &a[right]);
//	}
//	Swap(&a[left], &a[keyi]);
//	return left;   //���عؼ����ݵ��±� 
//}
//void QuickSort(int* a, int begin, int end)
//{
//	int keyi = PartSort(a, begin, end);
//	if (begin >= end)
//		return;
//	QuickSort(a, begin, keyi - 1);
//	QuickSort(a, keyi + 1, end);
//}
//
////�Ż�
//int GetMidIndex(int* a, int left, int right)
//{
//	int mid = left + (right - left) / 2;
//	if (a[left] < a[mid])
//	{
//		if (a[mid] < a[right])
//			return mid;
//		else if (a[right] < a[left])
//			return left;
//		else
//			return right;
//	}
//	else 
//	{
//		if (a[right] > a[left])
//			return left;
//		else if (a[mid] > a[right])
//			return mid;
//		else
//			return right;
//	}
//}
//void Test()
//{
//	int a[] = { 105,5,8,2,50,7,-1,100,66 };
//	int n = sizeof(a) / sizeof(a[0]);
//	QuickSort(a, 0, n - 1);
//	for (int i = 0;i < 9;++i)
//	{
//		printf("%d\n", a[i]);
//	}
//}
//int main()
//{
//	Test();
//	return 0;
//}