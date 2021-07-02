import java.util.Scanner;
public class Task71A {
      public static void main(String[] args) {
            Scanner sc = new Scanner (System.in);
            int tc = sc.nextInt();
            sc.nextLine();
            for (int i = 1; i <= tc; ++i) {
                  String str = sc.nextLine();
                  if (str.length() > 10) {
                        int x = str.length() - 2;
                        String str1 = Integer.toString(x);
                        String result = str.substring(0,1) + str1+  str.substring(str.length()-1);
                        System.out.println(result);
                  } else { 
                        System.out.println(str);
                        continue;
                  }
            }
      }
}