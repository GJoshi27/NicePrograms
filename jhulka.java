import java.io.BufferedInputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigInteger;
import java.io.IOException;

/* check the problem http://www.spoj.com/problems/JULKA/ */

class Main
{
 public static void main(String[] args) throws IOException {
        // TODO code application logic here
        int i=0;
        BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
                String str=new String();
                BigInteger two=new BigInteger("2");

        while(i<10)
        {
        //String str=new String();
        str=br.readLine();
        BigInteger big=new BigInteger(str);
        str=br.readLine();
        BigInteger app=new BigInteger(str);
        // System.out.println(app+" "+big);
        BigInteger x=big.subtract(app);
        
        x=x.divide(two);
          System.out.println(x.add(app));
        System.out.println(x);
 //         x=x+app;
            i++;
  }

}
}



