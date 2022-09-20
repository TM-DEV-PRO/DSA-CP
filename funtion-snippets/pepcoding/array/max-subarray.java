import java.util.*;
 
 public class Main {
 
 	 // This is a functional problem. You have to complete this function.
 	 // It takes as input an integer array. It should return the required sum.
 	 public static int maxSum(int[] arr) {
 	 	 int max_sum = arr[0];
 	 	 int curr_sum = arr[0];
 	 	 
 	 	 for(int i=1;i<arr.length;i++){
 	 	     curr_sum = Math.max(curr_sum + arr[i],arr[i]);
 	 	     max_sum = Math.max(max_sum,curr_sum);
 	 	 }
 	 	 
 	 	 return max_sum;
     }
 
 	 public static void main(String[] args) {
 	 	 Scanner sc = new Scanner(System.in);
 	 	 int N = sc.nextInt();
 	 	 int[] arr = new int[N];
 	 	 for (int i = 0; i < arr.length; i++) {
 	 	 	 arr[i] = sc.nextInt();
 	 	 }
 
 	 	 System.out.println(maxSum(arr));
 	 	 
 	 }
 
 }