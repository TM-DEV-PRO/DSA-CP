import java.io.*;
import java.util.*;

public class Main {
    public static boolean isPalin(String str){
        for(int i=0,j=str.length()-1;i<j;i++,j--){
            if(str.charAt(i)!=str.charAt(j))
                return false;
        }
        
        return true;
    }
	public static void solution(String str){
		
	    for(int i=0;i<str.length();i++){
	        for(int j=i+1;j<=str.length();j++){
	            String subStr = str.substring(i,j);
	            if(isPalin(subStr))
	                System.out.println(subStr);
	        }
	    }	
	}

	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		solution(str);
	}

}