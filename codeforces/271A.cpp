#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int Y;
  std::cin >> Y;
  /*
    ======================================
      It seems like the year of 2013 came
      only yesterday. Do you know a curious
      fact? The year of 2013 is the first
      year after the old 1987 with
      only distinct digits.

      Now you are suggested to solve the
      following problem: given a year number,
      find the minimum year number which
      is strictly larger than the given
      one and has only distinct digits.
    ======================================
  */
  auto distinctive = [] (int X) { std::string x = std::to_string(X); std::set<char> distinct (std::begin(x), std::end(x)); return distinct.size() == x.size(); };
  int answer = Y + 1; while (!distinctive(answer)) { answer++; }
  std::cout << answer << std::endl;
  return 0;
}
