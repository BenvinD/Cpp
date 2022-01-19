#include <iostream>
int main()
{
//freopen("input.txt","r", stdin);
//freopen("output.txt", "w", stdout);
int test;
std::cin>>test;
while(test--)
{
 int a,b,c;std::cin>>a>>b>>c;
 if(a>50)
    std::cout<<"A"<<std::endl;
 else if(b>50)
    std::cout<<"B"<<std::endl;
 else if(c>50)
    std::cout<<"C"<<std::endl;
 else
    std::cout<<"NOTA"<<std::endl;
}
return 0;
}