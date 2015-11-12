import java.util.ArrayList;

public class ArrayListRunner
{
		public static void main(String[] args)
		{
		 ArrayList<String> names = new ArrayList<String>();
		 System.out.println(names);
         // a
		 names.add("Alice");
		 names.add("Bob");
		 names.add("Connie");
		 names.add("David");
		 names.add("Edward");
		 names.add("Fran");
		 names.add("Gomez");
		 names.add("Harry");

		 for(String name:names){
		 	 System.out.println(name);
		 }
         // b
		 System.out.println("First name is "+names.get(0));

		 System.out.println("Last name is "+names.get(names.size()-1));
		 // c
          System.out.println("Size of list is "+names.size());
         // d
         System.out.println("Using Size to print Last name "+names.get(names.size()-1));
         // e
         names.set(0,"Alice B. Toklas");
 		 for(String name:names){
		 	 System.out.println(name);
		 }
		 // f
		 names.set(3,"David Doug");
 		 for(String name:names){
		 	 System.out.println(name);
		 }
		 // g
  		 for(String name:names){
		 	 System.out.println(name);
		 } 
        // h
        ArrayList<String> names2 = new ArrayList<String>(names);
  		 for(String name:names2){
		 	 System.out.println(name);
		 } 
       // i
		 names.remove(0) ;
	     for(String name:names){
		 	 System.out.println(name);
		 } 
		for(String name:names2){
		 	 System.out.println(name);
		 } 
		}
} 