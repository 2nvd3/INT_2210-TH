#include<bits/stdc++.h>
using namespace std;

int main() {
    int n, m, x;
    cin >> n >> m >> x;
    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];
    int count = 0, sum = 0;
    int i = 0, j = 0;
    while(i<n && sum+a[i]<=x) {
        sum += a[i];
        i++;
    }
    count = i;
    while(j<m && i>=0) {
        sum += b[j];
        j++;
        while(x<sum && i>0) {
            i--;
            sum -= a[i];
        }
        if(sum<=x && count<i+j) count = i + j;
    }
    cout << count << endl;
    return 0;
}