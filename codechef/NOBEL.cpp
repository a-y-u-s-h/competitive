#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, M;
    std::cin >> N >> M;
    std::set<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.insert(Ai); }
    /*
      ======================================
        The growth of Computer Science has
        forced the scientific community to
        award Nobel Prize in CS starting
        from this year.

        Chef knows that the Nobel community
        is going to award the prize to that
        person whose research is different
        from others (ie. no other researcher
        should work on the same topic). If
        there are multiple such people, who
        work on unique topics, then they
        will all share the prize. It might
        also happen that no one wins this time.

        Chef also knows the N researchers
        which the community who will be
        considered for the prize, and the
        topics in which each of them work.

        In total the CS field can be divided
        into M broad topics. Given the topics
        in which each of the N researchers are
        working on, in the form of an array A,
        and given that Chef can master any topic
        instantly, find whether he can win the
        prize. That is, can the Chef choose to
        work on some topic which will guarantee
        that he will win the prize? Chef doesn't
        mind sharing the prize with others.
      ======================================
    */
    std::set<int> C;
    std::vector<int> B (M); std::iota(std::begin(B), std::end(B), 1);
    std::set_difference(std::begin(B), std::end(B), std::begin(A), std::end(A), std::inserter(C, C.end()));
    bool condition = C.size() > 0;
    std::cout << (condition ? "YES" : "NO") << std::endl;

  }
  return 0;
}
