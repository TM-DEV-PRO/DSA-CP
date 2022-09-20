import java.util.*;
public class Main{
    public static void main(String[] args)
    {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        for(int i =n/2+1;i<=n;i++)     
        {
            for(int j =1;j<=n;j++)  
            {
                if(i == j || i + j == n + 1)        
                    {
                        System.out.print("*	");
                    }
                else                        
                    System.out.print("	");    
            }
            System.out.println();   
        }
        
        for(int i =2;i<=n/2+1;i++)     
        {
            for(int j =1;j<=n;j++)  
            {
                if(i == j || i + j == n + 1)        
                    {
                        System.out.print("*	");
                    }
                else                        
                    System.out.print("	");    
            }
            System.out.println();   
        }
    }
}