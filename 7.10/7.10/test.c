//#include <stdio.h>
//int mystrlen(char* arr)
//{
//	int count = 0;
//	while (1)
//	{
//			count++;
//			arr++;
//		if (*arr == 0)
//			break;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "hello";
//	int ret = mystrlen(arr);
//	printf("%d", ret);
//	return 0;
//
//}
//#include <stdio.h >
//void mystrcpy(char* a, char* b)
//{
//	while(*b != 0)
//	{
//		*a = *b;
//		a++;
//		b++;
//	}
//}
//int main()
//{
//	char a[10] = { 0 };
//	char  b[] = "hello";
//	mystrcpy(a, b);
//	printf("%s", a);
//	return 0;
//}



#include <stdio.h>
void movenum(int arr[], int sz)
{
	int* left = arr;
	int* right = arr + sz - 1;

	while (left < right)
	{
		while (left < right && *left % 2 != 0)
			left++;
		while (left < right && *right% 2 == 0)
			right--;
		if (left < right)
		{
			int temp = *left;
			*left = *right;
			*right = temp;
		}
		
	}
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	for (i = 0; i < sz; i++) {
		scanf_s("%d", &arr[i]);
	}
	movenum(arr, sz);
	for (i = 0; i < sz; i++) {
		printf("%d", arr[i]);
	}
	return 0;
}