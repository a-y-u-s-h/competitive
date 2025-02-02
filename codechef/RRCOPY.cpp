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
        You had an array of integer numbers.
        You also had a beautiful operations
        called "Copy-Paste" which allowed you
        to copy any contiguous subsequence of
        your array and paste it in any position
        of your array. For example, if you have
        array [1, 2, 3, 4, 5] and copy it's
        subsequence from the second to the
        fourth element and paste it after the
        third one, then you will get
        [1, 2, 3, 2, 3, 4, 4, 5] array.

        You remember that you have done a
        finite (probably zero) number of such
        operations over your initial array and
        got an array A as a result. Unfortunately
        you don't remember the initial array
        itself, so you would like to know what
        could it be. You are interested by
        the smallest such array. So the task
        is to find the minimal size (length)
        of the array that A can be obtained
        from by using "Copy-Paste" operations.
      ======================================
    */
    std::set<int> distinct (std::begin(A), std::end(A));
    std::cout << distinct.size() << std::endl;
  }
  return 0;
}
