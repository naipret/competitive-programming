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

  int res_cnt = 0;
  for (int idx = 0; idx < num; idx += 2) {
    if (vec[idx] % 2 == 0) {
      res_cnt++;
      cout << vec[idx] << ' ';
    }
  }
  if (res_cnt == 0) {
    cout << "NONE";
  }
}
