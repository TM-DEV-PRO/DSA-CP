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
        System.out.print(maxOfArray(arr,0));
    }

    public static int maxOfArray(int[] arr, int idx){
        
        if(idx==arr.length)
            return -1;
        
        return Math.max(arr[idx],maxOfArray(arr,idx+1));
    }

}