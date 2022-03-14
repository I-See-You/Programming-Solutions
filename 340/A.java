import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;

public class Test{
    
    public static void main(String[] args){
        
        Scanner cin = new Scanner(System.in);
        int a,b,x,y;
        x = cin.nextInt();
        y = cin.nextInt();
        a = cin.nextInt();
        b = cin.nextInt();
        long zz = x * y;
        while(y > 0){
            x = x % y;
            int tp = y;
            y = x;
            x = tp;
        }
        long lcm = zz / x;
        System.out.println(b / lcm - (a - 1) / lcm);
    }
}