#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Chef has scored A, B and C marks in
        3 different subjects respectively.
        Chef will fail if the average score
        of any two subjects is less than 35.
        Determine whether Chef will pass or fail.
      ======================================
    */
    auto check = [&] (int a, int b) -> bool { return (a + b) / 2 >= 35; };
    bool condition = check(A, B) && check(B, C) && check(C, A);
    std::cout << (condition ? "PASS" : "FAIL") << std::endl;
  }
  return 0;
}
