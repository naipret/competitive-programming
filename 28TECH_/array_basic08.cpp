// https://github.com/naipret/competitive-programming/tree/main/28TECH

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

  vector<bool> seen_ele(1000 * 2 + 1, false);
  for (int ele : vec) {
    if (seen_ele[ele + 1000] == false) {
      cout << ele << ' ';
      seen_ele[ele + 1000] = true;
    }
  }
}
