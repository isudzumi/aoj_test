#include<iostream>
using namespace std;

class dice{
  public:
    int dice[6];
    void mv_n(){
      int top;
      top = dice[1];
      dice[1] = dice[5];
      dice[5] = dice[4];
      dice[4] = dice[0];
      dice[0] = top;
    }
    void mv_e() {
      int top;
      top = dice[3];
      dice[3] = dice[5];
      dice[5] = dice[2];
      dice[2] = dice[0];
      dice[0] = top;
    }
    void mv_s() {
      for(int j = 0; j < 3; j++)
        mv_n();
    }
    void mv_w() {
      for(int j =0; j < 3; j++)
        mv_e();
    }
    void rotate(){
      int right;
      right = dice[4];
      dice[4] = dice[3];
      dice[3] = dice[1];
      dice[1] = dice[2];
      dice[2] = right;
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
    if(t == d.dice[1])
      d.mv_n();
    else if(t == d.dice[4])
      d.mv_s();
    else if(t == d.dice[3])
      d.mv_e();
    else if(t == d.dice[2])
      d.mv_w();
    else if(t == d.dice[5]){
      d.mv_n();
      d.mv_n();
    }
    while(f != d.dice[1]){
      d.rotate();
    }

    cout << d.dice[2] << endl;
  }

  return 0;
}
