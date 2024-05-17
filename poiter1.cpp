#include <iostream>

using namespace std;
const int MAX = 3;

int main()
{
	int arr[MAX] = { 10, 20, 30 };
	int* contro;

	// con tro toi mang
	contro = arr; // arr dai dien cho gia tri dau tien cua mang arr
	for (int i = 0; i < MAX; i++)
	{
		cout << "Dia chi cua arr[" << i << "] = ";
		cout << contro << endl;

		cout << "Gia tri cua arr[" << i << "} = ";
		cout << *contro << endl;

		// tro toi vi tri tiep theo
		contro++;
	}
	return 0;
}