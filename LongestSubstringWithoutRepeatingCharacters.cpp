/*
Given a string s, find the length of the longest substring without duplicate characters.

 

Example 1:

Input: s = "abcabcbb"
Output: 3
Explanation: The answer is "abc", with the length of 3. Note that "bca" and "cab" are also correct answers.
Example 2:

Input: s = "bbbbb"
Output: 1
Explanation: The answer is "b", with the length of 1.
Example 3:

Input: s = "pwwkew"
Output: 3
Explanation: The answer is "wke", with the length of 3.
Notice that the answer must be a substring, "pwke" is a subsequence and not a substring.
 

Constraints:

0 <= s.length <= 5 * 104
s consists of English letters, digits, symbols and spaces.
*/

#include <iostream>
using namespace std;
#include <vector>
#include <string>

int main(){

    string s;
    cin>>s;
    vector<int> freq(256, -1);
    int maxLen = 0, start = -1;
    for(int i=0; i<s.size(); i++){
        if(freq[s[i]] > start){
            start = freq[s[i]];
        }
        freq[s[i]] = i;
        maxLen = max(maxLen, i - start);
    }
    cout<<maxLen<<endl;
    return 0;
}