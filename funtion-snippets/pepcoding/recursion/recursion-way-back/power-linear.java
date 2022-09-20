import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int x,n;
        
        x=sc.nextInt();
        n=sc.nextInt();
        
        System.out.print(power(x,n));
    }

    public static int power(int x, int n){
        if(n==0 || x==1)
            return 1;
            
        return x * power(x,n-1);
  
    }

}