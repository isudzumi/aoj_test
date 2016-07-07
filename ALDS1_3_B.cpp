#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main(){
		int n, q;
		cin >> n >> q;
		queue<string> name;
		queue<int> time;
		string nm;
		int t;
		for(int i = 0; i < n; i++){
				cin >> nm >> t;
				name.push(nm);
				time.push(t);
		}
		int sum = 0;
		while( !time.empty() ){
				nm = name.front();
				name.pop();
				t = time.front();
				time.pop();
				if( t > q ){
						t -= q;
						sum += q;
						time.push(t);
						name.push(nm);
				}else{
						sum += t;
						cout << nm << " " << sum << endl;
				}
		}
		
		return 0;

}
