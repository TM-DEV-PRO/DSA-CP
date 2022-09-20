import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        int n;
        n = sc.nextInt();
        
        int arr[] = new int[n];
        
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }
        
        int x = sc.nextInt();
        System.out.print(lastIndex(arr,arr.length-1,x));
    }

    public static int lastIndex(int[] arr, int idx, int x){
        if(idx==-1)
            return -1;
        if(arr[idx]==x)
            return idx;
        
        return lastIndex(arr,idx-1,x);
      
    }

    public static int lastIndex2(int[] arr, int idx, int x){
        if(idx==arr.length)
            return -1;
        if(arr[idx]==x)
            return Math.max(idx,lastIndex(arr,idx+1,x));
        
        return lastIndex(arr,idx+1,x);
      
    }

}