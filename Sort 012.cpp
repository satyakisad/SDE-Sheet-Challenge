#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   //   Write your code here
    vector<int> vec(3,0);
    
    for(int i=0;i<n;i++)
    {
        vec[arr[i]]++;
    }
    int k=0;
    int i=0;
    while(i<n)
    {  
        while(vec[k]>0)
        {
            arr[i++]=k;
            vec[k]--;
            if(i>=n)
                break;
            
        }
        if(k==2)
            break;
        k++;
        
        
       
    }
}