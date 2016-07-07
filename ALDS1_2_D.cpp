#include <iostream>
#include <vector>

using namespace std;

int derivateG(int g){
		return (g*3)+1;
}

int insertionSort(vector<int> &A, int n, int g, int cnt){
		for(int i = g; i < n; ++i){
				int j = i - g;
				while( (j >= 0) && (A[j] > A[j+g]) ){
						A[j] ^= A[j+g];
						A[j+i^= A[j];
						A[j] ^= A[j+g];
						cnt++;
						j-=g;
				}
		}
		return cnt;
}

int shellSort(vector<int> &a, int n){
		vector<int> G(1,1);
		int i = 1;
		while( derivateG(G[i-1]) <= n ){
				G.push_back( derivateG(G[i-1]) );
				++i;
		}
		int cnt = 0;
		int m = (int)G.size();
		cout << m << endl;

		for(int i = m-1; i >= 0 ; --i)
				i == 0 ? cout << G[i] << endl : cout << G[i] << " ";
		
		for(int i = m-1; i >= 0 ; --i){
				cnt = insertionSort(a, n, G[i], cnt);
		}
		cout << cnt << endl;
		for(int i = 0; i < n; i++)
				cout << a[i] << endl;

}

int main(){
		int n;
		cin >> n;
		vector<int> a(n);
		for(int i=0; i<n; i++)
				cin >> a[i];

		shellSort(a, n);

		return 0;
}

