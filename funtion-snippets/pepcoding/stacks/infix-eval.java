import java.io.*;
import java.util.*;

public class Main{
  

public static void main(String[] args) throws Exception {
    Scanner sc =new Scanner(System.in);
    
    String str = sc.nextLine();
    System.out.print(infixEval(str));
 }
 
public static int infixEval(String exp){
    
    Stack<Integer> opnd = new Stack<>();
    Stack<Character> optr = new Stack<>();
    
    for(int i=0;i<exp.length();i++){
        char ch = exp.charAt(i);
        if(ch=='(')
            optr.push(ch);
        else if(ch>='0' && ch<='9')
            opnd.push(ch-'0');
        else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
            while(!optr.isEmpty() && optr.peek()!='(' && precedence(ch)<=precedence(optr.peek())){
                evaluate(optr,opnd);
            }
            optr.push(ch);
        }
        
        else if(ch==')'){
            while(optr.peek()!='('){
                evaluate(optr,opnd);
            }
            
            optr.pop();
        }
    }
    
    while(!optr.isEmpty()){
        evaluate(optr,opnd);
    }
    
    return opnd.peek();
}


public static void evaluate(Stack<Character> optr,Stack<Integer> opnd){
    char ch = optr.pop();
    int v2 = opnd.pop();
    int v1 = opnd.pop();
    
    if(ch=='+')
        opnd.push(v1+v2);
    else if(ch=='-')
        opnd.push(v1-v2);
    else if(ch=='*')
        opnd.push(v1*v2);
    else
        opnd.push(v1/v2);
}

public static int precedence(char ch){
    if(ch=='+' || ch=='-')
        return 1;
    return 2;
}
}