#include<iostream>
using namespace std;
/*ѡ������ʵ�ִ�С����,ʱ�临�Ӷ�ΪO(N*N)*/
int selectsort(int arr[], int n)
{
	for (int i = 0; i < n ; i++)
	{
		int tempmin = i;
		for (int j = i; j < n  ; j++)
		{
			//�ҳ�j��ʼ����С������arr[tempmin]
			if (arr[j] < arr[tempmin])
				tempmin = j;	
		}
		//���ҵ���tempmin������iλ����
		if (arr[i] > arr[tempmin])
		{
			int temp = arr[i];
			arr[i] = arr[tempmin];
			arr[tempmin] = temp;
		}
	}
	//����źõ�����
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
	cout << "-------------------" << endl;
	return 0;
}
//��������
int main()
{
	int arr[6] = { 2,6,3,5,1,7 };
	selectsort(arr, 6);
	return 0;
}