import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    
    String str = sc.nextLine();
    
    Stack<Character> eval = new Stack<>();
    Stack<String> infix = new Stack<>();
    Stack<String> prefix = new Stack<>();
    
    for(int i=0;i<str.length();i++){
        char ch = str.charAt(i);
        
        if(ch>='0'&&ch<='9'){
            eval.push(ch-'0');
            infix.push(ch+"");
            prefix.push(ch+"");
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            String inv2 = infix.pop();
            String inv1 = infix.pop();
            
            infix.push('('+ inv1 + ch + inv2 + ')');
            
            String prev2 = prefix.pop();
            String prev1 = prefix.pop();
            
            prefix.push(ch + prev1 + prev2);
            
            int v2 = eval.pop();
            int v1 = eval.pop();
            
            if(ch=='+')
                eval.push(v1+v2);
            else if(ch=='-')
                eval.push(v1-v2);
            else if(ch=='*')
                eval.push(v1*v2);
            else
                eval.push(v1/v2);
        }
    }
    
    System.out.print(eval.peek() + "\n" + infix.peek() + "\n" + prefix.peek());
    
 }
}