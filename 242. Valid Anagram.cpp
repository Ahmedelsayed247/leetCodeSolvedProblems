#include <iostream>
#include <vector>
#include<map>
#include<cstring>
#include<string>
using namespace std;
bool isAnagram(string s, string t)
{
    map<char,int> m1 ;
    map<char,int> m2 ;
    int flag= true;

    if (s.size() != t.size())
    {
        return false ;
    }

   for (char c : s) {
        m1[c]++;
    }
    for (char c : t) {
        m2[c]++;
    }
     return m1 == m2;


}
int main()
{
cout << isAnagram("rat" , "tar");
}
