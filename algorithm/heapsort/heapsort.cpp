#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//ʵ�ִ���ѣ��ϴ���ֵ�����Ĺ���
void heapify(vector<int> &arr, int len, int index)
{
	//���������鶨��Ϊһ����ȫ���������趨���Һ��ӽڵ��븸�ڵ�
	int left = 2 * index + 1;
	int right = 2 * index + 2;
	int maxindex = index;
	//���Ӵ��ڸ��ڵ��ֵʱ�������Ӹ�ֵ��maxindex
	if (left<len&&arr[left]>arr[maxindex])
		maxindex = left;
	//�Һ��Ӵ��ڸ��ڵ��ֵʱ�����Һ��Ӹ�ֵ��maxindex
	if (right<len&&arr[right]>arr[maxindex]) 
		maxindex = right;
	//��maxindex�ϵ�ֵ�����ֵ�븸�ڵ��ֵ����
	if (maxindex != index)
	{
		swap(arr[maxindex], arr[index]);
		heapify(arr, len, maxindex);
	}
}
//������
void heapsort(vector<int> &arr, int size)//size ���鳤�ȣ�i
{
	//�ȹ�������ѣ������һ����Ҷ�ӽڵ�����
	for (int i = size / 2 - 1; i >= 0; i--)
	{
		heapify(arr, size, i);
	}
	//���������
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