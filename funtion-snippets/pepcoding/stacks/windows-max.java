import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

    int n = Integer.parseInt(br.readLine());
    int[] a = new int[n];
    for(int i = 0; i < n; i++){
       a[i] = Integer.parseInt(br.readLine());
    }
    int k = Integer.parseInt(br.readLine());

    int[] res = new int[n];
    Stack<Integer> st = new Stack<>();
    for(int i=n-1;i>=0;i--){
        while(!st.isEmpty() && a[st.peek()]<=a[i])
            st.pop();
        if(st.isEmpty())
            res[i] = n;
        else
            res[i] = st.peek();
        st.push(i);
    }
    
    int j=0;
    for(int i=0;i<n-k+1;i++){
        if(j<i)
            j=i;
        while(res[j]<i+k)
            j=res[j];
        System.out.println(a[j]);
    }
 }
}