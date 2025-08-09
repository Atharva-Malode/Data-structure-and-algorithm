// https://codeforces.com/contest/1614/problem/B
#include <iostream>
		#include <algorithm>
		#include <cmath>
		#include <vector>
		using namespace std;
		int main() {
		    int t;
		    cin >> t;
		    while (t--) {
		        int n;
		        cin >> n;
		        vector<int> a(n);
		        for (int i = 0; i < n; i++) {
		            cin >> a[i];
		        }
		        // Store frequency and original index
		        vector<pair<int, int>> freq;
		        for (int i = 0; i < n; i++) {
		            freq.push_back({a[i], i + 1}); // i+1 because 0 is HQ
		        }
		        // Sort in descending order of frequency
		        sort(freq.rbegin(), freq.rend());
		        // Store positions of buildings
		        vector<int> position(n + 1); // position[0] is for HQ
		        position[0] = 0;
		        int dist = 1;
		        bool right = true;
		        long long total_time = 0;
		        for (auto &f : freq) {
		            int visit = f.first;
		            int idx = f.second;
		            int coord = right ? dist : -dist;
		            position[idx] = coord;
		            total_time += 2LL * abs(coord) * visit;
		            if (!right) dist++;
		            right = !right;
		        }
		        cout << total_time << "\n";
		        for (int i = 0; i <= n; i++) {
		            cout << position[i] << " ";
		        }
		        cout << "\n";
		    }	
		    return 0;
		}
