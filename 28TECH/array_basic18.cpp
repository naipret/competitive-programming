#include <iostream>
#include <vector>

using namespace std;

bool IsOppositeSigns(long long val_1, long long val_2) {
  return (val_1 * val_2 < 0);
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

  if (IsOppositeSigns(vec[0], vec[1])) {
    cout << vec[0] << ' ';
  }
  for (int idx = 1; idx < num - 1; idx++) {
    if (IsOppositeSigns(vec[idx - 1], vec[idx]) ||
        IsOppositeSigns(vec[idx], vec[idx + 1])) {
      cout << vec[idx] << ' ';
    }
  }
  if (IsOppositeSigns(vec[num - 2], vec[num - 1])) {
    cout << vec[num - 1];
  }
}
