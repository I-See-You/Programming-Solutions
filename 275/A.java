import java.util.Scanner;
import java.util.Arrays;
import java.util.HashMap;
import java.util.Iterator;

public class Test{
    
    public static void main(String[] args){
        
        Scanner cin = new Scanner(System.in);
        int[][] in = new int[10][10];
        final int[] fx = {+0,+0,+0,+1,-1};
        final int[] fy = {+0,+1,-1,+0,+0};
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                in[i][j] = 1;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                int x = cin.nextInt();
                if(x % 2 == 1){
                    for(int kk=0;kk<5;kk++){
                        int a = i + fx[kk];
                        int b = j + fy[kk];
                        if(a < 0 || b < 0 || a == 3 || b == 3) continue;
                        in[a][b] ^= 1;
                    }
                }
            }
        }
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++) System.out.print(in[i][j]);
            System.out.println();
        }
    }
}