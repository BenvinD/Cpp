#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>
#include <vector>
#include <algorithm>

int main()
{
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
int n,val;
std::cin>>n;
int arr[n];
for(int i=0;i<n;i++)
std::cin>>arr[i];
std::cin>>val;
for(int i=0;i<n;i++)
for (int j=0;j<n;j++)
if(i!=j && arr[i]+arr[j]==val)
std::cout<<arr[i]<<" "<<arr[j]<<std::endl;
return 0;
}

  