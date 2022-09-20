import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    Scanner sc =new Scanner(System.in);
    int n = sc.nextInt();
    
    int[] arr = new int[n];
    
    for(int i=0;i<n;i++)
        arr[i] = sc.nextInt();
        

  
       
        for (int i = 0; i < (1<<n); i++)
        {
            String str = "";
  
            int t = i;
            for (int j = n-1; j >=0; --j)
            {
                if (t%2 != 0)
                   	str = arr[j] + "	" + str;
                    
                else
                    str = "-	" + str;
                t=t/2;
            }
  
            System.out.println(str);
        }
        
    
 }

}