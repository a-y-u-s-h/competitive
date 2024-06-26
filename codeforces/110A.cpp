#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  std::string N;
  std::cin >> N;
  /*
    ======================================
      Petya loves lucky numbers. We all
      know that lucky numbers are the
      positive integers whose decimal
      representations contain only the
      lucky digits 4 and 7. For example,
      numbers 47, 744, 4 are lucky and 5,
      17, 467 are not.

      Unfortunately, not all numbers are
      lucky. Petya calls a number nearly
      lucky if the number of lucky digits
      in it is a lucky number. He wonders
      whether number n is a nearly lucky number.
    ======================================
  */

  auto lucky = [] (std::string X) -> bool {
    long long C4 = std::count(std::begin(X), std::end(X), '4');
    long long C7 = std::count(std::begin(X), std::end(X), '7');
    return C4 + C7 == X.size();
  };

  long long C4 = std::count(std::begin(N), std::end(N), '4');
  long long C7 = std::count(std::begin(N), std::end(N), '7');
  bool condition = lucky(std::to_string(C4 + C7));

  std::cout << (condition ? "YES" : "NO") << std::endl;

  return 0;
}
