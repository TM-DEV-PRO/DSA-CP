import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        
        printPermutations(str,"");
    }

    public static void printPermutations(String str, String asf) {
        if(str.length()==0){
            System.out.println(asf);
            return;
        }
        
        for(int i=0;i<str.length();i++){
            char ch = str.charAt(i);
            String s = str.substring(0,i);
            s+=str.substring(i+1,str.length());
            printPermutations(s,asf+ch);
        }
    }

}