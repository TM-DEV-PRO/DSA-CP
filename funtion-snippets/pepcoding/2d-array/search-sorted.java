import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc =new Scanner(System.in);
        
        int n = sc.nextInt();
        
        int arr[][] = new int[n][n];
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
            }
        }
        
        int x = sc.nextInt();
        
        int i=0,j=n-1;
        
        int f = 0;
        
        while(i<n && j>=0){
            if(arr[i][j]==x){
                System.out.print(i+"\n"+j);
                f=1;
                break;
            }
            
            else if(arr[i][j]>x)
                j--;
            else
                i++;
        }
        
        if(f==0)
            System.out.print("Not Found");
    }

}