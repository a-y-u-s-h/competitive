#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    std::string S;
    std::cin >> S;

    /*
      ======================================
        Chef has a string S with him. Chef
        is happy if the string contains
        contiguous substring of length
        length strictly greater than 2
        in which all its characters are vowels.
        Determine whether Chef is happy or not.
      ======================================
    */

    auto vowel = [&] (char letter) { return letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'; };

    bool condition = false;

    for (int K = S.size(); K > 2; K -= 1) {
      for (auto Si = std::begin(S); Si != std::end(S) - K + 1; Si += 1) {
        bool valid = std::all_of(Si, Si + K, vowel);
        if (valid) { condition = true; break; }
      }
      if (condition) break;
    }

    std::cout << (condition ? "Happy" : "Sad") << std::endl;

  }
  return 0;
}
