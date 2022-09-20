import java.util.*;

public class Main {

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        
        int n = scn.nextInt();
        
        for(int i=1;i<=n;i+=2){
            for(int j=1;j<=(n-i)/2;j++){
                System.out.print("	");
            }
            for(int k=1;k<=i;k++){
                System.out.print("*	");
            }
            
            System.out.println();
        }
        
        for(int i=n-2;i>=1;i-=2){
            for(int j=1;j<=(n-i)/2;j++){
                System.out.print("	");
            }
            for(int k=1;k<=i;k++){
                System.out.print("*	");
            }
            
            System.out.println();
        }

       

    }
}