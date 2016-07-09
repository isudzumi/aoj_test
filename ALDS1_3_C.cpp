#include <iostream>
#include <list>
using namespace std;

int main(){
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n;
	list<int> li;
	list<int>::iterator itr;
	string  com;
	int x;
	cin >> n;
	for(int i = 0; i < n; ++i ){
		cin >> com ;
		if (com == "insert"){
			cin >> x;
			li.push_front(x);
		}else if ( com == "delete"){
			cin >> x;
			for(itr = li.begin(); itr != li.end(); ++itr){
				if(*itr == x){
					li.erase(itr);
					break;
				}
			}
		}else if (com == "deleteFirst"){
			li.pop_front();
		}else if (com == "deleteLast"){
			li.pop_back();
		}
	}
	for(itr = li.begin(); itr != --li.end(); ++itr)
		cout << *itr << " ";
	cout << *itr << endl;
	return 0;
}	
