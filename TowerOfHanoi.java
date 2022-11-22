import java.io.*;
import java.util.*;

public class TowerOfHanoi {
    
    static void TOH(int n,char src,char dst,char tmp){
        
        if(n==0)
            return;
        TOH(n-1,src,tmp,dst);
        System.out.println("Move "+n+" from "+src+" to "+dst);
        TOH(n-1,tmp,dst,src);
    }

    public static void main(String[] args) {
        
        
        Scanner sc = new Scanner(System.in);
        
        int t = sc.nextInt();
        int n,i;
        char src='A',tmp='B',dst='C';
        while(t>0)
        {
            n = sc.nextInt();
            i= (1<<n)-1;
            System.out.println(i);
            TOH(n,src,dst,tmp);
            t = t-1;
        }
    }
}