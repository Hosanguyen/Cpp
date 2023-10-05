#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int memory = 0;
        int tmp = 0;
        int idx = s.size();
        for(int i = s.size()-1; i>=0; i--)
        {
            tmp = s[i] - '0';
            tmp += memory;
            if(tmp>=10) memory = 1, tmp %= 10;
            else
            {
                if (tmp>=5) memory = 1, tmp = 0, idx--;
                else memory = 0;
            }
            s[i] = (tmp + '0');
        }
        for(int i=0; i<=idx; i++)cout<<s[i];
        for(int i = idx+1; i<s.size(); i++)cout<<0;
        cout<<endl;
    }
}
