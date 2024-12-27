#include <iostream>
using namespace::std;

//CHALLENGE ASSIGNMENT

int N;//귀찮아서 전역변수 사용 0으로초기화
int* makeArray()
{
	
	cout << "배열의 크기 입력하세요.\n";
	cin >> N;
	int* intArray = new int[N];// 크기만큼의 배열 동적 할당(힙메모리에 만듬)

	int box = 0;

	for (int i = 0; i < N; i++)
	{
		cout << "숫자를 입력하세요.\n";
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
			else //같거나 작다면
			{
				//다시 반복조건문으로 
				continue;
			}
		}
	}
	
}

void sortDescending(int* ptr, int size)
{
	//1. 오름차순 정리한다.
	sortAscending(ptr, size);
	//2. for문으로 반대로 저장한다.
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

	cout << "오름차순 1 입력, 내림차순 2 입력\n";
	cin >> n;
	
	if (n == 1) //오름차순
	{
		sortAscending(ptr, size);
		//정렬된 배열출력
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << ",";
		}
	}
	else if (n == 2) //내림차순 
	{
		sortDescending(ptr, size);
		for (int i = 0; i < size; i++)
		{
			cout << ptr[i] << ",";
		}
	}


	else
	{
		cout << "1,2만 입력하세요.\n";
		return;
	}

	
}

int main(void)
{
	
	//int array 받아오기
	int* intArray = makeArray();
	
	sortFunc(intArray, N/*귀찮아서전역변수*/);
	//오름차순 과 내림차순 정렬
	//숫자 1 -> 오름차순 정렬
	//숫자 2 -> 내림차순 정렬 
	//코드 최소화 해서 만들기!->재사용해라 ex)오름차순 함수를 이용해서 내림차순으로 만들기 
	//각각 함수로 구현
	delete[] intArray;//메모리 누수 방지 
	return 0;
}