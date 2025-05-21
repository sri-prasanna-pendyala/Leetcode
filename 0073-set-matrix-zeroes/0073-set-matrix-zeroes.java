import java.util.*;
class Solution {
    public void setZeroes(int[][] matrix) {
        int flag=0;
        Hashtable<Integer,Integer> ht=new Hashtable<>();
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix[i].length;j++)
            {
                if(matrix[i][j]==0)
                {
                    ht.put(j,0);
                    flag=1;
                }
            }
            if(flag==1)Arrays.fill(matrix[i],0);
            flag=0;
        }
        for(int i=0;i<matrix.length;i++)
        {
            for(int j=0;j<matrix[i].length;j++)
            {
                if(ht.containsKey(j))
                    matrix[i][j]=0;
            }
        }
    }
}