#include<bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
using namespace std;


int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at, at+n);
    sort(dt, dt+n);
    int plat = 1, maxPlat = 1;
    int arrivalIndex = 1, departureIndex = 0;
    //int arrivalTime = at[0], departureTime = dt[0];
    while (arrivalIndex < n && departureIndex < n) {
        if (at[arrivalIndex] <= dt[departureIndex]) {
            plat++;
            arrivalIndex++;
        }
        else if (at[arrivalIndex] > dt[departureIndex]) {
            plat--;
            departureIndex++;
        }
        maxPlat = max(maxPlat, plat);
    }
    return maxPlat;
}

int main() {
    int n;
    cout << "Number of trains: ";
    cin >> n;
    int at[n], dt[n];
    cout << "Enter arrival and departure time" << endl;
    for (int i = 0; i < n; i++) {
        cin >> at[i] >> dt[i];
    }
    int ans = calculateMinPatforms(at, dt, n);
    cout << ans << endl;
}
