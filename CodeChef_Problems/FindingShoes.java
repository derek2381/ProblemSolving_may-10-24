// proble link
// https://www.codechef.com/problems/FINDSHOES


import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner sc = new Scanner(System.in);

		int t = sc.nextInt();

		while(t-- > 0){
		    int n,m;
		    n = sc.nextInt();
		    m = sc.nextInt();

		    int total  = 0;
		    if(m >= n){
		        total += n;
		    }else{
		        total = n*2 - m;
		    }

		    System.out.println(total);
		}

	}
}
