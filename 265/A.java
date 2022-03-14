import java.util.Scanner;
import java.util.Arrays;


public class Main {
      
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int n;
        char[] a = new char[55];
        char[] b = new char[55];
        a = cin.next().toCharArray();
        b = cin.next().toCharArray();
        int id = 0;
        int siz = b.length;
        for(int i=0;i<siz;i++){
            if(a[id] == b[i]) id++;
        }
        System.out.println(id + 1);
        
    }
    
}