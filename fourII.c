#include<stdio.h>
int main(){

    // print the table of a number input by user 

    int n ;
    printf(" Enter a number :");
    scanf("%d \n" , &n);

    for(int i=1 ; i<= 10 ; i++){
        printf("%d \n" , n* i);
    }

    return 0;
    
}