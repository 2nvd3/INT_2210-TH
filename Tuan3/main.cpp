//O(n)
#include<iostream>
using namespace std;

int case_1(int n) {
    int result = 0;
    for(int i = 0; i < n; i++) {
        result += 2;
    }
    return result;
}

int main() {
    int n; cin>>n;
    cout << case_1(n);
    return 0;
}


//O(1)
#include<iostream>
using namespace std;

int case_2(int n) {
    return 2*n;
}

int main() {
    int n; cin>>n;
    cout<<case_2(n);
    return 0;
}
