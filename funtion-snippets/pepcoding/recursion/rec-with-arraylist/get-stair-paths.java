import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
         Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
       
        
        System.out.print(getStairPaths(n));
    }

    public static ArrayList<String> getStairPaths(int n) {
        if(n<0)
            return new ArrayList<>();
        if(n==0){
            ArrayList<String> list = new ArrayList<>();
            list.add("");
            return list;
        }

        ArrayList<String> l1 = getStairPaths(n-1);
        ArrayList<String> l2 = getStairPaths(n-2);
        ArrayList<String> l3 =  getStairPaths(n-3);
        
        ArrayList<String> paths = new ArrayList<>();

        for(String str:l1)
            paths.add('1'+str);

        for(String str:l2)
            paths.add('2'+str);

        for(String str:l3)
            paths.add('3'+str);

        return paths;
        
    }

}