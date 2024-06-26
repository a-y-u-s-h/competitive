#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, Q;
    std::cin >> N >> Q;
    /*
      ======================================
        Chef lives in a huge apartment building
        with N floors, numbered 0 (ground floor)
        through N (terrace). Unfortunately, it
        has only one lift. We say that when lift
        travels from floor a to floor b, it travels
        |b - a| floors.

        Initially, the lift is on the ground floor.
        Then, it receives Q requests (numbered 1 through Q).
        For each valid i, the i-th request is for
        the lift to move from its current floor to
        a source floor fi, where some poeple enter
        the lift, and then move to a destination
        floor di, where they will exit the lift.
        The lift should not stop anywhere in between
        moving to the floor fi or from the floor fi
        to the door di. The lift must serve the requests
        sequentially, i.e. completely fulfill
        request 1, then request 2 and so on. The
        lift does not move anywhere after serving
        the final request.

        Find the total number of floors the lift
        needs to travel to fulfill all the requests.
      ======================================
    */
    auto travel = [&] (long long a, long long b) -> long long { return b - a > 0 ? b - a : a - b; };
    long long current = 0; long long travelled = 0;
    for (long long n = 0; n < Q; n++) { long long Fi, Di; std::cin >> Fi >> Di; travelled += travel(current, Fi) + travel(Fi, Di); current = Di; }
    std::cout << travelled << std::endl;
  }

  return 0;
}
