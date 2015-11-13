#include <stdio.h> 
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
 int n=10;
 int a[10] = {0};
 printf("Array of 10 integers \n");
 for(int i=0;i<n;i++){
   scanf("%d",&a[i]);
 }
 
int  small_diff = 99999;
int first_no;
int first_pos=-1;
int second_no;
int second_pos=-1;


for(int i=0;i<n;i++){
	for(int j=i+1;j<n;j++){
        int temp = abs(a[j]-a[i]);
        if(temp<small_diff)
        {
            small_diff = temp;
            first_no = a[i];
            first_pos = i;
            second_no = a[j];
            second_pos = j;
        }
	}
}

printf("%d is at position %d and %d is at position %d\n",first_no,first_pos,second_no,second_pos );

}