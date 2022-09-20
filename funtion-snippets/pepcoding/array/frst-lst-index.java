import java.io.*;
import java.util.*;

public class Main{

public static void main(String[] args) throws Exception {
    // write your code here
    
    Scanner sc = new Scanner(System.in);
    
    int n = sc.nextInt();
    
    int[] arr = new int[n];
    
    for(int i=0;i<n;i++)
        arr[i] = sc.nextInt();
    int key = sc.nextInt();
    
    int lo=0,hg=n-1;
    int fI=-1,lI=-1;
    
    while(lo<=hg){
         int mid = lo + (hg-lo)/2;
            
        if(arr[mid]==key &&(mid==0 || arr[mid-1]!=key)){
            fI = mid;
            break;
        }
        else if(arr[mid]<key)
            lo = mid+1;
           
        
        else 
            hg = mid - 1;
    }
    
    lo = 0;
    hg = n-1;
    while(lo<=hg){
        int mid = lo + (hg-lo)/2;
            
        if(arr[mid]==key &&(mid==n-1 || arr[mid+1]!=key)){
            lI = mid;
            break;
        }
        else if(arr[mid]<=key)
            lo = mid+1;
           
        
        else 
            hg = mid - 1;
    }
    
   
        System.out.println(fI);
        System.out.println(lI);
    
    
 }

}