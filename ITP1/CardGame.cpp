#include<iostream>
using namespace std;

int main()
{
	int n, tp = 0, hp = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		string taro, hanako;
		cin >> taro >> hanako;
		if(taro > hanako){
			tp += 3;
		}else if(taro < hanako){
			hp += 3;
		}else {
			tp += 1;
			hp += 1;
		}
	}
	cout << tp << " " << hp << endl;
	return 0;
}