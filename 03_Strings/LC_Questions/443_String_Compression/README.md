
<h2><a href="https://leetcode.com/problems/string-compression/">443. String Compression</a></h2>
Medium

Problem Description:  
Given an array of characters <code>chars</code>, compress it using the following algorithm:

- Begin with an empty string <code>s</code>. For each group of <b>consecutive repeating characters</b> in <code>chars</code>:  
  - If the group’s length is 1, append the character to <code>s</code>.  
  - Otherwise, append the character followed by the group’s length.

The compressed string should not be returned separately but instead be stored in the input character array <code>chars</code>.
Group lengths of 10 or more will be split into multiple characters (e.g., "12" becomes '1', '2').

Return the new length of the array after modifying it in-place.

You must write an algorithm that uses only <b>constant extra space</b>.

<br>

<b>Example 1:</b>

Input: <code>chars = ["a","a","b","b","c","c","c"]</code>  
Output: <code>6</code>  
The first 6 characters of the modified array should be: <code>["a","2","b","2","c","3"]</code>  
Explanation: The groups are "aa", "bb", and "ccc" → "a2b2c3"

<br>

<b>Example 2:</b>

Input: <code>chars = ["a"]</code>  
Output: <code>1</code>  
Modified array: <code>["a"]</code>  
Explanation: Single character group remains as is.

<br>

<b>Example 3:</b>

Input: <code>chars = ["a","b","b","b","b","b","b","b","b","b","b","b","b"]</code>  
Output: <code>4</code>  
Modified array: <code>["a","b","1","2"]</code>  
Explanation: Group "b" is repeated 12 times.

<br>

<b>Constraints:</b>

- <code>1 <= chars.length <= 2000</code>  
- <code>chars[i]</code> is a lowercase/uppercase English letter, digit, or symbol.

<br>

<b>Follow-up:</b>  
Can you solve it in-place with O(1) extra space?

<br>

<b>Solution:</b>  
The two-pointer approach:  
- Use a read pointer to iterate through the array and a write pointer to store the compressed result.  
- Count the length of each group, and if more than 1, convert the number into characters and write them back into the array.  
- Return the value of the write pointer as the new length.

Time Complexity: O(n)  
Space Complexity: O(1)
