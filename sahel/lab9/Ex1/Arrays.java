import java.util.Scanner;
// Ex 1.3
public class Arrays{
    
    public static void main(String[] args)
    {
       double[] x = {8, 4, 5, 21, 7, 9, 18, 2, 100};
       System.out.println("Before rotation: ==============================");
       for (int i = 0; i < x.length; i++)
       {
         System.out.println("x[" + i + "]: " + x[i]);
       }
       x = rotate(x, 3);
       System.out.println("After rotation: ==============================");
       for (int i = 0; i < x.length; i++)
       {
       System.out.println("x[" + i + "]: " + x[i]);
       }
    }

    public static double[] rotate(double[] a,int n){
      for (int i = 0; i < n; i++) {
        for (int j = a.length - 1; j > 0; j--) {
            double temp = a[j];
            a[j] = a[j - 1];
            a[j - 1] = temp;
        }
      }
      return a;
    }

}