import java.io.*;
import java.util.*;

public class Main{
  public static void display(int[] a){
    StringBuilder sb = new StringBuilder();

    for(int val: a){
      sb.append(val + " ");
    }
    System.out.println(sb);
  }
    public static void rvrse(int[] arr,int i,int j){
       while(i<j){
           int temp = arr[j];
           arr[j] = arr[i];
           arr[i] = temp;
           i++;
           j--;
       }
    } 
  public static void rotate(int[] a, int k){
            // int x = Math.abs(k);
            // x=x%a.length;
            k = k % a.length;
            if(k<0){
                k = k + a.length; // handling -ve k case
            }
            
            rvrse(a,0,a.length-k-1);
            rvrse(a,a.length-k,a.length-1);
            rvrse(a,0,a.length-1);
            
  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }
    int k = Integer.parseInt(br.readLine());

    rotate(a, k);
    display(a);
 }

}