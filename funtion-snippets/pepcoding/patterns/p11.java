import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int x =1;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                System.out.print(x);
                System.out.print("	");
                x++;
            }
            System.out.println();
        }

    }
}