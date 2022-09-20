import java.io.*;
import java.util.*;

public class Main {

	public static String compression1(String str){
	    if(str.length()==0)
	        return "";
		String res = "" + str.charAt(0);
		
		for(int i=1;i<str.length();i++){
		    if(str.charAt(i)!=str.charAt(i-1)){
		        res = res + str.charAt(i);
		    }
		}
		return res;
	}
	
	

	public static String compression2(String str){
		if(str.length()==0)
	        return "";
		String res = "" + str.charAt(0);
		int count=1;
		for(int i=1;i<str.length();i++){
		    if(str.charAt(i)!=str.charAt(i-1)){
		        if(count>1)
		            res = res + count;
		        res = res + str.charAt(i);
		        count=1;
		    }
		    
		    else
		        count++;
		}
		
		 if(count>1)
		    res = res + count;
		 
		return res;

		
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		System.out.println(compression1(str));
		System.out.println(compression2(str));
	}

}