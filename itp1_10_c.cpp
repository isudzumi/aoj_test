#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	int n;
	while(cin >> n){
		if(n == 0)
			break;
		int s[n], m = 0;
		for(int i = 0; i < n; i++){
			cin >> s[i];
			m += s[i];
		}
		m /= n;
		int a2 = 0;
		for(int i = 0; i < n; i++){
			a2 += (s[i] - m) * (s[i] - m);
		}
		a2 /= n;
		double a = static_cast<double>(sqrt(a2));
		cout << fixed << setprecision(8) << a << endl;
	}
	return 0;
}
