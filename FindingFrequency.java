import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class FindingFrequency {

    public static void main(String[] args) throws IOException  {
        InputStreamReader r=new InputStreamReader(System.in);    
        BufferedReader br=new BufferedReader(r);   
        
        HashMap <Integer,Integer> map=new HashMap<Integer,Integer>();
        int n = Integer.parseInt(br.readLine());
        
       String[] integersInString = br.readLine().split(" ");
        int ar[] = new int[n];
        for (int i = 0; i < n; i++) {
           ar[i] = Integer.parseInt(integersInString[i]);
        }
       
        
        int t = Integer.parseInt(br.readLine());
        for(int i=0;i<n;i++){
            if(map.containsKey(ar[i]))
                map.put(ar[i],map.get(ar[i])+1);
            else
                map.put(ar[i],1);
        }
        for(int j=0;j<t;j++){
            int q = Integer.parseInt(br.readLine());
            if(map.get(q)!=null)
                System.out.println(map.get(q));
            else
                System.out.println(0);
        }
       
    }
}