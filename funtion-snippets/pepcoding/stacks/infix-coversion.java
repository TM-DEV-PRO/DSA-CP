import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    Scanner sc =new Scanner(System.in);
    
    String str = sc.nextLine();
    System.out.print(infixConversion(str));
 }
 
public static String infixConversion(String exp){
    
    Stack<Character> optr = new Stack<>();
    Stack<String> postfix = new Stack<>();
    Stack<String> prefix = new Stack<>();
    
    for(int i=0;i<exp.length();i++){
        char ch = exp.charAt(i);
        if(ch=='(')
            optr.push(ch);
        else if(ch>='a' && ch<='z'){
            postfix.push(ch+"");
            prefix.push(ch+"");
        }
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            while(!optr.isEmpty() && optr.peek()!='(' && precedence(ch)<=precedence(optr.peek())){
                evaluate(optr,postfix,prefix);
            }
            optr.push(ch);
        }
        
        else if(ch==')'){
            while(optr.peek()!='('){
                evaluate(optr,postfix,prefix);
            }
            
            optr.pop();
        }
    }
    
    while(!optr.isEmpty()){
        evaluate(optr,postfix,prefix);
    }
    
    return (postfix.peek() + "\n" + prefix.peek());
}


public static void evaluate(Stack<Character> optr,Stack<String> postfix, Stack<String> prefix){
    char op = optr.pop();
    String posv2 = postfix.pop();
    String posv1 = postfix.pop();
    
    postfix.push(posv1 + posv2 + op);
    
    String prev2 = prefix.pop();
    String prev1 = prefix.pop();
    
    prefix.push(op + prev1 + prev2);
    
}

public static int precedence(char ch){
    if(ch=='+' || ch=='-')
        return 1;
    return 2;
}
}