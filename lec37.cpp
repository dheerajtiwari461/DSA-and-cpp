// https://leetcode.com/problems/defanging-an-ip-address/submissions/1898370599/

class Solution {
public:
    string defangIPaddr(string address) {
        string ans;
        int index = 0;

        while(index<address.size()){
            if(address[index] == '.')
            ans += "[.]";
            else 
            ans += address[index];
            index++;
        }
        return ans;
    }
};

// https://www.geeksforgeeks.org/problems/check-if-string-is-rotated-by-two-places-1587115620/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
    class Solution {
        
      public:
        
        void rotateAntiClockWise(string &s){
            char c = s[0];
            int index = 1;
            while(index < s.size()){
                s[index - 1]= s[index];
                index++;
            };
            s[s.size()-1] = c;
        }
        
        void rotateClockWise(string &s){
            char c = s[s.size()-1];
            int index = s.size()-2;
            while(index >=0){
                s[index + 1]= s[index];
        index--;
            };
             s[0] = c;
        }
        
      
      
        bool isRotated(string& s1, string& s2) {
            // code here
            if(s1.size() !=s2.size()) return 0;
            
            string clockWise, antiClockWise;
            clockWise = s1;
            
            rotateClockWise(clockWise);
            rotateClockWise(clockWise);
            
            if(clockWise == s2) return 1;
            
            antiClockWise = s1;
            rotateAntiClockWise(antiClockWise);
            rotateAntiClockWise(antiClockWise);
            
            if(antiClockWise == s2) return 1;
            
            return 0;
            
            
        }
    };

// https://leetcode.com/problems/check-if-the-sentence-is-pangram/description/

class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector<bool>alpha(26, 0);

        for (int i = 0; i < sentence.size(); i++) {
            alpha[sentence[i] - 'a'] = 1;
        };

        for (int i = 0; i < 26; i++) {
            if (alpha[i] == 0)
                return 0;
        };

        return 1;
    }
};


// https://www.geeksforgeeks.org/problems/sort-a-string2943/1?utm_medium=article_practice_tab&utm_campaign=article_practice_tab&utm_source=geeksforgeeks
string sort(string s) {
    // complete the function here
    vector<int>alpha(26,0);
    for(int i = 0; i<s.size(); i++){
        alpha[s[i]-'a']++;
    }
    
    string ans;
    for(int i = 0; i<26; i++){
        char c = 'a' + i;
        while(alpha[i]){
            ans+=c;
            alpha[i]--;
        }
        
    }
    return ans;
}

