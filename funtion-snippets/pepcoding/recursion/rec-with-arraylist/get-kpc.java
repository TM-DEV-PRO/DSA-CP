import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
         Scanner sc = new Scanner(System.in);
        
        String str = sc.nextLine();
        System.out.print(getKPC(str));
    }
   
    static String keypad[] = { ".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};
    public static ArrayList<String> getKPC(String str) {
        if(str.length()==0){
            ArrayList<String> lis = new ArrayList<>();
            lis.add("");
            return lis;
        }
        
        String temp = str.substring(1);
        
        ArrayList<String> rres = getKPC(temp);
        
        String word = keypad[str.charAt(0)-'0'];
        
        ArrayList<String> list = new ArrayList<>();
        
        for(int i=0;i<word.length();i++){
            char c = word.charAt(i);
            for(int j=0;j<rres.size();j++){
                list.add(c+rres.get(j));
            }
        } 
        
        return list;
          
    }

}