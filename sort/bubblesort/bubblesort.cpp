#include<iostream>
using namespace std;
/*冒泡实现从小到大,时间复杂度为O(N*N)*/
int bubblesort(int arr[],int n)
{
	//两次循环：i遍历n次，j遍历n次
	for (int i = 0; i <n -1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			//相邻位置前一个比后一个小则交换
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	for (int i = 0; i < n ; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
	return 0;
}
//测试用例
int main()
{
	int arr[7] = { 6,3,2,4,1,5,7 };
	bubblesort(arr,7);
	return 0;
}