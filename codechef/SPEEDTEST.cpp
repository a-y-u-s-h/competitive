#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    float A, X, B, Y;
    std::cin >> A >> X >> B >> Y;
    /*
      ======================================
        Alice is driving from her home to her
        office which is A kilometers away and
        will take her X hours to reach.

        Bob is driving from his home to his
        office which is B kilometers away and
        will take him Y hours to reach.

        Determine who is driving faster, else,
        if they are both driving at the same
        speed print EQUAL.
      ======================================
    */
    std::string answer = (A / X) > (B / Y) ? "ALICE"
                       : (A / X) < (B / Y) ? "BOB"
                       : "EQUAL";
    std::cout << answer << std::endl;
  }
  return 0;
}
