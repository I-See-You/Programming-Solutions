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
        int d,total;
        int mn,mx;
        mx = mn = 0;
        int[] low = new int[33];
        int[] high = new int[33];
        
        d = nextInt();
        total = nextInt();
        
        for(int i=0;i<d;i++){
            int x,y;
            x = nextInt();
            y = nextInt();
            mn += x;
            mx += y;
            low[i] = x;
            high[i] = y;
        }
        if(total < mn || mx < total){
            System.out.println("NO");
            System.exit(0);
        }
        cout.append("YES\n");
        for(int i=0;i<d;i++){
            int now = Math.min(high[i], total - mn + low[i]);
            total -= now;
            mn -= low[i];
            cout.append(now + " ");
        }
        System.out.println(cout);
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