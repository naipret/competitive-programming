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

  int target_sum;
  cin >> target_sum;

  int cnt = 0;
  for (int ele_i = 0; ele_i < num; ele_i++) {
    for (int ele_j = ele_i + 1; ele_j < num; ele_j++) {
      if (vec[ele_i] + vec[ele_j] == target_sum) {
        cnt++;
      }
    }
  }

  cout << cnt;
}
