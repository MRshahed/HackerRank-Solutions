#include <bits/stdc++.h>

using namespace std;

int main() {

  int n;
  cin >> n;
  int a[n];
  vector<int> v;
  vector<int>::iterator it;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    v.push_back(a[i]);
  }
  sort(v.begin(), v.end());
  for (it = v.begin(); it != v.end(); it++) {
    cout << *it << " ";
  }

  return 0;
}
