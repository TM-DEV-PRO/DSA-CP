import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Stack<Character> st = new Stack<>();
        
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)==')'){
                if(st.peek()=='('){
                    System.out.print("true");
                    return;
                }
                while(!st.isEmpty() && st.pop() != '(');
            }
            
            else
                st.push(str.charAt(i));
        }
        
        System.out.print("false");
    }

}