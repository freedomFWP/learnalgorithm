#include<iostream>
using namespace std;
/*选择排序实现从小到大,时间复杂度为O(N*N)*/
int selectsort(int arr[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		int tempmin = i;
		for (int j = i; j < n  ; j++)
		{
			//找出j开始的最小数放在arr[tempmin]
			if (arr[j] < arr[tempmin])
				tempmin = j;	
		}
		//将找到的tempmin放置在i位置上
		if (arr[i] > arr[tempmin])
		{
			int temp = arr[i];
			arr[i] = arr[tempmin];
			arr[tempmin] = temp;
		}
	}
	//输出排好的数组
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
	cout << "-------------------" << endl;
	return 0;
}
//测试用例
int main()
{
	int arr[6] = { 2,6,3,5,1,7 };
	selectsort(arr, 6);
	return 0;
}