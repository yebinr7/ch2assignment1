#include <iostream>
using namespace::std;

//CHALLENGE ASSIGNMENT

int N;//�����Ƽ� �������� ��� 0�����ʱ�ȭ
int* makeArray()
{
	
	cout << "�迭�� ũ�� �Է��ϼ���.\n";
	cin >> N;
	int* intArray = new int[N];// ũ�⸸ŭ�� �迭 ���� �Ҵ�(���޸𸮿� ����)

	int box = 0;

	for (int i = 0; i < N; i++)
	{
		cout << "���ڸ� �Է��ϼ���.\n";
		cin >> box;
		intArray[i] = box;
	}
	
	return intArray;
}

void sortAscending(int* ptr, int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1; j++)
		{
			if (*(ptr + j) > *(ptr + j + 1))
			{
				int temp = ptr[j];
				ptr[j] = ptr[j + 1];
				ptr[j + 1] = temp;
			}
			else //���ų� �۴ٸ�
			{
				//�ٽ� �ݺ����ǹ����� 
				continue;
			}
		}
	}
	
}

void sortDescending(int* ptr, int size)
{
	//1. �������� �����Ѵ�.
	sortAscending(ptr, size);
	//2. for������ �ݴ�� �����Ѵ�.
	int temp = 0;
	for (int i = 0; i < (size / 2); i++)
	{
		temp = ptr[i];
		ptr[i] = ptr[size - 1 - i];
		ptr[size - 1 - i] = temp;
	}
}

void sortFunc(int* ptr,int size)
{
	int n = 0;

	cout << "�������� 1 �Է�, �������� 2 �Է�\n";
	cin >> n;
	
	if (n == 1) //��������
	{
		sortAscending(ptr, size);
		//���ĵ� �迭���
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << ",";
		}
	}
	else if (n == 2) //�������� 
	{
		sortDescending(ptr, size);
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << ",";
		}
	}


	else
	{
		cout << "1,2�� �Է��ϼ���.\n";
		return;
	}

	
}

int main(void)
{
	
	//int array �޾ƿ���
	int* intArray = makeArray();
	
	sortFunc(intArray, N/*�����Ƽ���������*/);
	//�������� �� �������� ����
	//���� 1 -> �������� ����
	//���� 2 -> �������� ���� 
	//�ڵ� �ּ�ȭ �ؼ� �����!->�����ض� ex)�������� �Լ��� �̿��ؼ� ������������ ����� 
	//���� �Լ��� ����
	delete[] intArray;//�޸� ���� ���� 
	return 0;
}