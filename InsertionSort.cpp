#include <iostream>
using namespace std;


int main()
{
	int n, i, j, v, k;
	
	cin >> n;
	int a[n-1];
	for(i = 0; i < n; i++){
		cin >> a[i];
	}
	
	for(i = 0; i < n; i++){
		v = a[i+1];
		a[i + 1] = a[i];
		while(a[j] > v){
			j++;
		}
		for(j; j<a[i];j--){
			a[j] = a[j+1];
		}
		cout << a[i] << " ";
	}
	cout << endl;
	return 0;
}