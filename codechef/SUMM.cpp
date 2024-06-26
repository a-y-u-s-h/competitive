#include <iostream>

int main(int argc, char const *argv[]) {
  int t;
  std::cin >> t;
  for (int i = 0 ; i < t; i += 1) {
    int A, B, C;
    std::cin >> A >> B >> C;
    /*
      ======================================
        Bob wants to find out A + B. Alice
        tells him that answer is C. Bob doesn't
        trust Alice. You need to check if Alice's
        answer to Bob's question is correct or not.
      ======================================
    */
    bool correct = A + B == C;
    std::cout << (correct ? "YES" : "NO") << std::endl;
  }
  return 0;
}
