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

  int last_min_idx = 0, first_max_idx = 0;

  for (int idx = 0; idx < num; idx++) {
    if (vec[idx] > vec[first_max_idx]) {
      first_max_idx = idx;
    }
    if (vec[idx] <= vec[last_min_idx]) {
      last_min_idx = idx;
    }
  }

  cout << last_min_idx << ' ' << first_max_idx;
}
