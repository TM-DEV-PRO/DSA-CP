import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        
        printEncodings(str);
    }

    public static void printEncodings(String str) {
        if(str.length()==0)
            return;
        if(str.charAt(0)>='a' && str.charAt(0)<='z'){
            System.out.println(str);
            return;
        }
        
        char ch = str.charAt(0);
        str = str.substring(1);
        if(ch-'0'== 0)
            return;
        
       // System.out.print(ch + " ");
        printEncodings(str + (char)('a'+ ((ch-'0')-1)));
        
        if(str.length()==0||(str.charAt(0)>='a' && str.charAt(0)<='z'))
            return;
        char ch2 = str.charAt(0);
        int x = (ch-'0')*10 + (ch2-'0');
       // System.out.print(x + " ");
        str = str.substring(1);
        if(x>26)
            return;
        printEncodings(str+((char)('a'+(x-1))));   
        
    }

}