#include <iostream>
using namespace::std;

void makeArray()
{
	int N = 0;
	cout << "배열의 크기 입력하세요.\n";
	cin >> N;
	float* floatArray = new float[N];// 크기만큼의 배열 동적 할당

	float box = 0.f;
	float sum = 0.f;
	for (int i = 0; i < N; i++)
	{
		cout << "숫자를 입력하세요.\n";
		cin >> box;
		floatArray[i] = box;
		sum += floatArray[i];
	}
	float avg = sum / float(N);
	cout << "평균은?: " << avg;
	delete[] floatArray;//메모리 누수 방지 
}

int main(void)
{	
	//사용자로부터 N개의 숫자 입력 받는다.(동적배열) 

	//N개의 숫자의 평균 값 출력 함수로 구현
	makeArray();
	return 0;
}