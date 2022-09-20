import java.util.*;

public class Main{

public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        
        int sp = (n-1)*2;
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++)
                System.out.print(j+"	");
            for(int j=1;j<sp;j++)
                System.out.print("	");
            
            if(i==n){
                for(int j=i-1;j>=1;j--)
                    System.out.print(j+"	");
            }
            
            else{
                for(int j=i;j>=1;j--)
                    System.out.print(j+"	");
            }
            sp-=2;
            System.out.println();
        }
        

 }
}