/*********************Write a program to find the sum of the following series

                             Series: 1/1! + 2/2! +3/3! + …. + N/N!     ***********************/

#include <stdio.h> 
 int main() 
{ 
    int n,i; 
   float sum=0,fact=1; 
   printf("Enter n for series n/n!  :  ");          // to get the value for that last number in the series
   scanf("%d",&n); 
   
     for(i=1; i<=n; i++)                                     // finding the sum using for loop 
     { 
     fact=fact*i; 
     sum = sum + (i/fact) ; 
     } 
  
 printf("Sum of the series :  "); 
 printf("=  %f",sum); 			                          // Print the sum	
  
    return 0; 
}
