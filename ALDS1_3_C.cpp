#include <iostream>
#include <list>
using namespace std;

int main(){
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
	itr = li.begin();
	for(int i = 0; i < li.size(); ++i){
		(i < li.size()-1) ? cout << *itr << " " : cout << *itr << endl;	
		++itr;
	}
	return 0;
}	
