#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    double N, K;
    std::cin >> N >> K;
    std::vector<double> A;
    for (double n = 0; n < N; n++) { double Ai; std::cin >> Ai; A.push_back(Ai); }
    /*
      ======================================
        Sergey has made N measurements. Now,
        he wants to know the average value
        of the measurements made. In order
        to make the average value a better
        representative of the measurements,
        before calculating the average, he
        wants first to remove the highest K
        and the lowest K measurements. After
        that, he will calculate the average
        value among the N - 2K measurements.
        Could you help Sergey to find the
        average value he will get after these
        manipulations?
      ======================================
    */

    std::vector<double> B; double Sb = 0; double count = 0;
    std::sort(std::begin(A), std::end(A));
    for (double i = K; i < N - K; i += 1) { Sb += A[i]; count++; }
    double answer = Sb / count;
    std::cout << std::fixed << std::setprecision(6) <<  answer << std::endl;
  }
  return 0;
}
