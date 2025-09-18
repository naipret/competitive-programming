#include <iostream>
#include <vector>

using namespace std;

bool IsGreatest(int val_1, int val_2, int val_3) {
  return (val_2 > val_1 && val_2 > val_3);
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

  for (int idx = 1; idx < num - 1; idx++) {
    if (IsGreatest(vec[idx - 1], vec[idx], vec[idx + 1])) {
      cout << vec[idx] << ' ';
    }
  }
}
