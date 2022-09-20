import java.util.Scanner;
 
 public class Main {
 
 	public static int search(int[] ar, int key) {
        int lo = 0;
        int hg = ar.length-1;
        
        while(lo<=hg){
            int mid = lo + (hg-lo)/2;
            
            if(ar[mid]==key)
                return mid;
            else if(ar[mid]<key)
                lo = mid + 1;
            else 
                hg = mid - 1;
        }
        
        return -1;
 	}
 
 	 public static void main(String[] args) {
 
 	 	 Scanner s = new Scanner(System.in);
 	 	 int n = s.nextInt();
 	 	 int[] ar = new int[n];
 	 	 for (int i = 0; i < ar.length; i++) {
 	 	 	 ar[i] = s.nextInt();
 	 	 }
 	 	 int key = s.nextInt();
 	 	 System.out.println(search(ar, key));
 	 }
 }