import java.util.*;
public class Permutations {
public static void main(String [] args){
    Scanner s = new Scanner(System.in);
    int n;
    n = s.nextInt();
    s.close();
    String ans = "";
    if(n == 1){
        System.out.println("1");;
    }else if(n == 2 || n == 3){
        System.out.println("NO SOLUTION");
    }else{
        for(int i = 1;i<=n;i+=2){
            ans += ""+ i +" ";
        }

        for(int i = 2;i<=n;i+=2){
            ans += ""+ i +" ";
        }
        System.out.println(ans);
    }
}
}