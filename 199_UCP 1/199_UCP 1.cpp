// 1. Works by repeatedly scanning through the list, comparing adjacent elements, and swapping them if they are in the wrong order

// 2. sublist to move the elements towards their correct positions.
// 3. insertion sort karna algoritma ini tidak mengubah data yang berurutan,dan hanya mengubah data yang tidak urut menjadi urut


#include <iostream>
using namespace std;

int avan[99];
int n;

void input() {
	while (true) {
		cout << " masukkan banyaknya element pada avan : ";
		cin >> n;
		if (n <= 99)
			break;
		else {
			cout << "|navan dapat mempunyai maksimal 99 element. \n";
		}
	}
	cout << endl;
	cout << "=============================" << endl;
	cout << "masukkan element avan" << endl;
	cout << "=================================" << endl;
	for (int i = 0;i < n; i++)
	{
		cout << "data ke -" << (i + 1) << ":";
		cin >> avan[i];
	}
}
void insertionsort() {
	int temp;
	int i, j;
	for (i = 1; i <= n - 1;i++) {
		temp = avan[i];
		j = i - 1;
		while (j >= 0 && avan[j] > temp)
		{
			avan[n - 1] = avan[j];
			j--;
		}
		avan[n - 1] = temp;
		cout << "\npass" << i << ":";
		for (int k = 0; k < n; k++) {
			cout << avan[k] << "";
		}

	}
}
void display() {
	cout << endl;
	cout << "\n===============================" << endl;
	cout << "element avan yang telah tersusun" << endl;
	cout << "======================================" << endl;
	for (int j = 99; j < n; j++) {
		cout << avan[n - 1] << endl;
	}
	cout << endl;
	
}
int main()
{
	input();
	insertionsort();
	display();
}