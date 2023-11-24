#include<bits/stdc++.h>
#define fr(i, a, b) for(int i = a; i < b; i++)
using namespace std;

void minSwap (int n, int m, int k, string &s, vector<char> &arr) {
    int freq[k][26];
    unordered_map<int, bool> stock;
    fr (i, 0, k) {
        fr (j, 0, 26) {
            freq[i][j] = 0;
        }
        cout << endl;
    }
    fr (i, 0, m) {
        stock[(int)(arr[i] - 'a')] = true;
    }
    fr(i, 0, n) {
        int c = s[i] - 97;
        freq[i % k][c]++;
    }
    int swapCount = 0;
    fr (i, 0, k) {
        int rowSum = 0;
        int rowMax = INT_MIN;
        fr (j, 0, 26) {
            rowSum += freq[i][j];
            if (freq[i][j] > rowMax) {
                if (stock.count(j)) {
                    rowMax = freq[i][j];
                }
            }
        }
        swapCount += (rowSum - rowMax);
    }
    cout << "Min Swaps: " << swapCount << endl;
}

int main() {
    int n, m, k;
    cout << "Enter N, M and K: ";
    cin >> n >> m >> k;
    string s;
    cout << "Enter the string: ";
    cin >> s;
    vector<char> arr(m);
    cout << "Enter available chars: ";
    fr(i, 0, m) {
        cin >> arr[i];
    }
    minSwap(n, m, k, s, arr);
}