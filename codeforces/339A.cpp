#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string S;
  std::cin >> S;
  /*
    ======================================
      A string is given to us which contains
      integers without spaces. Integers are
      separated by a '+' character. We need
      to convert it so that the numbers are
      in non-decreasing order. For example:

      1+3+2+1   -> 1+1+2+3
      3+2+1     -> 1+2+3
      1+1+3+1+3 -> 1+1+1+3+3
      2         -> 2
    ======================================
  */
  std::string token;
  std::vector<int> tokens;
  std::stringstream input (S), output;
  while (std::getline(input, token, '+')) { tokens.push_back(std::atoi(token.c_str())); }
  std::sort(std::begin(tokens), std::end(tokens));
  std::copy(std::begin(tokens), std::end(tokens), std::ostream_iterator<int>(output, "+"));
  std::string answer (output.str());
  std::cout << answer.substr(0, answer.size() - 1) << std::endl;

  return 0;
}
