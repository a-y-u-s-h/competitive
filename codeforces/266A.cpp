#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int n; std::string s;
  std::cin >> n;
  std::cin >> s;
  /*
    ======================================
      There are n stones on the table in a
      row, each of them can be red, green
      or blue. Count the minimum number of
      stones to take from the table so that
      any two neighboring stones had different
      colors. Stones in a row are considered
      neighboring if there are no other
      stones between them.
    ======================================
  */
  int answer = 0;
  for (int i = 1; i < n; i += 1) { if (s[i] == s[i - 1]) answer++; }
  std::cout << answer << std::endl;
  return 0;
}
