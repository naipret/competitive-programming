#include <iostream>
#include <vector>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num;
  cin >> num;

  vector<int> vec(num);
  for (int &ele : vec) {
    cin >> ele;
  }

  for (int idx = 0; idx <= num / 2; idx++) {
    if (vec[idx] != vec[num - 1 - idx]) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
}
