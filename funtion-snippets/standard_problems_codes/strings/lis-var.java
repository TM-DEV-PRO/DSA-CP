/*package whatever //do not write package name here */

import java.util.*;
class GFG {
    public static int maxLen(int arr[], int n){
		
		int i, j, res = 0;

		int temp[] = new int[n];
		
		
		for (i = 0; i < n; i++)
		        temp[i]=1;
		 
			
        int check[] = new int[n];
        
         HashSet<Integer> set=new HashSet<Integer>();
         
         for(int k=0;k<n;k++){
             set.add(arr[k]);
             if(set.size()>=5)
                check[k]=1;
             else
                check[k]=0;
             
         }
	
		for (i = 1; i < n; i++)
			for (j = 0; j < i; j++)
				if (arr[i] >= arr[j] && temp[i] < temp[j] + 1)
					temp[i] = temp[j] + 1;

		
		for (i = 0; i < n; i++){
			if (res < temp[i] && check[i]==1)
				res = temp[i];
		}

		return res;
	}
	
	public static int solve(String str){
	    int arr[] = new int[str.length()];
	    
	    for(int i=0;i<str.length();i++){
	        arr[i] = str.charAt(i) - 'a';
	    }
	    
	    return maxLen(arr,str.length());
	}
	
		public static void main (String[] args) {
		Scanner sc =new Scanner(System.in);
		
		String str = sc.nextLine();
		
		System.out.print(solve(str));
	}
    	
}
