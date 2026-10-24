class Solution {
public:
    bool isPalindrome(int x) {
        string givestr = to_string(x);
        int lens = givestr.size()-1;

        vector<int> og;
        vector<int> reverse;

        for(int i=0;i<=lens;i++){
            og.push_back(givestr[i]);
        }

        for(int i=lens;i>=0;i--){
            reverse.push_back(givestr[i]);
        }

        if(og == reverse){
            return true;
        }
        else
            return false;

        
    }
};