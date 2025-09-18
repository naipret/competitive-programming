#include <cmath>
#include <iomanip>
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

  int prime_cnt = 0;
  double sum_prime = 0;
  for (int ele : vec) {
    if (IsPrime(ele)) {
      prime_cnt++;
      sum_prime += ele;
    }
  }

  cout << fixed << setprecision(3);
  cout << sum_prime / static_cast<double>(prime_cnt);
}
