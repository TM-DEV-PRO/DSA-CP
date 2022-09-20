import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        // write your code here
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] arr = new int[n][n];

        for (int j = 0; j < n; j++) {
            String line = br.readLine();
            for (int k = 0; k < n; k++) {
                arr[j][k] = line.charAt(k) - '0';
            }
        }

        findCelebrity(arr);

    }

    public static void findCelebrity(int[][] arr) {
        // if a celebrity is there print it's index (not position), if there is not then
        // print "none"
        
        Stack<Integer> st = new Stack<>();
        
        for(int i=0;i<arr.length;i++){
            st.push(i);
        }
        
        while(st.size()>1){
            int p1 = st.pop();
            int p2 = st.pop();
            if(arr[p1][p2]==0)
                st.push(p1);
            else
                st.push(p2);
        }
        
        int p = st.pop();
        boolean isCeleb = true;
        for(int i=0;i<arr.length;i++){
            if(arr[p][i]==1){
                isCeleb=false;
                break;
            }
        }
        
        if(isCeleb){
            for(int i=1;i<arr.length;i++){
                if(arr[i][p]==0 && i!=p){
                    isCeleb=false;
                    break;
                }
            }
        }
        
        if(isCeleb)
            System.out.print(p);
        else
            System.out.print("none");
    }

}