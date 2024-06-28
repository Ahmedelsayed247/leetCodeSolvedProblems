#include <bits/stdc++.h>

using namespace std ;
/*
int maxSubArrayInArray (vector<int> arr, int subLength)
{
    int arrSize = arr.size() ;
    int sum =0 ;

    for (int i=0 ; i< subLength ; i++)
    {
        sum +=arr[i] ;
    }
    int remv = 0;
    int mx = sum ;
    for (int add = subLength ; add  <arrSize ; add++)
    {
        sum +=arr[add] ;
        sum-= arr[remv] ;
        remv++;
        mx = max(sum, mx) ;
    }
    return mx ;


}
*/
bool isVowel(char c )
{
    return (c == 'A' || c == 'a' ||c == 'E' || c == 'e'||c == 'I' || c == 'i'||c == 'O' || c == 'o'||c == 'U' || c == 'u') ? 1 : 0 ;
}
int maxVowels(string s, int k)
{
    int arrSize = s.size() ;
    int sumvowel =0 ;
    for (int i=0 ; i< k ; i++)
    {
        if (isVowel(s[i])) sumvowel++ ;

    }
    int remv = 0;
    int mx = sumvowel ;
    for (int add = k ; add  <arrSize ; add++)
    {
        if (isVowel(s[add]))
        {
            sumvowel ++;
        }
        if (isVowel(s[remv]))
        {
            sumvowel--;
        }

        remv++;
        mx = max(sumvowel, mx) ;
    }
    return mx ;

}
int main ()
{
 string s = "leetcode";
    int k = 3;

    cout << "Maximum number of vowels in any substring of length " << k << " in \"" << s << "\" is: ";
    cout << maxVowels(s, k) << endl;

    return 0;
}
