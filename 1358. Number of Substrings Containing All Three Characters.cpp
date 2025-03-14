class Solution {
public:
    int numberOfSubstrings(string s) {
        int num = 0, a = -1, b = -1, c = -1;
        for(int i = 0; i<s.length() ; i++){
            if(s[i] == 'a') a = i;
            if(s[i] == 'b') b = i;
            if(s[i] == 'c') c = i;
            if(a != -1 && b != -1 && c != -1)
            num += min(a,min(b,c)) + 1;   
        }
        return num;
    }
};