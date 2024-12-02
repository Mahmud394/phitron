
/*

*/

#include <bits/stdc++.h>

using namespace std;
class Student 
{
    public:
    string s;
    int id;
    char c;
    int cls;
    int mat_mark;
    int eng_mark;
    
};
bool cmp(Student &a, Student &b )
{
    if (a.eng_mark == b.eng_mark) {
     
     if(a.mat_mark == b.mat_mark)
    {
        return a.id<b.id;
    }
           return a.mat_mark > b.mat_mark; 
    }
    return a.eng_mark > b. eng_mark;
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].s>>a[i].cls>>a[i].c>>a[i].id>>a[i].mat_mark>>a[i].eng_mark;
       
    }
    sort(a,a+n,cmp);
    
     for(int i=0;i<n;i++)
    {
        cout<<a[i].s<<" "<<a[i].cls<<" "<<a[i].c<<" "<<a[i].id<<" "<<a[i].mat_mark<<" "<<a[i].eng_mark<<endl;
    }
    
}
