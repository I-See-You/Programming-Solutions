import java.util.Scanner;
import java.util.Arrays;


public class Main {
      
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int n;
        n = cin.nextInt();
        if(n < 3){
            System.out.println(-1);
            System.exit(0);
        }
        for(int i=n;i>0;i--){
            System.out.print(i + " ");
        }
   }
    
}