import java.io.*;
import java.util.*;

public class Main {
    
    public static int fact(int n){
        int res = 1;
        
        for(int i = 2 ; i<=n ;i++)
            res*=i;
    
        return res;
    }
    
	public static void solution(String str){
		
		int n = fact(str.length());
		
		for(int i=0;i<n;i++){
		    int num = i;
		    int t = str.length();
		    String per = "";
		    String s = str;
		    while(t!=0){
		       int r = num%t;
		       num=num/t;
		       per+=s.charAt(r);
		       s = s.substring(0,r)+s.substring(r+1);
		       t--;
		    }
		    
		    System.out.println(per);
		}
		
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		solution(str);
	}

}