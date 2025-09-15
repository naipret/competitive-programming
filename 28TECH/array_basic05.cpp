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
  for (int ele = 0; ele < num; ele += 2) {
    if (vec[ele] % 2 == 0) {
      res_cnt++;
      cout << vec[ele] << ' ';
    }
  }
  if (res_cnt == 0) {
    cout << "NONE";
  }
}
