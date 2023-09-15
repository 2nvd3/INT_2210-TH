#include <iostream>
#include <vector>
using namespace std;


int count_triplets(vector<int>& v) {
    int count = 0;

    for(int i=1;i<v.size()-1;i++) {
        if(v[i-1]+v[i]+v[i+1]==0) count++;
    }
    return count;
}

int main() {
    int n;
    cin >> n;

    vector<int> v;

    while(n--) {
        int num;
        cin>>num;
        v.push_back(num);
    }

    cout << count_triplets(v);

    return 0;
}
