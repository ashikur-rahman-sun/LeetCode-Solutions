class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int temp=0;
        for(int i=0;i<accounts.size();i++){
            int cur=0;
            for(int j=0;j<accounts[i].size();j++){
                cur+= accounts[i][j];
            }
            temp= max(temp,cur);
          }
        return temp;
        } 
};