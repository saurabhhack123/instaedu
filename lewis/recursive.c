#include <stdio.h>

int sum_recursive(int a[],int n,int sum){
   
   if(n<0){
   	return sum;
   }else{
   	sum+=a[n];
   }
   return sum_recursive(a,--n,sum);
}

int main(){

  int arr[] = {1,2,3,4,5};
  int len = sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",sum_recursive(arr,len-1,0));
  return 0;
}