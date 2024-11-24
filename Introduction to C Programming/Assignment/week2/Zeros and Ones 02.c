/*
In this problem you will be given an integer N, followed by an array containing N numbers.

Each numbers will be either 0 or 1.

You will also be an integer X.

You will have to toggle the X_th value in the array. Toggle means if the value is 0, you will make it 1 and if it is 1 you have to make it 0.

Then you have to print the array.

Input Format

The first line will contain a single integer N.
The second line will contain N integers.
The third line will contain a single integer X.
Constraints

1 <= N, X <= 100000
Each N numbers will be either 0 or 1.
Output Format

Print the array after updating.
Sample Input 0

5
0 1 1 0 0
4
Sample Output 0

0 1 1 1 0
Sample Input 1

4
0 1 1 1
1
Sample Output 1

1 1 1 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d",&n);
    int arr[n];
    int indx;
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&indx);
    for(int i=1;i<=n;i++)
    {
        
            arr[indx]=1;   
        printf("%d ",arr[i]);
    }
}

