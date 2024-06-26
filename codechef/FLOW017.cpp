#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0; i < t; i += 1) {
    int a, b, c;
    std::cin >> a >> b >> c;

    /*
      ======================================
        In this one, we're given 3 numbers
        for every test case, we need to find
        out the 2nd largest number among them.
        So we just put them in a vector, sort it
        and get the 2nd element.
      ======================================
    */

    std::vector<int> numbers = {a, b, c};
    std::sort(std::begin(numbers), std::end(numbers));
    int answer = numbers[1];
    std::cout << answer << std::endl;
  }
  return 0;
}
