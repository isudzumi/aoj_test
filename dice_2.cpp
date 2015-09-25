#include<iostream>
using namespace std;

class dice{
	public:
	int dice[6];
	void mv_n(){
		int t;
		t = dice[1];
		dice[1] = dice[5];
		dice[5] = dice [4];
		dice[4] = dice[0];
		dice[0] = t;
	}
	void mv_s(){
		int t;
		t = dice[4];
		dice[4] = dice[5];
		dice[5] = dice[1];
		dice[1] = dice[0];
		dice[0] = t;
	}
	void mv_e() {
		int t;
		t = dice[3];
		dice[3] = dice[5];
		dice[5] = dice[2];
		dice[2] = dice[0];
		dice[0] = t;
	}
	void mv_w(){
		int t;
		t = dice[2];
		dice[2] = dice[5];
		dice[5] = dice[3];
		dice[3] = dice[0];
		dice[0] = t;
	}
};

int main()
{
	dice d;
	for(int i = 0; i < 6; i++)
		cin >> d.dice[i];
	int q;
	cin >> q;
	int t, f;
	for(int i = 0; i < q; i++){
		cin >> t >> f;
		if(t == d.dice[1]){
			d.mv_n();
		}else if(t == d.dice[2]){
			d.mv_w();
		}else if(t == d.dice[3]){
			d.mv_e();
		}else if(t == d.dice[4]){
			d.mv_s();
		}else if(t == d.dice[5]){
			if(f == d.dice[4]){
				d.mv_n();
				d.mv_n();
			}
		}
		cout << d.dice[2] << endl;
	}
	return 0;
}