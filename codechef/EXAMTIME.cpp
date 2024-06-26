#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int D1, D2, D3;
    int S1, S2, S3;
    std::cin >> D1 >> D2 >> D3;
    std::cin >> S1 >> S2 >> S3;
    /*
      ======================================
        Two friends, D and S are writing a CS
        examination series. There are 3 subjects
        in the series: DSA, TOC, DM. Each subject
        carry 100 marks. You know the individual
        scores of Dragon and Sloth in those 3 subjects
        (D1, D2, D3 and S1, S2, S3). You have
        to determine who gets a better rank. In
        case of ties, the preference is given to
        DSA > TOC > DM. If everything is tied
        they get the same rank.
      ======================================
    */
    std::string answer = (D1 + D2 + D3 > S1 + S2 + S3) ? "DRAGON"
                       : (D1 + D2 + D3 < S1 + S2 + S3) ? "SLOTH"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 > S1) ? "DRAGON"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 < S1) ? "SLOTH"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 == S1 && D2 > S2) ? "DRAGON"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 == S1 && D2 < S2) ? "SLOTH"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 == S1 && D2 == S2 && D3 > S3) ? "DRAGON"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 == S1 && D2 == S2 && D3 < S3) ? "SLOTH"
                       : (D1 + D2 + D3 == S1 + S2 + S3 && D1 == S1 && D2 == S2 && D3 == S3) ? "TIE" : "";

    std::cout << answer << std::endl;
  }
  return 0;
}
