#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S; int N;
  std::cin >> S;
  std::cin >> N;

  /*
    ======================================
      Not everyone probably knows that Chef
      has younger brother Jeff. Currently
      Jeff learns to read. He knows some
      subset of the letter of latin alphabet.
      In order to help Jeff to study, Chef
      gave him a book with the text consisting
      of N words. Jeff can read a word if it
      consists only of the letters he knows.
      Now Chef is curious about which words
      his brother will be able to read, and
      which are not. Please help him!
    ======================================
  */

  for (int n = 0; n < N; n++) {
    std::string Wi; std::cin >> Wi;
    std::regex expression ("[" + S + "]"); auto read = std::distance(std::sregex_iterator(std::begin(Wi), std::end(Wi), expression), std::sregex_iterator());
    bool readable = read == Wi.size();
    std::cout << (readable ? "Yes" : "No") << std::endl;
  }

  return 0;
}
