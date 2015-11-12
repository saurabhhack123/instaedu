import java.util.Scanner;

public class CustomerLister{
    
	public static void main(String args[]){
        
        // Ex2.1
		String[] customerName = {"Cathy","Ben","Jorge","Wanda","Freddie"};

		for(String name:customerName){
			System.out.println(name);
		} 
        // Ex2.2
        Scanner in = new Scanner(System.in); 
        double[] customerBalance = new double[5];

        for(int i=0;i<customerName.length;i++){

			System.out.println(customerName[i]);
			System.out.print("Enter customerBalance :");
			double cbal= Double.parseDouble(in.nextLine());
			customerBalance[i]=cbal;
		} 

		for(int i=0;i<customerName.length;i++){
			System.out.println("Customer "+customerName[i]+" balance is :"+customerBalance[i]);
		} 
	}
}
