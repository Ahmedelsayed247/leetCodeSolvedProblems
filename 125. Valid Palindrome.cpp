#include <iostream>
#include <string>

using namespace std;
#define ll long long
/*
bool twoPointer(ll sum,int n[],int sizze)
{
    int l = 0, r = sizze-1 ;
    while(l <r)
    {
        if(n[l] + n[r] == sum) return true;
        else if (n[l]+n[r] > sum) r--;
        else l++ ;
    }
    return false ;
}

*/
bool isPalindrome(string s)
{
    string newstr = "";
    for (char c : s)
    {
        if(isdigit(c)){
          newstr += c;

        }
        else if (isalpha(c))
        {
            c = tolower(c);
            newstr += c;
        }
    }
    int l = 0,r = newstr.size()-1 ;
    while(l<r)
    {
        if(newstr[l] != newstr[r]) return false;
        l++;
        r--;
    }
    return true ;

}
int main()
{
    cout << isPalindrome("0P");
}
