//{ Driver Code Starts
import java.io.*;
import java.lang.*;
import java.util.*;

class GFG {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);
        int t = Integer.parseInt(br.readLine().trim());
        while (t-- > 0) {
            String S = br.readLine().trim();
            Solution obj = new Solution();
            List<String> ans = obj.findPermutation(S);
            for (int i = 0; i < ans.size(); i++) {
                out.print(ans.get(i) + " ");
            }
            out.println();

            out.println("~");
        }
        out.close();
    }
}

// } Driver Code Ends

class Solution {
    public List<String> findPermutation(String s) {
        // Use a Set to eliminate duplicates
        Set<String> uniquePermutations = new HashSet<>();
        permute(s, "", uniquePermutations);

        // Convert the set to a list and sort it
        List<String> result = new ArrayList<>(uniquePermutations);
        Collections.sort(result); // Sort lexicographically
        return result;
    }

    private static void permute(String str, String ans, Set<String> set) {
        if (str.length() == 0) {
            set.add(ans); // Add only unique permutations
            return;
        }

        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            String r = str.substring(0, i) + str.substring(i + 1);
            permute(r, ans + ch, set);
        }
    }
}
