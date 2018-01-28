#include <iostream>
using namespace std;

int main()
{
	int r, c;
	cin >> r >> c;
	
	int g[r+1][c+1], sum = 0;
	for(int i = 0; i < r; i++)	{
		for(int j = 0; j < c; j++){
			cin >> g[i][j];
		}
	}
	
	for(int i = 0; i < r; i++){
		int sum = 0;
		for(int j = 0; j < c; j++){
			sum += g[i][j];
		}
		g[i][c] = sum;
	}
	for(int i = 0; i <= c; i++){
		int sum = 0;
		for(int j = 0; j < r; j++){
			sum += g[j][i];
		}
		g[r][i] = sum;
	}
	
	for(int i = 0; i <= r; i++){
		for(int j = 0; j <= c; j++){
			cout << g[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}