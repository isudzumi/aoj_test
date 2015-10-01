#include <iostream>
using namespace std;

int main()
{
	int n, m, i, l[i];
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> m;
		l[i] = m;
	}
	int j, k;
	for (i=0; i < n; i++){
		while(l[j] > l[i] && j>=0)
		{
			j = i - 1;
			k = l[i];
			l[i] = l[j];
			l[j] = k;
			j--;
			cout << l[j];
		}
		cout << endl;
	}
	return 0;
}