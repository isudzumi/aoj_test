#include <iostream>
#include <stack>
#include <cstdlib>
using namespace std;

int main(){
		char op[10];
		stack<int> st;

		while(cin >> op){
				int m, n;
				if( op[0] == '+' ){
					m = st.top();
					st.pop();
					n = st.top();
					st.pop();
					n += m;
					st.push(n);
				}else if( op[0] == '-' ){
					m = st.top();
					st.pop();
					n = st.top();
					st.pop();
					n -= m;
					st.push(n);
				}else if( op[0] == '*' ){
					m = st.top();
					st.pop();
					n = st.top();
					st.pop();
					n *= m;
					st.push(n);
				}else{
					m = atoi( op ); 
					st.push( m );
				}

		}
		cout << st.top() << endl;

		return 0;
}
