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

    int[] psm = new int[n];
    int[] nsm = new int[n];
    
    Stack<Integer> st = new Stack<>();
    
    for(int i=0;i<n;i++){
        while(!st.isEmpty() && a[st.peek()]>=a[i])
            st.pop();
        if(st.isEmpty())
            psm[i] = -1;
        else
            psm[i] = st.peek();
        st.push(i);
    }
    while(!st.isEmpty())
        st.pop();
    for(int i=n-1;i>=0;i--){
        while(!st.isEmpty() && a[st.peek()]>=a[i])
            st.pop();
        if(st.isEmpty())
            nsm[i] = n;
        else
            nsm[i] = st.peek();
        st.push(i);
    }
    
    int ans = 0;
    
    for(int i=0;i<n;i++){
        ans = Math.max(ans,(nsm[i]-psm[i]-1)*a[i]);
    }
    
    System.out.print(ans);
    
 }
}