#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count__vowel_recursive(char *str,int n,int count){
   
   char alpha = tolower(str[n]);
   if(n<0){
   	return count;
   }
   else{
        char alpha = tolower(str[n]);
        if(alpha=='a' || alpha=='e' ||alpha=='i' ||alpha=='o' ||alpha=='u')
       	    count+=1;
   }
   return count__vowel_recursive(str,--n,count);
}

int main(){

  char *vowel_string = "lewis is champ";
  int len = strlen(vowel_string);
  printf("%d\n",count__vowel_recursive(vowel_string,len-1,0));
  return 0;
}