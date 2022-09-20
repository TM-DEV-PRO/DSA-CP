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
    int cel = arr[hg],flr = arr[lo];
    
    while(lo<=hg){
         int mid = lo + (hg-lo)/2;
            
        if(arr[mid]==key){
            cel = arr[mid];
            flr = arr[mid];
            break;
        }
        else if(arr[mid]<key){
            flr = arr[mid];
            lo = mid+1;
            
        }
        else if(arr[mid]>key){
            cel = arr[mid];
            hg = mid - 1;
        }
    }
    
    if(cel == flr)
        System.out.print(cel);
    else{
        System.out.println(cel);
        System.out.println(flr);
    }
    
 }

}