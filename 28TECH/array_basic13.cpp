#include <iostream>
#include <vector>

using namespace std;

constexpr long long kModulus = static_cast<int>(1e9 + 7);

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int num;
  cin >> num;

  vector<int> vec(num);
  for (int &ele : vec) {
    cin >> ele;
  }

  long long sum = 0, product = 1;
  for (int ele : vec) {
    sum += static_cast<long long>(ele) % kModulus;
    sum %= kModulus;

    product *= static_cast<long long>(ele) % kModulus;
    product %= kModulus;
  }

  cout << sum << '\n';
  cout << product;
}
