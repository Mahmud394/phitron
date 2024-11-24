/*
Abul, Babul and Bablu with their money will go to eat at a resturant. The have discussed and decided what they will eat.

If their total money is at least 1000 they will eat "Three Kacchi", otherwise if they have at least 500 taka they will eat "One Large Pizza", if the money is less then 500 and they have at least 250 taka they will eat "Three Small Burger", if they have at least 100 taka they will eat "Three Fuchka" and if they don't even have 100 taka they will be sad and eat "Nothing".

So if they tell you how many money they have can you tell what they are going to eat?

Input Format

Input will contain one integer number M, the money they have in total.
Constraints

1 <= M <= 5000
Output Format

Print one of the sentences "Three Kacchi", "One Large Pizza", "Three Small Burger", "Three Fuchka" and "Nothing" according to the money they have.
Sample Input 0

600
Sample Output 0

One Large Pizza
Sample Input 1

2000
Sample Output 1

Three Kacchi
Sample Input 2

10
Sample Output 2

Nothing*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int a;
    scanf("%d",&a);
    if(a>=1000){
        printf("Three Kacchi");}
    else if (a>=500)
    {
        printf("One Large Pizza");
    }
    else if (a>=250)
    {
        printf("Three Small Burger");
    }
    else if (a>=100)
    {
        printf("Three Fuchka");
    }
    else
    {
        printf("Nothing");
    }
    return 0;
}
