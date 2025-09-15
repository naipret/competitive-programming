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

  int min_val = *(min_element(vec.begin(), vec.end()));
  int min_cnt = count(vec.begin(), vec.end(), min_val);

  cout << min_cnt;
}
