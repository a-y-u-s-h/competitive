#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int64_t N;
    std::cin >> N;
    std::vector<int64_t> A;
    std::vector<int64_t> B;
    for (int64_t n = 0; n < N; n++) { int64_t Ai; std::cin >> Ai; A.push_back(Ai); }
    for (int64_t n = 0; n < N; n++) { int64_t Bi; std::cin >> Bi; B.push_back(Bi); }

    /*
      ======================================
        There are N students living in the
        dormitory of Berland State University.
        Each of them sometimes wants to use
        the kitchen, so the head of the dormitory
        came up with a timetable for kitchen's
        usage in order to avoid the conflicts:

        The first student starts to use the kitchen
        at the time 0 and should finish the cooking
        not later than at the time A1.

        The second student starts to use the kitchen
        at the time A1 and should finish the cooking
        not later than at the time A2. And so on.

        The N-th student starts to use the kitchen
        at the time An-1 and should finish the cooking
        not later than at the time An.

        The holidays in Berland are approaching, so today
        each of these N students wants to cook some
        pancakes. The i-th student needs Bi units
        of time to cook. The students have understood
        that probably not all of them will be able
        to cook everything they want. How many
        students will be able to  cook without
        violating the schedule?

      ======================================
    */

   int64_t answer = 0;

   for (int64_t i = 0; i < N; i += 1) {
     int64_t availibility = i > 0 ? A[i] - A[i - 1] : A[i];
     int64_t requirement  = B[i];
     if (requirement <= availibility) answer += 1;
   }

   std::cout << answer << std::endl;

  }
  return 0;
}
