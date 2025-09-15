#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int que;
  cin >> que;

  int val_1, val_2;

  while (que--) {
    cin >> val_1 >> val_2;
    cout << val_1 + val_2 << '\n';
  }
}
