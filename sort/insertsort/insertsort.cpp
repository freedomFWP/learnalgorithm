/*��������ʵ�ִ�С����,ʱ�临�Ӷ�ΪO(N*N)*/
#include<iostream>
using namespace std;

int insertsort(int arr[], int len)
{
	for (int i = 0; i < len-1; i++)//iΪ������������һ��Ԫ��
	{
		int temp = arr[i + 1];//tempΪ������Ԫ�أ���ֵΪarr[i + 1]
		int j = i;
		//Ѱ�Ҳ���λ��
		while (j >= 0 && temp < arr[j])
		{
			arr[j + 1] = arr[j];//����temp��Ԫ�������ƶ�
			j--;
		}
		arr[j + 1] = temp;//temp����

		for (int i = 0; i < len; i++)
		{
			cout << arr[i] << "";
		}
		cout << endl;
	}
	cout << "-------------------" << endl;
	//����źõ�����
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << "";
	}
	cout << endl;
	return 0;
}
//��������
int main()
{
	int arr[6] = { 2,6,3,5,1,7 };
	insertsort(arr, 6);
	return 0;
}