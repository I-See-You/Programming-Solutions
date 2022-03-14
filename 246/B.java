import java.util.Scanner;
import java.util.Arrays;


public class Main {
      
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int n;
        n = cin.nextInt();
        int sum = 0;
        for(int i=0;i<n;i++){
            int x = cin.nextInt();
            sum += x;
        }
        if(sum % n == 0) System.out.println(n);
        else System.out.println(n - 1);
   }
    
}