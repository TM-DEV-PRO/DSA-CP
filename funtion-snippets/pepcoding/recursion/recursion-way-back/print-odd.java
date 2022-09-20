import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
         Scanner sc = new Scanner(System.in);
        
        int n;
        
        n=sc.nextInt();
        
        podd(n);
    }

    public static void podd(int n){
        if(n<=0)
            return;
       
        
        if(n%2==0)
            podd(n-1);
        
        else{
            podd(n-2);
            System.out.println(n);
        }
           
    }

}