#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    std::string s;
    std::cin >> s;

    /*
      ======================================
        String s is of the form: ababbbaba
        ...basically a combination of letters
        a and b. We need to find out the count of
        letter that occurs the least number of times.
        Basically we count how many 'a's are there
        and how many 'b's are there in the string,
        compare both and output accordingly.
      ======================================
    */
    int a = std::count(std::begin(s), std::end(s), 'a');
    int b = std::count(std::begin(s), std::end(s), 'b');
    std::cout << (a < b ? a : b) << std::endl;
  }
  return 0;
}
