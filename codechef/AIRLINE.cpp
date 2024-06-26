#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B, C, D, E;
    std::cin >> A >> B >> C >> D >> E;
    /*
      ======================================
        Chef has 3 bags that she wants to take
        on a flight. They weigh A, B and C kgs
        respectively. She wants to check-in
        exactly two of these bags and carry
        the remaining one bag with her.

        The airline restrictions says that the
        total sum of the weights of the bags
        that are checked-in cannot exceed D kgs
        and the weight of the bag which is carried
        cannot exceed E kgs. Find if Chef can
        take all the three bags on the flight.
      ======================================
    */
    auto carriable = [E] (int X)        { return X     <= E; };
    auto checkable = [D] (int X, int Y) { return X + Y <= D; };
    bool condition = (carriable(A) && checkable(B, C)) || (carriable(B) && checkable(C, A)) || (carriable(C) && checkable(A, B));
    std::cout << (condition ? "YES" : "NO") << std::endl;
  }
  return 0;
}
