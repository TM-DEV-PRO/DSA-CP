import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        Stack<Character> st = new Stack<>();
        
        for(int i=0;i<str.length();i++){
            if(str.charAt(i)=='(' || str.charAt(i)=='{' || str.charAt(i)=='[')
                st.push(str.charAt(i));
                
            
            if(str.charAt(i)==')'){
                if(st.isEmpty() || st.pop()!='('){
                    System.out.print("false");
                    return;
                }    
            }
            else if(str.charAt(i)=='}'){
                if(st.isEmpty() || st.pop()!='{'){
                    System.out.print("false");
                    return;
                } 
            }
            else if(str.charAt(i)==']'){
                if(st.isEmpty() || st.pop()!='['){
                    System.out.print("false");
                    return;
                } 
            }
            
        }
        if(!st.isEmpty()){
            System.out.print("false");
            return;
        } 
        System.out.print("true");
    }

}