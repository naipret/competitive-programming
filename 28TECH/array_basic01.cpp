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

  int even_cnt = 0, odd_cnt = 0, sum_even = 0, sum_odd = 0;
  for (int ele : vec) {
    if (ele % 2 == 0) {
      even_cnt++;
      sum_even += ele;
    } else {
      odd_cnt++;
      sum_odd += ele;
    }
  }

  cout << even_cnt << '\n';
  cout << odd_cnt << '\n';
  cout << sum_even << '\n';
  cout << sum_odd << '\n';
}
