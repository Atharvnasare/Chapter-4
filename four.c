#include<stdio.h>

int main(){

//     for (int i = 1 ; i <= 200 ;i = i + 1){
//     printf("Hello world\n");
// }


// for ( int i = 100 ; i >= 1 ; i = i - 1){
//     printf("%d\n" , i);
// }


// for (int i = 0 ; i <= 10 ; i = i+ 1){
//     printf("%d\n" , i)
// }



// Increment operator

// int i = 1;
//  printf("%d \n" , i++); // use , then increase (i++   = post increment )
//  printf("%d\n", i);

// printf("%d \n" , ++i); //  increase  , then use (++i  = pre increment)
// printf("%d\n", i);


// Decrement Operator

// int i = 1;
//  printf("%d \n" , --i); // use , then increase (--i  = pre decrement )
//  printf("%d\n", i);

//  int i = 1;
//  printf("%d \n" , i--); // use , then increase (i--   = post decrement )
//  printf("%d\n", i);


// for (float i = 1.1 ; i<= 99.1 ; i++){
//     printf("%f \n", i);


// for (char ch = 'a' ; ch<= 'z' ; ch++){
//     printf("%c \n" , ch);
// }

//Infinite Loop

// for ( int i=1 ; ; i++ ){
//     printf("Hello Atharv \n");
// }


//While Loop 

// print no 1 to 10

// int i = 1;
// while (i <= 10)
// {
// printf("%d\n", i);
// i++;
//}

//print the number from 0 to n , if n is given by user

// int n;
// printf("Enter a number :");
// scanf("%d" , &n);

// int i = 0;
// while (i <= n )
// {
//     printf("%d\n", i);
//     i++;
// }


// Do While Loop

// print 1 to 10

// int i = 10;
// do
// {
// printf("%d\n" , i);
// i--;
// } while (i >=1);


//print the sum of first n natural no

int n;
printf("Enter a number :");
scanf("%d" , &n);

// int sum = 0;
// for ( int i=1 , j=n ; i<=n && j>=1 ; i++ , j--){
//     sum= sum +1;
//     printf("%d\n", j);
// }

// printf("sum is %d \n" , sum);

int sum = 0;
for ( int j=n ; j>=1 ; j--){
    sum= sum + j;
    printf("%d\n", j);

}
printf("sum is %d \n" , sum);




// int sum = 0;
// for (int  i=1 ; i <= n ; i++){
//     sum = sum + i;
// }


// for (int i=n ; i>=1 ; i--){
//     printf("%d\n" , i);
// }

// printf("Sum is %d" , sum);




return 0 ;

}