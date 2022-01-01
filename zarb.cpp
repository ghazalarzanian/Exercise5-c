#include<iostream>
using namespace std;

int main()
{
	int n, m;
	cout << "n(col):" << endl;
	cin >> n;
	cout << "m(row):" << endl;
	cin >> m;
	int i, j;
	for (i = 1;i <= m;i++)
	{
		for (j = 1;j <= n;j++)
			cout << i * j << "\t";
		cout << "\n";
	}
	return 0;
}    