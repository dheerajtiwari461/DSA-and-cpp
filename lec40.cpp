// https://leetcode.com/problems/roman-to-integer/

class Solution {
public:

    int num(char c){
        if(c == 'I') return 1;
        else if(c == 'V') return 5;
        else if(c == 'X') return 10;
        else if(c == 'L') return 50;
        else if(c == 'C') return 100;
        else if(c == 'D') return 500;
        else return 1000;
    }

    int romanToInt(string s) {
        int sum = 0, index = 0;
        while(index < s.size()-1){
            if(num(s[index]) < num(s[index+1]) )
            sum-=num(s[index]);
            else sum+=num(s[index]);
            index++;
        }
        sum+=num(s[index]);
        return sum;
    }
};

// https://www.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1?page=1&category=Strings&difficulty=Medium&sortBy=submissions
// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        
        vector<int>ans(1,1);
        while(n>1){
            int carry = 0, res, size = ans.size();
            for(int i=0; i<size; i++){
                res = ans[i]*n+carry;
                ans[i] = res%10;
                carry = res/10;
            }
            while(carry){
                ans.push_back(carry%10);
                carry /= 10;
            }
            n--;
            
        }
        reverse(ans.begin(), ans.end());
        return ans;
        
        
        
    }
};