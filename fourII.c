#include<stdio.h>
int main(){

    // print the table of a number input by user 

    // int n ;
    // printf(" Enter a number :");
    // scanf("%d \n" , &n);

    // for(int i=1 ; i<= 10 ; i++){
    //     printf("%d \n" , n* i);
    // }

    //Break Statement
    
    // for ( int i=1 ; i<=5 ; i++){
    //     if(i==5){
    //         break;
    //     }
    //     printf("%d \n" , i);
    // }
    // printf("END");


// Keep taking number as a input from user until user enters an odd number

    // int n;
    // do{
    //     printf("Enter a Number :") ;
    //     scanf("%d" , &n);
    //     printf("%d\n ", n );
        
    //     if(n%2 !=0){
    //         break;
    //     }
    // }
    // while(1);
    // printf("Thank You");

    // Keep taking number as a input from user until user enters an odd number
    
    // int n;
    // do{
    //     printf("Enter a number : ");
    //     scanf("%d" , &n );
    //     printf("%d \n" , n);    
    //     if (n % 7 == 0){
    //         break;
    //             }
    // } 
    // while (1);
    // printf("Thank You !");

    // continue statement
    // int i;
    // for(i = 0 ; i<=10 ; i++){
    //     if(i==3){
    //         continue;
    //     }
    //     printf("%d\n" , i);
    // }
    
// print all number from 1 to 10 except 6

// int i ;
// for(i = 1 ; i<=10 ; i++){
//     if(i == 6){
//         continue;
//     }
//     printf("%d \n " , i);
// }


// print all the odd no from 5 to 50 

// int i ;
// for(int i=5 ; i<=50 ; i++){
//     if(i%2 != 0){
//         printf("%d \n", i);
//     }
// }

//print the factorIal of aa number n

// int n;
// printf("Enter Number :");
// scanf("%d " , &n );

// int fact = 1;
// for (int i=1 ; i<=n ; i++){
//     fact = fact * i ;
// }
// printf("Final factorial is %d" , fact);


// print reverse of the table for a number

// int n;
// printf("Enter a number : ");
// scanf("%d \n " , &n);

// for ( int i = 10 ; i>=1 ; i--){
//     printf("%d \n" , n*i);
// }

// calculate the sum of all number between 5 to 50 (Including 5 and 50)

int sum = 0;
for( int i=5 ; i<=50 ; i++){
    sum = sum + i;

}
printf("Sum is %d" , sum);


return 0 ;

}