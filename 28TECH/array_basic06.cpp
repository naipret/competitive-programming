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
  for (int idx_i = 0; idx_i < num; idx_i++) {
    for (int idx_j = idx_i + 1; idx_j < num; idx_j++) {
      if (vec[idx_i] + vec[idx_j] == target_sum) {
        cnt++;
      }
    }
  }

  cout << cnt;
}
