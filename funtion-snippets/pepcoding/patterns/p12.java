import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int f1 =-1,f2=1;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                int t = f1+f2;
                System.out.print(t);
                System.out.print("	");
                f1=f2;
                f2=t;
            }
            System.out.println();
        }

    }
}