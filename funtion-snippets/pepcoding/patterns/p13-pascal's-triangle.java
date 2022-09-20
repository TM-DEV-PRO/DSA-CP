import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner scn = new Scanner(System.in);
        int n=scn.nextInt();
        for(int line = 1; line <= n; line++)
    {
         
        int C=1;
        for(int i = 1; i <= line; i++)
        {
            System.out.print(C+"	");
            C = C * (line - i) / i;
        }
        System.out.println();
    }

    }
}