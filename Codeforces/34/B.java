import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;

public class Test{
    
    public static void main(String[] args){
        
        Scanner cin = new Scanner(System.in);
        int n,m;
        int[] in = new int[105];
        int k = 0;
        n = cin.nextInt();
        m = cin.nextInt();
        long sum = 0;
        for(int i=0;i<n;i++){
            int x;
            x = cin.nextInt();
            if(x < 0) in[k++] = x;
        }
        Arrays.sort(in,0,k);
        for(int i=0;i<k && i<m;i++) sum -= in[i];
        System.out.println(sum);
    }
}