#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int x;
    cin>>x;
    int l=0;
    int r=n-1;
    bool flag=false;
    while(l<=r)
    {
        int mid_index=(l+r)/2;
        if(a[mid_index]==x)
        {
            flag=true;
            break;
        }
        if(x>a[mid_index])
        {
            // dane jao
            l=mid_index+1;
        }
        else 
        {
            // bame jao
            r=mid_index-1;
        }
    }
    cout<<l<<" "<<r<<endl;
    if(flag==true) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}

/*
#include<bits/stdc++.h>
using namespace std;
int main(){

    printf("array size : ");
    int n;
    cin>>n;

    int arr[100];

    printf("array element :\n");
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    //Bubble sort
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n-i-1;j++){
    //        if(arr[j]>arr[j+1]){
    //         int temp;
    //         temp = arr[j];
    //         arr[j]=arr[j+1];
    //         arr[j+1]=temp;
    //        }
    //     }
    // }

    int key;
    printf("value to search : ");
   cin>>key;


    int low=0, high=n-1;

    while(low<=high){
        int mid=(low+high)/2;

        if(arr[mid] == key){
            cout<<"value found at "<<mid<<" index<<endl;
            break;
            
        }else if(arr[mid]>key){
            high=mid-1;
        }else{
            low=mid+1;
        }

    }

    return 0;
}

*/