#include <iostream>
using namespace std;

void trace(int a[], int n){
	for(int i = 1; i <= n; i++){
		if(i > 1){
			cout << " ";
		}
		cout << a[i];
	}
	cout << endl;
}

int main()
{
	int n, i, j;
	int a[100+1];
	
	cin >> n;
	for(i = 1; i <=n; i++){
		cin >> a[i];
	}
	
	trace(a, n);
	return 0;
}