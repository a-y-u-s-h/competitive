#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    long long N, D;
    std::cin >> N >> D;
    std::vector<long long> A;
    /*
      ======================================
        Finally, a COVID vaccine is out on
        the market and the Chefland government
        has asked you to form a plan to
        distribute it to the public as soon
        as possible. There are a total of N
        people with ages a1, a2, a3, ..an.

        There is only one hospital where
        vaccination is done and it is only
        possible to vaccinate up to D people
        per day. Anyone whose age is >= 80 or
        <= 9 is considered to be "at risk". On
        each day, you may not vaccinate both
        a person who is at risk and a person
        who is not at risk. Find the smallest
        number of days needed to vaccinate
        everyone.
      ======================================
    */
    std::map<std::string, long long> counts;
    for (long long n = 0; n < N; n++) { long long Ai; std::cin >> Ai; A.push_back(Ai); (Ai >= 80 || Ai <= 9) ? counts["risk"]++ : counts["safe"]++; }
    long long Cr = counts["risk"], Cs = counts["safe"];
    long long answer = (Cs / D) + (Cr / D) + std::ceil((double) (Cs % D) / D) + std::ceil((double) (Cr % D) / D);
    std::cout << answer << std::endl;
  }
  return 0;
}
