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

  vector<int> ele_freq(1000 + 1, 0);
  for (int ele : vec) {
    ele_freq[ele] += 1;
  }

  vector<bool> seen_ele(1000 + 1, false);
  for (int ele : vec) {
    if (seen_ele[ele] == false) {
      cout << ele << ' ' << ele_freq[ele] << '\n';
      seen_ele[ele] = true;
    }
  }
}
