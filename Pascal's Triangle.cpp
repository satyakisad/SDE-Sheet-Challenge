#include <bits/stdc++.h> 
vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>> vec;
    vec.push_back({1});
    
    for(int i=1;i<n;i++)
    {
        vec.push_back({1});
        for(int j=1;j<i+1;j++)
        {
            long long int left=0;
            if((j-1)>=0)
            {
                left=vec[i-1][j-1];
            }
            
            long long int right=0;
            if(j<i)
            {
                right=vec[i-1][j];
            }
            vec[i].push_back(left+right);
            
        }
    }
    return vec;
}
