public class Peevish
{
 public static void main(String[] args)
 {
	 boolean[] door;
	 final int NODOORS = 101; // We will not use door[0]
	 final boolean OPEN = true;
	 final boolean CLOSED = false;
	 // Initialize the doors
	 door = new boolean[NODOORS];
	 for (int i = 0; i < NODOORS; i++)
	 {
	 door[i] = CLOSED;
	 }
	 // Print the state of each door (only doors 1-100)
	 for (int i = 1; i < NODOORS; i++)
	 {
	 if (door[i] == true)
	 {
	 System.out.println("Door " + i + " is open.");
	 }
	 else
	 {
	 System.out.println("Door " + i + " is closed.");
	 }
	 }
	 // Your code here
	 for (int i = 1; i <= 100; i++) {
            for (int j = i; j <= 100; j++) {
                if(j % i == 0) door[j] = !door[j];
            }
      }

     System.out.println("Doors state after 100th pass");
     for (int i = 0; i < NODOORS; i++)
	 {
		 if (door[i] == true)
		 {
		 System.out.println("Door " + i + " is open.");
		 }
		 else
		 {
		 System.out.println("Door " + i + " is closed.");
		 }
	 }


 }
}