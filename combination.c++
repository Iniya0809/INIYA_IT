#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  cin >> s;
  int n = s.length();
  for (int i = 1; i < (1 << n); i++) {
      string sub = "";
      for (int j = 0; i < n; j++) {
          if (i & (1 << j)) {
              sub += s[j];
          }
      }
      cout << sub << endl;
  }
  return 0;
}
