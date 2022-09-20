import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        String str;
        str = sc.nextLine();
        
        System.out.print(gss(str));
    }

    public static ArrayList<String> gss(String str) {
        if(str.length()==0){
            ArrayList<String> l = new ArrayList<>();
            l.add("");
            return l;
        }
        
        char c = str.charAt(0);
        str = str.substring(1);
        ArrayList<String> temp = gss(str);
        
        int n = temp.size();
        
        for(int i=0;i<n;i++){
            String st = c + temp.get(i);
            
            temp.add(st);
        }
        
        return temp;
    }

}