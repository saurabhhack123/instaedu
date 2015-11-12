import java.util.Scanner;

public class ValidatePass{
    
	public static void main(String args[]){
    
    // take user input
	Scanner in = new Scanner(System.in); 
    boolean loop = true;

    while(loop){
 
        System.out.print("Enter your password:");
        String pass= in.nextLine();
        boolean valid = true;
        
        // The password should contain at least one uppercase letter
        if (!pass.matches(".*[A-Z].*"))      valid = false;
        // The password should contain at least one lowercase lette
        if (!pass.matches(".*[a-z].*"))      valid = false;
        // The password should have at least one digit
        if (!pass.matches(".*\\d.*"))        valid = false;
        // The password should have at least one of the following symbols: #, $, &, *, ^, +, -, or @.
        if (!pass.matches(".*[#$&*^+-@].*")) valid = false;
        // The password should be at least eight characters long
        if(pass.length() < 9) valid = false;
        
        // if valid password break the loop 
        if(valid){
        	System.out.println("Correct");
        	loop = false;
        }else{
        	System.out.println("Wrong");
        }
    }
      
	}
}