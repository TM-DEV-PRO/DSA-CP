import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        long n = sc.nextLong();
        int d = (int)Math.floor(Math.log10((double)n))+1;
        
        while(d>=1){
            int x = (int)Math.pow(10.0,(double)(d-1));
            System.out.println(n/x);
            d--;
            n = n%x;
        }
     }
    }