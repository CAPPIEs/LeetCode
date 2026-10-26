class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
      string ans="";
int lens = strs.size()-1;
int lens_minWord = strs[lens].size() , Indexlens_minWord = 0;

for(int i=0;i<=lens;i++){
    if(strs[i].size()<lens_minWord){
        lens_minWord = strs[i].size();
        Indexlens_minWord=i;
    }

}

lens_minWord--;

for(int i= 0; i<=lens_minWord; i++){
    int check = 2;
    for(int j = 0 ;j<=lens; j++){
        if(strs[Indexlens_minWord][i] != strs[j][i]){

            check = 3;
            return ans;
        }

    }
    if(check == 2){
            ans.push_back(strs[Indexlens_minWord][i]);
    }
}

return ans;  
    }
};