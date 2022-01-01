#include<iostream>
using namespace std;

int Khayam(int num);
int main() {
	int nums, n;
	cout << "enter number : ";
	cin >> n;
	for (int i = 0; i <= n - 1; i++) {
		for (int j = 0; j < n - i; j++)
			cout << "  ";
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i)
				nums = 1;
			else
				nums = Khayam(i) / (Khayam(j) * Khayam(i - j));
			cout << "   " << nums;
		}
		cout << endl;
	}
	return 0;
}
int Khayam(int num) {
	int Khayam = 1;
	for (int i = 1; i <= num; i++)
		Khayam *= i;
	return Khayam;
}

