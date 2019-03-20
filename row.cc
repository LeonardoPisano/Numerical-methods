#include <iostream>
#include <math.h>
#include <iomanip>

int main()
{
    int n=0, x=0;
    float e=0, s=0, a=1, d=0;
    std::cout << "e = "; std::cin >> e;
    std::cout << "x = "; std::cin >> x;
    std::cout << "n\ta\t\ts" << std::endl;
    std::cout << n <<"\t" <<a <<"\t\t" <<s <<"\t" << std::endl;
    while (fabs(a)>=e)
    {
        s+=a;
        n++;
        d=-(pow(2*x,2))/((2*n-1)*2*n);
        a = a*d;
        std::cout << n <<"\t" <<a <<"\t\t" <<s <<"\t" << std::endl;
    }
    std::cout <<"s = " <<s << std::endl;
    return 0;
}
