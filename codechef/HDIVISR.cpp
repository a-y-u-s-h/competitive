#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int N;
  std::cin >> N;
  /*
    ======================================
      We're given a number N, we need
      to find the largest integer between
      1 and 10 which divides N.
    ======================================
  */
  int answer = 1;
  for (int i = 1; i <= 10; i += 1)
    if (N % i == 0) answer = i;
  std::cout << answer << std::endl;
  return 0;
}
