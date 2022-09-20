import java.io.*;
import java.util.*;

public class Main {

	public static String toggleCase(String str){
		String res = "";
		
		for(int i=0;i<str.length();i++){
		    if(str.charAt(i)>='a' && str.charAt(i) <= 'z')
		        res =res + (char)('A' + (str.charAt(i)-'a'));
		    else{
		        res =res + (char)('a' + (str.charAt(i)-'A'));
		    }
		}

		return res;
	}
	public static void main(String[] args) {
		Scanner scn = new Scanner(System.in);
		String str = scn.next();
		System.out.println(toggleCase(str));
	}

}