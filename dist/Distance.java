import java.util.Scanner;

public class Distance{
    
	public static void main(String args[]){
    
    // take user input
	Scanner in = new Scanner(System.in); 
    int loop = 4;

    while(loop>0){
 
        System.out.print("Enter X1:");
        int x1= Integer.parseInt(in.nextLine());
        
        System.out.print("Enter Y1:");
        int y1= Integer.parseInt(in.nextLine());
        
        System.out.print("Enter X2:");
        int x2= Integer.parseInt(in.nextLine());
        
        System.out.print("Enter Y2:");
        int y2= Integer.parseInt(in.nextLine());

        int x0 = 0;
        int y0 = 0;
        
        double distance1 = Math.pow( Math.pow((x1-x0),2)+Math.pow((y1-y0),2)  ,0.5);
        double distance2 = Math.pow( Math.pow((x2-x0),2)+Math.pow((y2-y0),2)  ,0.5); 
        if(distance1 > distance2){
        	System.out.println("B is closer to (0,0)");
        }else{
        	System.out.println("A is closer to (0,0)");
        }
        loop=loop-1;
    }
      
	}
}