// https://github.com/naipret/competitive-programming/tree/main/28TECH

#include <algorithm>
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

  sort(vec.begin(), vec.end());

  int min_diff = vec[num - 1] - vec[0];
  for (int ele = 1; ele < num; ele++) {
    if ((vec[ele] - vec[ele - 1]) < min_diff) {
      min_diff = vec[ele] - vec[ele - 1];
    }
  }

  cout << min_diff;
}
