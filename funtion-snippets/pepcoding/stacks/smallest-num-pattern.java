import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    
    String str = sc.nextLine();
    
    Stack<Integer> st = new Stack<>();
    int count=1;
    st.push(count);
    for(int i=0;i<str.length();i++){
        char ch = str.charAt(i);
        if(ch=='i') {
            while(!st.isEmpty()){
                System.out.print(st.pop());
            }
        }
        st.push(count+1);
            count++;
    }
    while(!st.isEmpty()){
        System.out.print(st.pop());
    }

    // code
 }
}