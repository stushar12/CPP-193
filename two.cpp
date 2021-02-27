#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_cases;
    cin>>test_cases;

    while(test_cases--)
    {
        
            int n;
            cin>>n;
            
            string input;
            cin>>input;

            int opening=0,closing=0,fault=0,ans=0;

            for(int i=0;i<n;i++)
            {
                if(input[i]==']')
                {
                    closing++;
                    fault=closing-opening;
                }
                else
                {
                    opening++;
                    if(fault>0)
                    {
                        ans+=fault;
                        fault--;
                    }
                }
            }
            cout<<ans<<endl;
    }
}