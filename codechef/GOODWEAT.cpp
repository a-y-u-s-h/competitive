#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    /*
      ======================================
        We're given data for 7 days of the
        week (as 1s or 0s), 0 represents a rainy
        day and 1 represents a sunny day. If
        number of sunny days are more than number
        of rainy days, we need to print "YES" saying
        that the weather report is 'good' otherwise
        we need to print "NO".
      ======================================
    */
    std::vector<int> week;
    for (int i = 0; i < 7; i += 1) {
      int Ai;
      std::cin >> Ai;
      week.push_back(Ai);
    }
    /*
      ======================================
        We have all days of the week, we
        simply need to count occurences of 1s
        and 0s and output accordingly.
        Cs = count of sunny days.
        Cr = count of rainy days.
      ======================================
    */
    int Cs = std::count(begin(week), end(week), 1);
    int Cr = std::count(begin(week), end(week), 0);
    std::cout << (Cs > Cr ? "YES" : "NO") << std::endl;
  }
  return 0;
}
