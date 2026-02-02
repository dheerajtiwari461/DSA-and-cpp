// https://leetcode.com/problems/longest-palindrome/
class Solution {
public:
    int longestPalindrome(string s) {
        vector<int>lower(26,0);
        vector<int>upper(26,0);

        // frequence updated
        for(int i = 0; i<s.size(); i++){
            if(s[i]>='a') lower[s[i]-'a']++;
            else upper[s[i]-'A']++;
        }

        int count = 0;
        int odd = 0;

        for(int i=0; i<26; i++){
            // lower
            if(lower[i]%2 == 0 ) count+=lower[i];
            else {
                count+=lower[i]-1;
                odd = 1;
            }
            // upper
            if(upper[i]%2==0) count += upper[i];
            else {
                count+=upper[i]-1;
                odd = 1;
            }
        }
        return count + odd;
    }
};

// https://leetcode.com/problems/sorting-the-sentence/submissions/1905442044/
class Solution {
public:
    string sortSentence(string s) {
        vector<string>ans(10);
        string temp="";
        int count = 0, index = 0, pos;
        while(index<s.size()){
            if(s[index]==' '){
             pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;
            }else temp +=s[index];

            index+=1;

        }

         pos = temp[temp.size()-1]-'0';
                temp.pop_back();
                ans[pos]=temp;
                temp.clear();
                count++;

                for(int i = 1; i<=count; i++){
                    temp+=ans[i];
                    temp+=' ';
                }
                    temp.pop_back();
        return temp;
    }
};