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
        Scanner cin = new Scanner(System.in);
        int n,m;
        n = nextInt();
        m = nextInt();
        int in[] = new int[m];
        for(int i=0;i<m;i++){
            int x = nextInt();
            if(x == 1 || x == n){
                System.out.println("NO");
                System.exit(0);
            }
            in[i] = x;
        }
        Arrays.sort(in);
        for(int i=2;i<m;i++){
            if(in[i] == in[i - 1] + 1 && in[i - 1] == in[i - 2] + 1){
                System.out.println("NO");
                System.exit(0);
            }
        }
        System.out.println("YES");
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