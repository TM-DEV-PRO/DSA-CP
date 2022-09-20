import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    int rw = -1;
    
    Scanner sc =new Scanner(System.in);
     int n = sc.nextInt();
     int [] arr =new int[n];
     
     for(int i=0;i<n;i++){
        arr[i] = sc.nextInt();
        if(arr[i]>rw)
            rw=arr[i];
     }
     int mx = rw;
     for(int i=rw;i>=1;i--){
        for(int j=0;j<n;j++){
            if(arr[j]>=i)
                System.out.print("*	");
            else
                System.out.print("	");
        }
        
        System.out.println();
     }
 }

}