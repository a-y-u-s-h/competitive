#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        There are N seats in a row. You are
        given a string S with length N; for
        each valid i, the i-th character of
        S is '0' if the i-th seat is empty or
        '1' if there is someone sitting in that seat.

        Two people are friends if they are
        sitting next to each other. Two friends
        are always part of the same group of
        friends. Can you find the total number
        of groups?
      ======================================
    */
    std::regex expression ("1+"); auto answer = std::distance(std::sregex_iterator(std::begin(S), std::end(S), expression), std::sregex_iterator());
    std::cout << answer << std::endl;
  }
  return 0;
}
