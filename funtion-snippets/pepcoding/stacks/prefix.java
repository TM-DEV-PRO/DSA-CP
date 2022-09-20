import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    Scanner sc = new Scanner(System.in);
    
    String str = sc.nextLine();
    
    Stack<Integer> eval = new Stack<>();
    Stack<String> infix = new Stack<>();
    Stack<String> postfix = new Stack<>();
    
    for(int i=str.length()-1;i>=0;i--){
        char ch = str.charAt(i);
        
        if(ch>='0'&&ch<='9'){
            eval.push(ch-'0');
            infix.push(ch+"");
            postfix.push(ch+"");
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            String inv1 = infix.pop();
            String inv2 = infix.pop();
            
            infix.push('('+ inv1 + ch + inv2 + ')');
            
            String posv1 = postfix.pop();
            String posv2 = postfix.pop();
            
            postfix.push(posv1 + posv2 + ch);
            
            int v1 = eval.pop();
            int v2 = eval.pop();
            
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
    
    System.out.print(eval.peek() + "\n" + infix.peek() + "\n" + postfix.peek());
    
 }
}