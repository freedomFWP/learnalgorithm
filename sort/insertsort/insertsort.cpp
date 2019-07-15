/*插入排序实现从小到大,时间复杂度为O(N*N)*/
#include<iostream>
using namespace std;

int insertsort(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)//i为有序数组的最后一个元素
	{
		int temp = arr[i + 1];//temp为待插入元素，初值为arr[i + 1]
		int j = i;
		//寻找插入位置
		while (j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];//大于temp的元素往后移动
			j--;
		}
		arr[j + 1] = temp;//temp后移

		for (int i = 0; i < len; i++)
		{
			cout << arr[i] << "";
		}
		cout << endl;
	}
	cout << "-------------------" << endl;
	//输出排好的数组
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
	return 0;
}
//测试用例
int main()
{
	int arr[6] = { 2,6,3,5,1,7 };
	insertsort(arr, 6);
	return 0;
}