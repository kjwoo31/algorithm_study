#include <iostream>
using namespace std;

void multidim()
{
	const int num_rows = 3; // �迭�� �������� const int
	const int num_cols = 5;

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_cols; col++)
			cout << '[' << row << ']' << '[' << col << ']' << '\t';
		cout << endl;
	}

	cout << endl;

	int array[][num_cols] =
	{
		{1,2,}, // �� �κ��� 0
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	for (int row = 0; row < num_rows; row++)
	{
		for (int col = 0; col < num_cols; col++)
			cout << array[row][col] << '\t'; //�ּҴ� ������� ����
		cout << endl;
	}


	return;
}