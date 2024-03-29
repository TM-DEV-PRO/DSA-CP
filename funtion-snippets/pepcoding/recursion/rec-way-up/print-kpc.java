import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        
        printKPC(str , "");        
    }
    static String keypad[] = { ".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    public static void printKPC(String str, String asf) {
        if(str.length()==0){
            System.out.println(asf);
            return;
        }
        
        char ch = str.charAt(0);
        str = str.substring(1);
        String word = keypad[ch-'0'];
        
        for(int i=0;i<word.length();i++){
            printKPC(str,asf+word.charAt(i));
        }
            
    }

}