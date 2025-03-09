/*
Problem Statement

Pile of Word is a word formed by rearranging the letters of another word, using all the original 
letters exactly once. In other words, it involves creating a new word by rearranging the 
characters of a given word. It is possible that after rearranging it looks like the original one.

You will be given two strings S1 and S2. You need to determine if the strings are Pile of Word of 
each other.

Input Format

First line will contain T, the number of test cases.
Each line of the test case will contain s! and S2 separated by a space. The string will contain 
Enlish small alphabets only.

Output Format

Ouptut YES if the strings are Pile of Word to each other, NO otherwise.
Sample Input 0

4
eat tea
madam madam
ball all
ant tan
Sample Output 0

YES
YES
NO
YES

*/

#include <bits/stdc++.h>
using namespace std;

bool isSame(string s1, string s2) {
    if (s1.length() != s2.length()) 
        return false; 

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    return s1 == s2;
}

int main() {
    int T;
    cin >> T;
    cin.ignore();  

    while (T--) {
        string s1, s2;
        cin >> s1 >> s2;

        if (isSame(s1, s2))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}
