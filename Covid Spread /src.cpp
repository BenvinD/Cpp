#include <iostream>
#include <fstream>
#include <stdio.h>
#include <math.h>

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int test;
    std::cin>>test;
    while(test--)
    {
       long long int pop,day,cas = 0;
       std::cin>>pop>>day;
        if(day>20)
        cas = pop;
           else if(day<=10)
           {
            cas+= pow(2,day);
            if(cas >= pop)
                cas = pop;
           }
            else
            {
            cas+= pow(2,10) * pow(3,day-10);
            if(cas >= pop)
                cas = pop;
            }
       std::cout<<cas<<std::endl;
    }
    return 0;
}
