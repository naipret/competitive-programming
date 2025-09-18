#include <iostream>
#include <numeric>
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

  int res = 0;
  for (int ele : vec) {
    res = gcd(res, ele);
    if (res == 1) {
      break;
    }
  }

  cout << res;
}
