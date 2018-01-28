#include <iostream>
using namespace std;
#define swap(a, b) (a ^= b ^= a ^= b)

int main() {
  int w;
  cin >> w;
  int ary[w];
  for (int i = 0; i < w; ++i) {
    ary[i] = i + 1;
  }

  int n;
  cin >> n;
  int a, b;
  char c;
  for (int i = 0; i < n; ++i) {
      cin >> a >> c >> b;
    swap(ary[a - 1], ary[b - 1]);
  }

  for (auto i : ary) {
    cout << i << endl;
  }
  return 0;
}
