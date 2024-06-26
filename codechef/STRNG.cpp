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
        Chef has an array A of length N. An
        index i is called `strong` if the we
        can change the GCD of the whole array
        just by changing the value of Ai.
        Determine the number of strong indices
        in the array.
      ======================================
    */

    /*
      ======================================
        First we need to find out GCD of
        the entire array. Then if GCD is not
        1, then every index is strong because
        changing that element to 1 will make
        the GCD 1. If the GCD is 1, then
        we will have to check which indices
        are strong. And we can do so by using
        prefix and suffix GCD arrays to check
        if removing an element changes the
        GCD of the rest of the array.
      ======================================
    */

    int GCD = std::accumulate(std::begin(A), std::end(A), A[0], std::gcd<int, int>);
    if (GCD != 1) { std::cout << N << std::endl; continue; }

    /*
      ======================================
        Compute prefix and suffix GCD arrays.
      ======================================
    */

    std::vector<int> prefix (N); std::partial_sum(std::begin(A), std::end(A), std::begin(prefix), std::gcd<int, int>);
    std::vector<int> suffix (N); std::partial_sum(std::rbegin(A), std::rend(A), std::rbegin(suffix), std::gcd<int, int>);

    /*
      ======================================
        Now, we need to count strong indices.
        We're basically going over every index
        and checking if GCD without that index
        is not equal to 1. All such indices
        are strong indices because if GCD without
        them was 1, it doesn't matter what
        they are, the GCD will be 1.
      ======================================
    */

    int strongs = std::count_if(std::begin(A), std::end(A), [&] (auto const &Ai) {
      int i = &Ai - &A[0];
      /*
        ======================================
          Here, we'll need our prefix and suffix
          arrays to find out the GCDs for when
          i is excluded.
        ======================================
      */
      int HCF = (i == 0    ) ? suffix[i + 1]
              : (i == N - 1) ? prefix[i - 1]
              : std::gcd(prefix[i - 1], suffix[i + 1]);

      return HCF != 1; }
    );

    std::cout << strongs << std::endl;
  }
  return 0;
}
