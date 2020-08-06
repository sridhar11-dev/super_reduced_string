#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str = "aaaabbbbcccc";
    string o ="";
    char temp;
    stack<char>s;
    for(int i=0;i<str.length();i++)
    {
        if(s.empty())
        {
            s.push(str[i]);
        }
        else if(s.top()==str[i])
        {
            s.pop();
        }
        else
        {
            s.push(str[i]);
        }
    }
    
    if(s.empty())
    {
        cout<<"empty string";
    }
    else
    {
        while(!s.empty())
        {
            o = o + s.top();
            s.pop();
        }
        for(int i=0,j=o.size()-1;i<j;i++,j--)
        {
           temp = o[i];
           o[i]=o[j];
           o[j]=temp;
        }
        cout<<o;
    }
    return 0;
}
