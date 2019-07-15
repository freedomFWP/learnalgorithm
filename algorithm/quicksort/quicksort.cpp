#include<iostream>
using namespace std;

void quickSort(int array[], int left, int right)
{
	//划分大小两个区间，设置一个temp装需要判断的值
	int less = left;
	int more = right;
	int temp = array[less];//将最左值设定为基数
	//在非越界条件下开始快排
	if (less < more)
	{
		while (less < more)
		{
			while (less < more &&  array[more] >= temp)
				more--;
			if (less < more)
			{
				array[less] = array[more];
				less++;
			}

			while (less < more && temp > array[less])
				less++;
			if (less < more)
			{
				array[more] = array[less];
				more--;
			}

		}
		//把基准数放到less位置
		array[less] = temp;
		//递归方法
		quickSort(array, left, less - 1);
		quickSort(array, less + 1, right);
	}
}
int main()
{
	int len;
	cout << "键入快排数组长度 : ";
	cin >> len;
	int *arr = new int[len];
	cout << "键入快排数组 : ";
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
	quickSort(arr, 0, len - 1);
	cout << "快排结果 : ";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}