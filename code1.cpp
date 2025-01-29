#include <iostream>
#include <string>

using namespace std;

string idk(string in) {
  in = in + " idk";
  return in;
}

int main() {
  string a;
  cout << "hi" << endl;
  cin >> a;
  cout << a << " hi" << endl;
  cout << idk(a) << endl;
  return 0;
}
