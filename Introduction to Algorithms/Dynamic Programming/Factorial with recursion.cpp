#include<bits/stdc++.h>
using namespace std;

int fact(int n)  // O(N)
{
    if(n==1)
        return 1;
    return n * fact(n-1); 
}

int main()
{
    cout << fact(5);
    return 0;
}