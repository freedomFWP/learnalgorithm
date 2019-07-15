#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//实现大跟堆，较大数值上升的过程
void heapify(vector<int> &arr, int len, int index)
{
	//将输入数组定义为一个完全二叉树，设定左右孩子节点与父节点
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	int maxindex = index;
	//左孩子大于父节点的值时，将左孩子赋值给maxindex
	if (left<len&&arr[left]>arr[maxindex])
		maxindex = left;
	//右孩子大于父节点的值时，将右孩子赋值给maxindex
	if (right<len&&arr[right]>arr[maxindex]) 
		maxindex = right;
	//将maxindex上的值即最大值与父节点的值交换
	if (maxindex != index)
	{
		swap(arr[maxindex], arr[index]);
		heapify(arr, len, maxindex);
	}
}
//堆排序
void heapsort(vector<int> &arr, int size)//size 数组长度，i
{
	//先构建大跟堆，从最后一个非叶子节点向上
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		heapify(arr, size, i);
	}
	//调整大根堆
	for (int i = size  - 1; i >= 1; i--)
	{
		swap(arr[0], arr[i]);
		heapify(arr, i, 0);
	}
}
int main()
{
	vector<int> arr = { 2,6,3,5,1,7 };
	heapsort(arr, arr.size());
	for (int i = 0; i < arr.size(); i++)
	{
		cout << arr[i] <<"";
	}
	cout << endl;
	return 0;
}