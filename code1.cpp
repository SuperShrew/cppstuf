#include <iostream>
#include <string>

using namespace std;

string idk(string in) {
  in = in + " idk";
  return in;
}

int main() {
  string a;
  const double pi = 3.14159;
  cout << "hi" << endl;
  cin >> a;
  cout << a << " hi" << endl;
  cout << idk(a) << endl;
  cout << 2+2 << endl;
  cout << "pi is " << pi << " to 5.d.p." << endl;
  if (a == "eieio") {
    cout << "ON THAT fARM HE HAD SOME RAM" << endl;
    cout << "eieio" << endl;
    cout << "with data here and data there" << endl;
  }
  return 0;
}
