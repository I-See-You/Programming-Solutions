import java.util.Scanner;
import java.util.Arrays;


public class Main {
      
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int n;
        int[] in = new int[7];
        n = cin.nextInt();
        for(int i=0;i<7;i++) in[i] = cin.nextInt();
        int id = 0;
        int rem = n;
        while(rem > 0){
            rem -= in[id];
            id++;
            if(id == 7) id = 0;
        }
        id--;
        if(id < 0) id += 7;
        System.out.println(id + 1);
        
    }
    
}