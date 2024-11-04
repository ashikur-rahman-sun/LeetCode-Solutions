class Solution {
public:
    string compressedString(string word) {
        string cmp = "";
        for(int i=0;i<word.length();){
            int count =0;
            char ch = word[i];
            while(word[i]==ch && count<9){
                count++;
                i++;
            }
            cmp += to_string(count)+ch;
        }
        return cmp;
    }
};