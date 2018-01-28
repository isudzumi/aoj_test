#include<iostream>
using namespace std;
class dice{
  public:
    int dc1[6], dc2[6];
    void input(int *n){
      for(int i = 0; i < 6; i++)
        cin >> n[i];
    }
    void mv_n(){
      int t = dice[1];
      dice[1] = dice[5];
      dice[5] = dice[4];
      dice[4] = dice[0];
      dice[0] = t;
    }
    void mv_e() {
      int t = dice[3];
      dice[3] = dice[5];
      dice[5] = dice[2];
      dice[2] = dice[0];
      dice[0] = t;
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
  int d1[6], d2[6];
  dice d1, d2;
  d1.input(d1);
  d2.input(d2);

  return 0;
}
