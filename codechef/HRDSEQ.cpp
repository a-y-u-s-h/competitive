#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    /*
      ======================================
        Chef decided to write an infinite
        sequence. Initially, he wrote 0 and
        then he started repeating the following
        process:

        1. Look at the last element written so
        far (the l-th element if the sequence
        has length l so far); let's denote it by x.

        2. If x does not occur anywhere earlier
        in the sequence, the next element in the
        sequence is 0.

        3. Otherwise, look at the previous occurence
        of x in the sequence, i.e. the k-th element,
        where k < l, this element is equal to x
        and all elements between the (k + 1)-th
        and (l - 1)-th are different from x. The
        next element is (l - k), i.e. the distance
        between the last two occurences of x.

        The resulting sequence is:
        (0, 0, 1, 0, 2, 0, 2, 2, 1, ...)
        The second element is 0 since 0 occurs
        only once in the sequence (0), the
        third element is 1 since the distance
        between the two occurences of 0 in the
        sequence (0, 0) is 1, the fourth
        element is 0 since 1 occurs only once
        in the sequence (0, 0, 1) and so on.

        Chef has given you a task to perform.
        Consider the N-th element of the sequence
        (denoted by x) and the first N elements
        of the sequence. Find the number of
        occurences of x among these N elements.
      ======================================
    */

    /*
      ======================================
        This is how we construct our sequence.
      ======================================
    */
    std::vector<int> S; int initial = 0, current = 0;
    S.push_back(current);

    int length = 1;
    while (length < N) {
      current = S.back(); auto location = std::find(std::rbegin(S) + 1, std::rend(S), current);
      if (location != std::rend(S)) { S.push_back(std::distance(location.base(), std::end(S))); } else { S.push_back(0); }
      length++;
    }

    /*
      ======================================
        After our sequence is constructed,
        we can find what's asked of us -
        the number of occurences of Nth element
        among these N elements.
      ======================================
    */

    int answer = std::count(std::begin(S), std::end(S), S[N - 1]);
    std::cout << answer << std::endl;
  }
  return 0;
}
