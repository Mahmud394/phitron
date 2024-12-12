/*
c++ WAP that takes an array of size n and q queries as input.
 For each query you will be given a number. 
 For each query you have to print ‘YES’ if the number is 
 present in the array, otherwise print ‘No’. Solve this problem in optimized way. 

Sample input
Sample output
5
6 3 2 1 8

4

1
5
2
9
YES
NO
YES
NO


Explanation: You are given an array of size 5 and 4 queries. 
In the first query you are given 1. 
1 is present in the array so we print ‘YES’. In the second query 5 is
 not present in the array so we print ‘NO’. Third and Fourth query are similar.  
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;  // Read the size of the array
    
    unordered_set<int> elements;  // Set to store the array elements
    
    // Read the elements of the array
    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;
        elements.insert(num);  // Insert each element into the set
    }
    
    int q;
    cin >> q;  // Read the number of queries
    
    // Process each query
    for (int i = 0; i < q; ++i) {
        int query;
        cin >> query;  // Read the query number
        if (elements.find(query) != elements.end()) {
            cout << "YES" << endl;  // If the number is found in the set
        } else {
            cout << "NO" << endl;  // If the number is not found
        }
    }
    
    return 0;
}
