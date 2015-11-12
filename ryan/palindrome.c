// pre processor 
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// define constant
#define N 101 

// function prototype 
// bool is_palindrome(int n, char array[n]);

/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
int main(void)
{
    // define variables 
    char array[N]; 
   
    // how to read in characters into an array ??
    
    int i=0;
    while( (array[i++]=getchar()) != '\n') /* take input from user until it's a newline */
        ;
     // array[i] = '\0'; /* null-terminate the string */
     i = 0;  
     while(array[i] != '\n') /* print until we've hit \0 */
         printf("%c",array[i++]);

     return 0;


    // end program 
    exit(EXIT_SUCCESS);
}

/*----------------------------------------------------------------------------*/
/*----------------------------------------------------------------------------*/
// bool is_palindrome(int n, char array[n])
// {

    
    
    
//     return; 
// }
