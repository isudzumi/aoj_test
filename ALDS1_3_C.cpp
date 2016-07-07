#include <iostream>
#include <list>
using namespace std;

int main(){
	int n;
	list<int> li
	string com;
	int x;
	cin >> n;
	for(int i = 0; i < n; i++){
		cin >> com >> x;

		switch(com){
			case "insert":
				li.push(x);
				break;
			case "delete":
				break;
			case "deleteFirst":
				break;
			case "deleteLast":
				break;
			default:
				break;
			}
	}
	return 0;
}	
