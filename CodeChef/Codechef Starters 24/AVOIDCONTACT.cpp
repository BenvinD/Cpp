#include <iostream>

int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
  int x,y,ans;std::cin>>x>>y;
  if(x==y)
  ans = (x*2)-1;
  else
  ans = (y*2)+(x-y);
  std::cout<<ans<<std::endl;
}
return 0;
}
 