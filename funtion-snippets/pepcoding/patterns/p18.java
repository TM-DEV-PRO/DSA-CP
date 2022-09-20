import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

     int n = scn.nextInt();
     
     for(int i=1;i<=n/2+1;i++){
        for(int j=1;j<=n;j++){
            if(i==j || i+j==n+1 || i==1)
                System.out.print("*	");
            else
                 System.out.print("	");
        }
        
        System.out.println();
     }
     int sp = n/2-1;
     int st = 3;
     for(int i=n/2+2;i<=n;i++){
        for(int j=1;j<=sp;j++)
            System.out.print("	");
        
        for(int j=1;j<=st;j++)
            System.out.print("*	");
    
        sp--;
        st+=2;
        System.out.println();
        
    }

 }
}