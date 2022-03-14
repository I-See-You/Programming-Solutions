import java.util.Scanner;
import java.util.Arrays;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.StreamTokenizer;

public class Test{

    private static StreamTokenizer inputReader = 
			new StreamTokenizer(
					new BufferedReader(
							new InputStreamReader(System.in)));
    public static void main(String[] args)throws Exception{
        StringBuilder cout = new StringBuilder();
        int in[][] = new int[4][4];
        int xx[] = new int[4];
        for(int i=0;i<3;i++) for(int j=0;j<3;j++) in[i][j] = nextInt();
        for(int i=0;i<3;i++) for(int j=0;j<3;j++) xx[i] += in[i][j];
        int mn = 1000000000;
        for(int i=0;i<3;i++) mn = Math.min(mn, xx[i]);
        for(int i=0;i<3;i++) in[i][i] = xx[i] - mn + 1;
        int tp = in[0][0];
        in[0][0] = in[2][2];
        in[2][2] = tp;
        tp = 0;
        for(int i=1;i<=100000;i++){
            if(in[0][0] + xx[0] + i == in[0][0] + in[1][1] + in[2][2] + i * 3){
                tp = i;
                break;
            }
        }
        for(int i=0;i<3;i++){
            in[i][i] += tp;
            for(int j=0;j<3;j++){
                if(j > 0) System.out.print(' ');
                System.out.print(in[i][j]);
            }
            System.out.println();
        }
    }
    public static int nextInt(){
		int a = -1;
		try{
	      inputReader.nextToken();
	      a =  (int)inputReader.nval;
		}catch(Exception e){
		}
		return a;
	}
}