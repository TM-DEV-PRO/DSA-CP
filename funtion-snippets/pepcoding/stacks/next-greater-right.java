import java.io.*;
import java.util.*;

public class Main{
  public static void display(int[] a){
    StringBuilder sb = new StringBuilder();

    for(int val: a){
      sb.append(val + "\n");
    }
    System.out.println(sb);
  }

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }

    int[] nge = solve(a);
    display(nge);
 }

 public static int[] solve(int[] arr){
   Stack<Integer> st = new Stack<>();
   for(int i=arr.length-1;i>=0;i--){
       while(!st.isEmpty() && st.peek()<=arr[i])
            st.pop();
        int x = arr[i];
        if(st.isEmpty())
            arr[i] = -1;
        else
            arr[i] = st.peek();
        st.push(x);
   }
   return arr;
 }

}