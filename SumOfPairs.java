import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class SumOfPairs {
    public static String result(int ar[],int k,int n){
        HashMap<Integer,Integer> mp=new HashMap<Integer,Integer>();
        for(int i=0;i<n;i++){
                if(mp.containsKey(ar[i]))
                    mp.put(ar[i],mp.get(ar[i])+1);
                else
                    mp.put(ar[i],1);
        }
        for(int j=0;j<n;j++){
            int b=k-ar[j];
            if(ar[j]==b && mp.get(ar[j])>1){
                return "True";
            }
            if(mp.containsKey(b) && ar[j]!=b)
            {
                return "True";
            }
        }
        return "False";
    }

    public static void main(String[] args) {
        Scanner sc =new Scanner(System.in);
        HashMap<Integer,Integer> mp=new HashMap<Integer,Integer>();
        int t=sc.nextInt();
        int j,flag=0;
        while(t-->0){
            int n=sc.nextInt();
            int k=sc.nextInt();
            int ar[]=new int[n];
            for(int i=0;i<n;i++){
                ar[i]=sc.nextInt();  
            }
            System.out.println(result(ar,k,n));
        }
       
    }
}