#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int A, B;
  std::cin >> A >> B;
  int calculation = A - B;
  std::vector<int> digits;
  std::map<int, int> frequencies;

  /*
    ======================================
      We want to calculate wrong answer
      of A-B such that only 1 digit is
      wrong in the answer. So we'll select
      the number with smallest frequency,
      increase it by one but take mod 9
      so it doesn't overshoot and then
      add it back.
    ======================================
  */
  while (calculation) {
    int Di = calculation % 10;
    frequencies[Di] += 1;
    digits.push_back(Di);
    calculation /= 10;
  }

  auto smallest = *std::max_element(std::begin(frequencies), std::end(frequencies), [](auto const &a, auto const &b) { return b.first <= a.first; });
  auto location = std::find(std::begin(digits), std::end(digits), smallest.first) - std::begin(digits);
  digits[location] = (digits[location] + 1) % 9;
  std::reverse(std::begin(digits), std::end(digits));
  for (auto i : digits) { std::cout << i; } std::cout << std::endl;
  return 0;
}
