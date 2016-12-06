import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT. Your class should be named Solution. */
            Scanner sc = new Scanner(System.in);
            String str = sc.next();
            int k = sc.nextInt();
            SortedSet<String> sets = new TreeSet<String>();
            for(int i = 0;i <= str.length() - k;i++){
                sets.add(str.substring(i,i + k));
            }
            System.out.println(sets.first());
            System.out.println(sets.last());
    }
}
