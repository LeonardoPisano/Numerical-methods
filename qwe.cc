#include <iostream>
#include <math.h>

int main()
{
    int n=0, a=n-1;
    float L=0;
    std::cout << "n = "; 
    std::cin >>n;

    try {
        int *x = new int [n];
        for (int i=0; i<n; i++) {
            std::cout <<"x["<<i<<"]=";
            std::cin >>x[i];
        }
    } catch (const std::exception& exc) {
        //std::cerr << exc << std::endl;
        return 1;
    }

    try  {
        float *f = new float [n];
        for (int i=0; i<n; i++) {
            std::cout << "f[" << i << "]=";
            std::cin >> f[i];
        }
    } catch (const std::exception & exc) {
        return 2;
    }

    try {
        float *k = new float [a];
        for (int i=0; i<a; i++) {
            std::cout <<"f["<<i<<"]=";
            std::cin >>f[i];
        }
    } catch (const std::exception & exc) {
        return 3;
    }

    return 0;
}
