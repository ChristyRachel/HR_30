#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n;
    cin >> n;
    for(int j=0;j<n;j++){
        string a,a1,a2;
        cin >> a;
        for (int i = 0; i < a.length(); i++) {
            if (i % 2 == 0) {
                a1 = a1 + a[i];
            } else
                a2 = a2 + a[i];
        }
    cout << a1 << " " << a2 << endl;
    }
return 0;
}
