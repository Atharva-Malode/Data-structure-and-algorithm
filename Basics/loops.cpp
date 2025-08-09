// question : https://codeforces.com/problemset/problem/1714/A
// Vlad, like everyone else, loves to sleep very much.
// Every day Vlad has to do 𝑛 things, each at a certain time. For each of these things, he has an alarm clock set, the 𝑖-th of them is triggered on ℎ𝑖 hours 𝑚𝑖 minutes every day (0≤ℎ𝑖<24,0≤𝑚𝑖<60). Vlad uses the 24-hour time format, so after ℎ=12,𝑚=59 comes ℎ=13,𝑚=0 and after ℎ=23,𝑚=59 comes ℎ=0,𝑚=0.
// This time Vlad went to bed at 𝐻 hours 𝑀 minutes (0≤𝐻<24,0≤𝑀<60) and asks you to answer: how much he will be able to sleep until the next alarm clock.
// If any alarm clock rings at the time when he went to bed, then he will sleep for a period of time of length 0.

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, h ,m;
        cin >> n >> h >> m;

        int sleep_time = h * 60 + m;
        int ans = 1e7;

        for (int i = 0; i < n ; i++) 
        {

            int hour_i, min_i;
            cin >> hour_i >> min_i;

            int alarm_time = hour_i * 60 + min_i;

            int diff = alarm_time - sleep_time;
            diff += 1440;
            diff %= 1440;

            ans = min(ans , diff);    
         }
        cout << ans / 60 << " " << ans % 60 << endl;
    }

    return 0;
}
