#include <iostream>
#include <iomanip>

int main(int argc, const char * argv[]) {
    int cash;
    float balance=0.00f;
    std::cin>>cash>>balance;
    std::cout << std::fixed <<std::setprecision(2);
    if(cash%5!=0 || cash+0.5>balance)
        std::cout<<balance;
    else
        std::cout<<balance-(cash+0.50);
    return 0;
}
