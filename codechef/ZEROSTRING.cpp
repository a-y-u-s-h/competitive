#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N; std::string S;
    std::cin >> N;
    std::cin >> S;
    /*
      ======================================
        You're given a binary string S of
        length N. You're allowed to perform
        the following types of operations
        on string S:

        Delete any one character from S,
        and concatenate the remaining parts
        of the string, for example: if we
        delete the third character of S = 1101,
        it becomes S = 111.

        Flip all the characters of S, for ex:
        If we flip all characters of 1101, it
        becomes S = 0010.

        Given that you can use either type of
        operation any number of times, find the
        minimum number of operations required
        to make all characters of the string S
        equal to 0.
      ======================================
    */
    int C1 = std::count(std::begin(S), std::end(S), '1');
    int C0 = std::count(std::begin(S), std::end(S), '0');
    int answer = C0 + 1 >= C1 ? C1 : C0 + 1;
    std::cout << answer << std::endl;
  }
  return 0;
}
