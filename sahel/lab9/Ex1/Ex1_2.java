import java.util.Scanner;

public class Ex1_2{
    
	public static void main(String args[]){
    
    // a :  initialize list 
    double[] x = {8,4,5,21,7,9,18,2,100};  
    int count = 0;
    // b
      for (double element: x) {
         count=count+1;
      }
     System.out.println("Total of all the elements using enhanced for loop : "+count); 
    
    // c 
     count = 0;

     for (int i = 0; i < x.length; i++) {
         count=count+1;
      } 
     System.out.println("Total of all the elements using standard for loop : "+count); 
	  // d
    double min = x[0];
    for (int i = 1; i < x.length; i++) {
         if(x[i]<min)
           min = x[i];
      } 
    System.out.println("Minimum value in x is :"+ min);  
    // e
    min = x[0];
    int min_index = 0;
    for (int i = 1; i < x.length; i++) {
         if(x[i]<min)
           { min = x[i]; min_index= i;}

      } 
    System.out.println("Minimum value in x is :"+ min +" at index "+min_index); 


  }
}