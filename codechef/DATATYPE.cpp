#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, X;
    std::cin >> N >> X;
    /*
      ======================================
        Chef wants to store some important
        numerical data on his personal computer.
        He is using a new data type that can
        store values only from 0 till N both
        inclusive. If this data type receives
        a value greater than N then it is
        cyclically converted to fit into the
        range 0 to N. For example:
        Value N + 1 will be stored at 0.
        Value N + 2 will be stored at 1.
        and so on...

        Given X, the valuel chef wants to
        store in this new data type. Determine
        what will be the actual value in
        memory after storing X.
      ======================================
    */
    int answer = X % (N + 1);
    std::cout << answer << std::endl;
  }
  return 0;
}
