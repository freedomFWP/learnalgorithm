#include <iostream>
using namespace std;

//对已排好的两个数组进行合并
void merge(int arr[], int low, int mid, int high)
{
	int i = low, j = mid + 1;
	int count = 0;
	int *temp = new int[high - low + 1];//辅助数组，长度与原数组相同
	//谁小填谁
	for (i = low, j = mid + 1; i <= mid && j <= high;)
	{
		if (arr[i] <= arr[j])
		{
			temp[count++] = arr[i++];
		}
		else
		{
			temp[count++] = arr[j++];
		}
	}
	//判断i,j越界情况，将不越界的数组里的数直接补到temp中
	if (i <= mid)
	{
		for (; i <= mid; i++)
		{
			temp[count++] = arr[i];
		}
	}
	else
	{
		for (; j <= high; j++)
		{
			temp[count++] = arr[j];
		}
	}
	//将temp拷贝会原数组
	i = low;
	for (int k = 0; k < count&&i <= high; k++, i++)
	{
		arr[i] = temp[k];
	}
	delete[] temp;
}
//分而治之，将长数组一直进行二等分，当分到只剩一个时返回
void Msort(int* arr, int low, int high)
{
	if (low >= high) return;
	int mid = (low + high) / 2;
	Msort(arr, low, mid);
	Msort(arr, mid + 1, high);
	merge(arr, low, mid, high);
}

int main()
{
	int len;
	cout << "Please enter the length of array you want to sort : ";
	cin >> len;
	int *arr = new int[len];
	cout << "The data is : ";
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
	Msort(arr, 0, len - 1);
	cout << "After sort : ";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}