import java.util.Scanner;
import java.util.Arrays;


public class Main {
      
    public static void main(String[] args)
    {
        Scanner cin = new Scanner(System.in);
        int x = cin.nextInt();
        int y = cin.nextInt();

        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};

        int x0 = 0, y0 = 0, cnt = 0;
        int len = 1, magic = 0;
        while (x0 != x || y0 != y) {
                if (magic == len) {
                        cnt++;
                        magic = 0;
                        if (cnt % 2 == 0)
                                len++;
                }
                x0 += dx[cnt % 4];
                y0 += dy[cnt % 4];
                magic++;
        }
        System.out.println(cnt);
    }
    
}