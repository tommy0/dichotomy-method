#include <iostream>
#include <cmath>

double f(double x){return pow(x,5)-20.2*pow(x,4)+132.18*pow(x,3)-60.592*pow(x,2)-72.693*x-14.525;}

int main()
{
    double epsilon,a,b;
    int n=0;
    std::cout<<"Enter epsilon, a, and b: ";
    std::cin>>epsilon>>a>>b;
    while(std::abs(b-a)>epsilon){(f((a+b)/2)>0)?b=(a+b)/2:a=(a+b)/2;n++;}
    std::cout<<(a+b)/2<<std::endl;
    std::cout<<n;
    return 0;
}
