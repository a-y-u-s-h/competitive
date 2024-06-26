#include <bits/stdc++.h>

int main(int argc, char const *argv[]) {
  int T;
  std::cin >> T;
  for (int t = 0 ; t < T; t += 1) {
    int N;
    std::cin >> N;
    std::vector<int> F;
    for (int n = 0; n < N; n++) { int Fi; std::cin >> Fi; F.push_back(Fi); }
    /*
      ======================================
        There are N cars (numbered 1 through N)
        on a circular track with length N.
        For each i (2 <= i <= N), the i-th
        of them is at a distance i - 1 clockwise
        from car 1, i.e. car 1 needs to travel a
        distance i - 1 clockwise to reach car i.
        Also for each valid i, the i-th car
        has Fi litres of gasoline in it initially.

        You're driving a car 1 in the clockwise
        direction. To move one unit of distance
        in this direction, you need to spend 1
        litre of gasoline. When you pass another
        car (even if you'd run out of gasoline
        exactly at that point), you steal all
        its gasoline. Once you do not have any
        gasoline left, you stop.

        What is the total clockwise distance
        travelled by your car?
      ======================================
    */
    int fuel = F.front(); int distance = 0;
    if (fuel) for (int i = 1; i < N; i++) { fuel--; distance += 1; fuel += F[i]; if (fuel == 0) break; }
    int answer = distance + fuel;
    std::cout << answer << std::endl;
  }
  return 0;
}
