#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        There are 3 people sitting in a room,
        and each one of them has some demands
        about what room temperature should be.
        We need to find out if they all
        can agree on some temperature or not.
        It is given that 1 <= A, B, C <= 100.
      ======================================
    */
    auto predicate = [A, B, C] (int T) -> bool { return T >= A && T <= B && T >= C; };
    std::vector<int> temperatures (100); std::iota(std::begin(temperatures), std::end(temperatures), 1);
    auto satisfactory = std::count_if(std::begin(temperatures), std::end(temperatures), [predicate](auto const &x) { return predicate(x); });
    std::cout << (satisfactory > 0 ? "YES" : "NO") << std::endl;
  }
  return 0;
}
