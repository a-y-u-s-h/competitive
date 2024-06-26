#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0; t < T; t += 1) {
    int N, P, X, Y;
    std::cin >> N >> P >> X >> Y;
    /*
      ======================================
        There are N people in vaccination queue.
        Chef is standing on Pth position
        from the front of the queue. It takes
        X minutes to vaccinate a child and Y minutes
        to vaccinate an adult. Chef is an adult.

        We're given a binary array, A where if Ai = 1,
        we assume that person at ith position is an adult.
        Ai = 0 denotes there is a child standing at that index.
        We need to find out number of minutes *after* which
        Chef's vaccination will be completed.

        In problem constraints it's given that P lies
        between 1 and N both inclusive.
      ======================================
    */
    std::vector<int> queue;
    for (int i = 0; i < N; i += 1) {
      /*
        ======================================
          First of all, we need to ignore everyone
          who's standing after the Chef, so in the queue
          we include only those that are standing ahead
          of Chef. The position is represented by i + 1.
          We include Chef in this queue because we want
          to count taken by him as well (as an adult).
        ======================================
      */
      int Ai;
      std::cin >> Ai;
      if (i + 1 <= P) queue.push_back(Ai);
    }

    /*
      ======================================
        Next, we just count the number of
        children and adults and multiply their
        counts with the time they take to get
        vaccinated to find out the answer.
      ======================================
    */
    int adults = std::count(std::begin(queue), std::end(queue), 1);
    int children = std::count(std::begin(queue), std::end(queue), 0);
    int time = (X * children) + (Y * adults);
    std::cout << time << std::endl;
  }
  return 0;
}
