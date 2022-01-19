#include <iostream>
#include <stdio.h>

int main()
{
freopen("input.txt","r", stdin);
freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
int D_DSA,D_TOC,D_DM,D_tot; int S_DSA,S_TOC,S_DM,S_tot; 
std::cin>>D_DSA>>D_TOC>>D_DM>>S_DSA>>S_TOC>>S_DM;
D_tot = D_DSA+D_DM+D_TOC;
S_tot = S_DSA+S_DM+S_TOC;
if(D_tot>S_tot)
{
std::cout<<"DRAGON"<<std::endl;
continue;
}
else if (D_tot<S_tot)
{
std::cout<<"SLOTH"<<std::endl;
continue;
}
if(D_tot==S_tot)
{
    if(D_DSA>S_DSA)
    {
        std::cout<<"DRAGON"<<std::endl;
        continue;
    }
    else if(D_DSA<S_DSA){
        std::cout<<"SLOTH"<<std::endl;
        continue;
    }
    if(D_DSA==S_DSA)
    {
        if(D_TOC>S_TOC)
    {
        std::cout<<"DRAGON"<<std::endl;
        continue;
    }
    else if(D_TOC<S_TOC){
        std::cout<<"SLOTH"<<std::endl;
        continue;
    }
    if(D_DSA == S_DSA && D_TOC == S_TOC)
    {
        std::cout<<"TIE"<<std::endl;
        continue;
    }
    }
}
}
return 0;
}
 