#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	bool m1a[n], m2a[n];

	//‰Šú‰»
	for(int i = 0; i < n; i++){
		m1a[i]=0;
		m2a[i]=0;
	}

	//“ü—Í
	int m1, m2, x;
	cin >> m1;
	for(int i = 0; i < m1; i++){
		cin >> x;
		m1a[x-1] = 1;
	}

	cin >> m2;
	for(int i = 0; i < m2; i++){
		cin >> x;
		m2a[x-1] = 1;
	}

	//ˆ—
	for(int i = 0; i  < n; i++){
		(!m1a[i]) ? m1a[i] += m2a[i] : m1a[i] = 0;
	}

	//o—Í
	int m = 0;
	for(int i = 0; i < n; i++)
		if(m1a[i]) m++;
	if(m == 0){
		cout << "None" << endl;
	}else{
		for(int i = 0; i < n; i++)
			if(m1a[i])
				(i == n-1) ? cout << i+1 << endl : cout << i+1 << " ";
	}
	
	return 0;
}
