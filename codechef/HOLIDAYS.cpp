#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N, W;
    std::cin >> N >> W;
    std::vector<int> A;
    for (int n = 0; n < N; n++) { int Ai; std::cin >> Ai; A.push_back(Ai); }

    /*
      ======================================
        Ved is a salesman. He needs to earn
        at least W rupees in N days for his
        livelihood. However, on a given day
        (1 <= i <= N), he can only earn Ai
        rupees by working on that day.
        Ved being a lazy salesman, wants to
        take as many holidays as possible.
        It is known that on a holiday, Ved
        does not work and thus does not
        earn anything. Help maximize the number
        of days on which Ved can take a holiday.
        It is guaranteed that Ved can always
        earn at least W rupees by working
        on all days.
      ======================================
    */

    int worked = 0; int earned = 0;
    std::sort(std::begin(A), std::end(A), std::greater<int>());
    for (int i = 0; i < N; i += 1) { if (earned < W) { earned += A[i]; worked++; } else { break; }  }
    int answer = N - worked;
    std::cout << answer << std::endl;
  }
  return 0;
}
