#include<bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;


bool cmp(pair<float, int> &a, pair<float, int> &b) {
    if (a.first < b.first) return true;
    else if (a.first > b.first) return false;
    else {
        if (a.second < b.second) return true;
        else return false;
    }
}

vector<int> minLoss(int n, vector<int> &time, vector<int> &loss) {
    vector<pair<float, int> > ratio(n);
    for (int i = 0; i < n; i++) {
        ratio[i] = make_pair(((float)time[i] / loss[i]), i + 1);
    }
    sort(all(ratio), cmp);
    vector<int> ans(n);
    cout << "The sorted array is" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Ratio: "  << ratio[i].first << " Index: " << ratio[i].second;
        cout << endl;
    }
    for (int i = 0; i < n; i++) {
        ans[i] = ratio[i].second;
    }
    return ans;
}

int main() {
    int n;
    cout << "Number of stations: ";
    cin >> n;
    vector<int> time(n, 0), loss(n, 0);
    cout << "Enter time array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }
    cout << "Enter loss array: " << endl;
    for (int i = 0; i < n; i++) {
        cin >> loss[i];
    }
    vector<int> ans = minLoss(n, time, loss);
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << endl;
}
