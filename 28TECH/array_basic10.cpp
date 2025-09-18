#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

bool IsPrime(int val) {
  if (val < 2) {
    return false;
  }

  int loop_limit = static_cast<int>(sqrt(val));
  for (int seq_val = 2; seq_val <= loop_limit; seq_val++) {
    if (val % seq_val == 0) {
      return false;
    }
  }

  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num;
  cin >> num;

  vector<int> vec(num);
  for (int &ele : vec) {
    cin >> ele;
  }

  for (int middle_idx = 0; middle_idx < num; middle_idx++) {
    int left_sum = 0, right_sum = 0;
    for (int left_idx = 0; left_idx < middle_idx; left_idx++) {
      left_sum += vec[left_idx];
    }
    for (int right_idx = middle_idx + 1; right_idx < num; right_idx++) {
      right_sum += vec[right_idx];
    }
    if (IsPrime(left_sum) && IsPrime(right_sum)) {
      cout << middle_idx << ' ';
    }
  }
}
