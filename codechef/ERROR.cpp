#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;
    /*
      ======================================
        Lots of geeky customers visit our
        Chef's restaurant everyday. So, when
        asked to fill the feedback form, these
        customers represent the feedback
        using a binary string (i.e. a string
        that contains only characters '0'
        and '1'). Now since chef is not that
        great in deciphering binary strings,
        he has decided the following criteria
        to classify the feedback as "good"
        and "bad" - If the string contains
        the substring "010" or "101", then
        the feedback is good, else it is bad.
        Not that, to be good it is not necessary
        to have both of them as substring.
      ======================================
    */
    bool a = S.find("101") != std::string::npos;
    bool b = S.find("010") != std::string::npos;
    bool answer = a || b;
    std::cout << (answer ? "Good" : "Bad") << std::endl;
  }
  return 0;
}
