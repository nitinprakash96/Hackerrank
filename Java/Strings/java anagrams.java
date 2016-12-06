    static boolean isAnagram(String a, String b) {
        
        // Complete the function by writing your code here.
        char x[] = a.toLowerCase().toCharArray();
        char y[] = b.toLowerCase().toCharArray();
        Arrays.sort(x);
        Arrays.sort(y);

   return Arrays.equals(x,y);
}
