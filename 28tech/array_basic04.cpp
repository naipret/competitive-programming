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

  int threshold;
  cin >> threshold;

  int greater_than_threshold = 0, less_than_threshold = 0;
  for (int ele : vec) {
    if (ele > threshold) {
      greater_than_threshold++;
    }
    if (ele < threshold) {
      less_than_threshold++;
    }
  }

  cout << less_than_threshold << '\n';
  cout << greater_than_threshold;
}
