import java.util.Arrays;
import java.util.Scanner;
public class Task339A {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            String str = sc.nextLine();
            str = str.replaceAll("[^1,2,3]", "");
            char[] a = str.toCharArray();
            Arrays.sort(a);
            for (int i = 0; i < a.length; ++i) {
                  System.out.print(a[i]);
                  if (i != a.length-1) {
                        System.out.print("+");
                  }
            }
            System.out.println();
      }
}
           