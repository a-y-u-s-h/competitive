#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Chef Chick loves to jump a lot. Once,
        it realised that it was on an infinitely
        long road, and decided to travel
        along this road by jumping.

        Let's view the road as the x-axis in
        a 1D coordinate system. Initially, Chef
        Chick is at the coordinate x = 0, and
        it wants to move only in the positive
        x-direction. Moreover, Chef Chick has N
        favourite integers a1, a2, a3, ...an,
        and it wants to jump on the coordinates
        that are multiples of these favourite
        numbers - when its current position is x,
        it jumps to the smallest coordinate y > x
        such that y is an integer multiple of
        at least one of the values a1, a2, .. an;
        the length of such jump is y - x.

        This way, Chef Chick keeps jumping along
        the road forever in the positive x-direction.
        You need to find the length of the longest
        jump it will make, i.e. the largest
        integer d such that Chef Cick makes at
        least one jump with length d and never
        makes any jump with greater length.
        It can be proved that such an integer
        always exists.
      ======================================
    */
    int answer = *std::min_element(std::begin(A), std::end(A));
    std::cout << answer << std::endl;
  }
  return 0;
}
