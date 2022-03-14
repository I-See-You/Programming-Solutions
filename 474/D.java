import java.util.Scanner;
import java.util.Arrays;

public class Test1 {
      
    public static void main(String[] args)
    {   
        Scanner cin = new Scanner (System.in);
        int t,k;
        final int mod = 1000000007;
        int[] dp = new int[100005];
        t = cin.nextInt();
        k = cin.nextInt();
        dp[0] = 1;
        for(int i=1;i<=100000;i++){
            dp[i] = (dp[i] + dp[i-1]) % mod;
            if(i >= k) dp[i] = (dp[i] + dp[i-k]) % mod;
        }
        dp[0] = 0;
        for(int i=1;i<=100000;i++) dp[i] = (dp[i] + dp[i-1]) % mod;
        while(t-- > 0){
            int x,y;
            x = cin.nextInt();
            y = cin.nextInt();
            int ans = dp[y] - dp[x-1];
            ans = ans % mod;
            if(ans < 0) ans += mod;
            System.out.println(ans);
        }
    }
    
}