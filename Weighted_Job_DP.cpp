#include<bits/stdc++.h>
using namespace std;

struct job {
    int start;
    int end;
    int profit;
};

bool cmp(job &a, job &b) {
    return a.end < b.end;
}

int findMaxProfit(vector<job> &arr) {
   int n = arr.size();
   sort(arr.begin(), arr.end(), cmp);
   vector<int> dp(n);
   dp[0] = arr[0].profit;
   for (int i = 1; i < n; i++) {
      int including = arr[i].profit;
      int nc = -1;
      int low = 0, high = i - 1;
      while (low <= high) {
         int mid = low + (high - low) / 2;
         if (arr[mid].end <= arr[i].start) {
            nc = mid;
            low = mid + 1;
         } else {
            high = mid - 1;
         }
      }
      if (nc != -1) {
         including += dp[nc];
      }
      dp[i] = max(including, dp[i - 1]);
   }
   return dp[n - 1];
}

int main() {
    int n;
    cin >> n;
    vector<job> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].start >> arr[i].end >> arr[i].profit;
    }
    int ans = findMaxProfit(arr);
    cout << ans << endl;

}
