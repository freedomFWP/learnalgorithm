#include<iostream>
using namespace std;

void quickSort(int array[], int left, int right)
{
	//���ִ�С�������䣬����һ��tempװ��Ҫ�жϵ�ֵ
	int less = left;
	int more = right;
	int temp = array[less];//������ֵ�趨Ϊ����
	//�ڷ�Խ�������¿�ʼ����
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
		//�ѻ�׼���ŵ�lessλ��
		array[less] = temp;
		//�ݹ鷽��
		quickSort(array, left, less - 1);
		quickSort(array, less + 1, right);
	}
}
int main()
{
	int len;
	cout << "����������鳤�� : ";
	cin >> len;
	int *arr = new int[len];
	cout << "����������� : ";
	for (int i = 0; i < len; i++)
	{
		cin >> arr[i];
	}
	quickSort(arr, 0, len - 1);
	cout << "���Ž�� : ";
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}