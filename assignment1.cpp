#include <iostream>
using namespace::std;

void makeArray()
{
	int N = 0;
	cout << "�迭�� ũ�� �Է��ϼ���.\n";
	cin >> N;
	float* floatArray = new float[N];// ũ�⸸ŭ�� �迭 ���� �Ҵ�

	float box = 0.f;
	float sum = 0.f;
	for (int i = 0; i < N; i++)
	{
		cout << "���ڸ� �Է��ϼ���.\n";
		cin >> box;
		floatArray[i] = box;
		sum += floatArray[i];
	}
	float avg = sum / float(N);
	cout << "�����?: " << avg;
	delete[] floatArray;//�޸� ���� ���� 
}

int main(void)
{	
	//����ڷκ��� N���� ���� �Է� �޴´�.(�����迭) 

	//N���� ������ ��� �� ��� �Լ��� ����
	makeArray();
	return 0;
}