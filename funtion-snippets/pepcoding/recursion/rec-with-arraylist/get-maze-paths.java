import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int m = sc.nextInt();
        
        System.out.print(getMazePaths(0,0,n-1,m-1));

    }

    // sr - source row
    // sc - source column
    // dr - destination row
    // dc - destination column
    public static ArrayList<String> getMazePaths(int sr, int sc, int dr, int dc)     { 
        if(sr>dr || sc>dc){
  
            return new ArrayList<>();
        }
        
        if(sr==dr && sc==dc){
            
            ArrayList<String> lis = new ArrayList<>();
            lis.add("");
            return lis;
        }
        
        ArrayList<String> h = getMazePaths(sr,sc+1,dr,dc);
        ArrayList<String> v = getMazePaths(sr+1,sc,dr,dc);
        
        ArrayList<String> paths = new ArrayList<>();
        
        for(String str : h)
            paths.add('h'+str);
        
        for(String str : v)
            paths.add('v'+str);
            
        return paths;
        
    }

}