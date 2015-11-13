#include <stdio.h> 
#include <string.h>
#include <stdlib.h>

int main() 
{

int n;
printf("Size of Arrays(1-10): ");
scanf("%d",&n);

int myArray1[10] = {0};
int myArray2[10] = {0};

printf("First Array :");
for(int i=0;i<n;i++){
 scanf("%d",&myArray1[i]);
}

printf("Second Array :");
for(int i=0;i<n;i++){
 scanf("%d",&myArray2[i]);
}
//  code to check for 


int concat[10] = {0};
int index = 0;

for(int i=0;i<n;i++){
	concat[index++]=myArray1[i];
}

for(int i=0;i<n;i++){
	concat[index++]=myArray1[i];
}


// find first index of first element of second array
int ele = myArray2[0];
int ele_index=-1;


for(int i=0;i<2*n;i++){
     if(ele == concat[i])
     	{ ele_index= i;break;}
}

int i;

for(i=0;i<n;i++){
   
   if(concat[ele_index++]!=myArray2[i])
   	  { printf("Not a Shift!");break;}

}

if(i==n)
 { printf("Shift by%d\n",(2*n - ele_index) );}


return 0;
}