#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  /*
    ======================================
      Chef recently learned about ratios
      and proportions. He wrote some positive
      integers a, b, c, d on a paper. Chef
      wants to know whether he can shuffle
      these numbers so as to make some proportion?
      Formally, four numbers x, y, z, w are
      said to make a proportion if ratio of
      x : y is same as that of z : w.
    ======================================
  */
  std::vector<double> numbers = { a, b, c, d };

  bool condition = false;

  do {
    if (numbers[0] / numbers[1] == numbers[2] / numbers[3]) { condition = true; break; }
  } while (std::next_permutation(std::begin(numbers), std::end(numbers)));

  std::cout << (condition ? "Possible" : "Impossible") << std::endl;

  return 0;
}
