#include <iostream>
using namespace std;

void sub(int &ref) {
  ref = 456;
  return;
}

int main() {
  int val = 123;
  cout << "sub関数を呼び出す前のval値 = " << val << endl;
  sub(val);
  cout << "sub関数を呼び出した後のval値 = " << val << endl;
  return 0;
}
