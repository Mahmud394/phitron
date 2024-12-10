#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;  
    vector<int> v(n);

    unordered_set<int> v1; 

    for (int i = 0; i < n; i++) {
        cin >> v[i];
        v1.insert(v[i]);  
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v1.find(v[i] + 1) != v1.end()) {  
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
