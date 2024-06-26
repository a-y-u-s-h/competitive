#include <bits/stdc++.h>

class Trainer {
  public:
    long long D;
    long long T;
    long long S;
    Trainer (long long& D, long long& T, long long& S) : D (D), T (T), S (S) {}
};

int main(int argc, char const *argv[]) {
  long long T;
  std::cin >> T;
  for (long long t = 0 ; t < T; t += 1) {
    long long N, D;
    std::cin >> N >> D;
    /*
      ======================================
        During the Indian Programming Camp
        (IPC), there are N trainers. The camp
        runs for D days. Each day, there can
        be at most one lecture. The i-th trainer
        arrives on day Di and then stays till
        the end of the camp. He also wants to
        teach exactly Ti lectures. For each
        lecture that a trainer was not able
        to teach, he will feel sad and his
        sadness level will be increased by Si.

        You are the main organizer of the
        contest. You want to find minimum
        total sadness of the trainers.
      ======================================
    */

    /*
      ======================================
        Take trainers as input and sort them
        based on their arrival order. We need
        to do this because we want to process
        them in that particular order.
      ======================================
    */
    std::vector<Trainer> trainers;
    for (long long i = 0; i < N; i++) { long long Di, Ti, Si; std::cin >> Di >> Ti >> Si; trainers.emplace_back(Di, Ti, Si); }
    std::sort(std::begin(trainers), std::end(trainers), [] (auto const &a, auto const &b) { return b.D > a.D; });

    /*
      ======================================
        To improve time complexity, we'll
        use a set to find the trainer
        with maximum sadness for each day.
        We'll store pairs of Si and Ti in it.
        `index` keeps track of current index
        of the trainer.
      ======================================
    */
    std::multiset<std::pair<long long, long long>> ST; long long index = 0;

    for (long long day = 1; day <= D; day++) {
      /*
        ======================================
          If we're currently within valid number
          of trainers and arrival day of current
          trainer is today, then we need to insert
          it into our ST tracker. If that set
          contains nothing, then we don't have
          any trainers on the camp till that day.
        ======================================
      */
      while (index < N && trainers[index].D == day) { ST.insert({ trainers[index].S, trainers[index].T }); index++; }

      /*
        ======================================
          If we have some trainers here, we'll
          pop out the last element from ST set
          and decrease their lectures by 1.
          We'll pop it if it doesn't have any
          number of lectures left.
        ======================================
      */
      if (!ST.empty()) {
        auto last = --ST.end(); auto current = *last; current.second--; ST.erase(last);
        if (current.second > 0) ST.insert(current);
      }
    }

    /*
      ======================================
        We'll now find out the total sadness
        and then output the result.
      ======================================
    */
    long long answer = 0; for (auto const &[Si, Ti] : ST) { answer += (Si * Ti); }
    std::cout << answer << std::endl;
  }
  return 0;
}
