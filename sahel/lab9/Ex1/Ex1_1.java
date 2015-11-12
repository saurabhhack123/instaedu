import java.util.Scanner;

public class Ex1_1{
    
	public static void main(String args[]){
    
    // a :  initialize list 
    double[] x = {8,4,5,21,7,9,18,2,100};  
    // b :  Print the number of items in the array b
    System.out.println("Number of items in the array : "+ x.length);
    // c : Print the first array item
    System.out.println("first array item: "+ x[0]);
    // d : Print the last array item. 
    System.out.println("Last array item: "+ x[x.length-1]);
    // e , value will be same as d , since x.length-1 will give last index
    System.out.println("Print the expression x[x.length – 1]: "+ x[x.length-1]);
    // f :  Use a standard for loop to print all the values in the array without labels. 
    for (int i = 0; i < x.length; i++) {
         System.out.println(x[i] + " ");
      }
    // g : Use a standard ( loop to print all the values in the array with labels to indicate what each
    // element is.
     for (int i = 0; i < x.length; i++) {
         System.out.println("Value at index "+i+" is : "+x[i]);
      } 
    // h :  Use a standard for loop to print all the values in the array in reverse order with labels to
    // indicate what each element is.
    for (int i = x.length-1; i>=0; i--) {
         System.out.println("Value at index "+i+" is : "+x[i]);
      } 
   // i : Use an enhanced for loop to print all the values in the array without labels.
      for (double element: x) {
         System.out.println(element);
      }
      
	}
}