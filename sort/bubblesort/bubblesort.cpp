#include<iostream>
using namespace std;
/*ð��ʵ�ִ�С����,ʱ�临�Ӷ�ΪO(N*N)*/
int bubblesort(int arr[],int n)
{
	//����ѭ����i����n�Σ�j����n��
	for (int i = 0; i <n -1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{
			//����λ��ǰһ���Ⱥ�һ��С�򽻻�
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
//��������
int main()
{
	int arr[7] = { 6,3,2,4,1,5,7 };
	bubblesort(arr,7);
	return 0;
}