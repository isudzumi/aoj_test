#include<iostream>
#include<cstring>
using namespace std;

int main()
{
		cin.tie(0);
		ios::sync_with_stdio(0);
		int n;
		cin >> n;
		string str;
		int x, a[n], c = 0;
		int *p;
		for(int i = 0; i < n; ++i){
			cin >> str;
			if(str == "insert"){
				cin >> x;
				if( c > 0 ){
					p = a;
					memmove(p+1, p, c*sizeof(int));
				}
				a[0] = x;
				++c;
				for(int j = 0; j < c; ++j)
					cout << a[j] << " ";
				cout << endl;
			} else if(str == "delete"){
				cin >> x;
				for(p = a; p < &a[c]; ++p)
					if( *p == x ){
						for(p; p < &a[c]; ++p)
							*p = *(p+1);
						--c;
						break;
					}
			} else if(str == "deleteFirst"){
				for(p = a; p < &a[c]; ++p)
					*p = *(p+1);
				--c;
			} else if(str == "deleteLast"){
				--c;
			}
		}
		//output
		for(int i = 0; i < c-1; i++){
			cout << a[i] << " ";
		}
			cout << a[c-1] << endl;
		return 0;	
}
