#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string str_1;
  cin >> str_1;

  string str_2 = str_1;
  reverse(str_2.rbegin(), str_2.rend());

  if (str_1 == str_2) {
    cout << "true";
  } else {
    cout << "false";
  }
}
