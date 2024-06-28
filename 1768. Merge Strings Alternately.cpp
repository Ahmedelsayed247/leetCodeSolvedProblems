#include <iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;
string mergeAlternately(string word1, string word2)
{

    int cnt = (word1.length() < word2.length()) ? word1.length() : word2.length();

    string r;
    for (int i =0 ; i<cnt ; i++)
    {
        r+= word1[i];
        r+= word2[i] ;
    }
    if (word1.length() > word2.length()){
        for (int i =cnt ; i<word1.length() ; i++){
            r+= word1[i];

        }
    }
    else {
         for (int i =cnt ; i<word2.length() ; i++){
            r+= word2[i];

        }
    }
    return r ;
}
int main()
{
    string s1 = "abn",s2 = "cd";
    cout << mergeAlternately(s1,s2) ;
}
