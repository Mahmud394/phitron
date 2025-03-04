#include<bits/stdc++.h>
using namespace std;

int recu(int n)  //print 1-5
{
    if(n>5)
        return 0;

    cout<<n<<" ";
     recu(n+1);
    
}

int recur(int n)  //print 5-1
{
    if(n>5)
        return 0;

    
     recur(n+1);
     cout<<n<<" ";
}

int rec(int n) // sum 1-5  O(N)
{
    if(n>5)
        return 0;
    int sum = rec(n+1);
    return sum + n;
}

int main()
{
    recu(1);
    cout <<  endl;
    recur(1);
    cout <<  endl;
    cout << rec(1) << endl;
    return 0;
}

