#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int A, B;
    std::cin >> A >> B;
    /*
      ======================================
        A startup founder gets two offers in
        Shark Tank: A dollars for 10% of his
        company and B dollars for 20% of his
        company. He will accept the offer
        from the investor whose valuation of
        company is more. Determine which offer
        will he accept or if both the offers
        are equally good.
      ======================================
    */
    auto valuation = [] (int offer, int percent) { return (offer / percent) * 100; };
    std::string answer = valuation(A, 10) > valuation(B, 20) ? "FIRST"
                       : valuation(A, 10) < valuation(B, 20) ? "SECOND"
                       : "ANY";
    std::cout << answer << std::endl;

  }
  return 0;
}
