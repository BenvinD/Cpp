#include <iostream>
#include <fstream>
#include <stdio.h>
#include <vector>
int main()
{
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
  int col,row;
  std::cin>>col>>row;
  std::vector<int> ind;
  int mat[col][row];
    for(int i=0;i<col;i++)
    for (int j=0;j<row;j++)
    {  
            std::cin>>mat[i][j];
            if(mat[i][j]==0)
            {
                ind.push_back(i);
                ind.push_back(j);
            }
    }
    for(int i=0;i<ind.size();i++)
    {
        if(i%2==0)
            for(int a =0;a<col;a++)
                mat[ind[i]][a] = 0;
        else
            for(int a =0;a<row;a++)
                mat[a][ind[i]] = 0;
    }
    for(int i=0;i<col;i++)
    {
    for (int j=0;j<row;j++)
    std::cout<<mat[i][j]<<" ";
    std::cout<<std::endl;
    }
}
return 0;
}
 