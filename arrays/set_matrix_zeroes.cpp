class Solution { 
public: 
    void setZeroes(vector<vector<int>>& matrix) { 
        int col0=1,row0=1; //will use these variables to store if col0 and row0 is all 0s  
        for (int i=0;i<matrix[0].size();i++) //check 1st row if any 0 is there will row0 as 0 
        { if(matrix[0][i]==0) 
            row0=0; 
        } 
        
        for (int i=0;i<matrix.size();i++) //check 2nd row if any 0 is there will set column0 as 0 
        { if(matrix[i][0]==0) 
            col0=0; 
        } 
        
        for(int i=1;i<matrix.size();i++) 
        { 
            for (int j=1;j<matrix[0].size();j++) //checking each elements except those present in 0th row and 0th column 
            { 
                if(matrix[i][j]==0) // if that element is 0 we will update that in 0th row and 0th column both 
                { matrix[i][0]=0; // updating 0th column 
                 matrix[0][j]=0; //updating 0th column 
                } 
            } 
        } 
        
        for(int i=1;i<matrix.size();i++) 
        { 
            for (int j=1;j<matrix[0].size();j++) //now checking for each element[i][j] id either [i][0] or [j][0] is 0 then we will set it to 0 
            { 
                if(matrix[i][0]==0 || matrix[0][j]==0) 
                    matrix[i][j]=0; 
            } 
        } //this till point submatrix is done except 0th column and 0th row 
        
        if(col0==0) //if col0 is 0 then will set whole 0th column as 0 
        { 
            for(int i=0;i<matrix.size();i++) 
                matrix[i][0]=0; 
        } 
        
        if(row0==0) //if rowo is 0 then will set whole 0th row as 0 
        { 
            for(int i=0;i<matrix[0].size();i++) 
                matrix[0][i]=0; 
        } 
    } 
};
