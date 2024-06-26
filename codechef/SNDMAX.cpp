#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Write a program that accepts sets
        of three numbers, and prints the
        second maximum number among the three.
      ======================================
    */
    std::vector<int> numbers = { A, B, C };
    std::sort(std::begin(numbers), std::end(numbers));
    int answer = numbers[1];
    std::cout << answer << std::endl;
  }
  return 0;
}
