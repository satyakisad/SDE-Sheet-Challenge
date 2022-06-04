#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{
	
        bool iscol=false; //needed to store if first col is to be set zero
        
    //set the begining of zero containing row/column to zero.
    for(int i=0;i<matrix.size();i++)
    {
        if(matrix[i][0]==0)
        iscol=true;
        for(int j=1;j<matrix[0].size();j++) //neccesary to be starting from 1, bcuz makes first row zero for no reason
        {
            if(matrix[i][j]==0)
            {
                matrix[0][j]=0;
                matrix[i][0]=0;
                
                
            }
        }
    }
//leaving the beginning of rows/column, to be updated later
     for(int i=1;i<matrix.size();i++)
    {
        for(int j=1;j<matrix[0].size();j++)
        {
            if(matrix[0][j]==0 || matrix[i][0]==0)
            matrix[i][j]=0;
           
        }
    }
    
        if(matrix[0][0]==0) //setting first row to zero
        for(int i=0;i<matrix[0].size();i++)
        matrix[0][i]=0;
        
        if(iscol) //setting first col to zero
        for(int i=0;i<matrix.size();i++)
        matrix[i][0]=0;
        
}