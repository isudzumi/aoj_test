#include <iostream>
using namespace std;

class dice{
  public:
    int d[6];

    void mv_s() {
      int top;
      top = d[0];
      d[0] = d[4];
      d[4] = d[5];
      d[5] = d[1];
      d[1] = top;
    }

    void mv_e() {
      int top;
      top = d[0];
      d[0] = d[3];
      d[3] = d[5];
      d[5] = d[2];
      d[2] = top;
    }
    void mv_n() {
      for(int i = 0; i < 3; i++)
        mv_s();
    }
    void mv_w() {
      for(int i = 0; i < 3; i++)
        mv_e();
    }
};

int main()
{
  dice d;
  string dir;

  for(int i = 0; i < 6; i++){
    cin >> d.d[i];
  }
  cin >> dir;

  for(int i = 0; i < dir.length(); i++){
    if(dir[i] == 'S'){
      d.mv_s();
    }else if(dir[i] == 'E'){
      d.mv_e();
    }else if (dir[i] == 'N') {
      d.mv_n();
    }else if(dir[i] == 'W'){
      d.mv_w();
    }
  }
  cout << d.d[0] << endl;

  return 0;
}
