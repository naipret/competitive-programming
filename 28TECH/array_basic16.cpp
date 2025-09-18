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

bool IsPalindrome(int val) {
  int tmp = val, reversed = 0;
  while (tmp != 0) {
    reversed = reversed * 10 + (tmp % 10);
    tmp /= 10;
  }

  return val == reversed;
}

bool IsPerfectSquare(int val) {
  int sqrt_res = static_cast<int>(sqrt(val));
  return sqrt_res * sqrt_res == val;
}

int SumDigits(int val) {
  int sum = 0;
  while (val != 0) {
    sum += (val % 10);
    val /= 10;
  }

  return sum;
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

  int prime_cnt = 0, palindrome_cnt = 0, perfect_square_cnt = 0,
      sum_digits_if_prime_cnt = 0;
  for (int ele : vec) {
    if (IsPrime(ele)) {
      prime_cnt++;
    }
    if (IsPalindrome(ele)) {
      palindrome_cnt++;
    }
    if (IsPerfectSquare(ele)) {
      perfect_square_cnt++;
    }
    if (IsPrime(SumDigits(ele))) {
      sum_digits_if_prime_cnt++;
    }
  }

  cout << prime_cnt << '\n';
  cout << palindrome_cnt << '\n';
  cout << perfect_square_cnt << '\n';
  cout << sum_digits_if_prime_cnt;
}
