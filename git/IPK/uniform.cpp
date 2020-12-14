#include "io.hh"
#include <iostream>
#include <vector>
#include "statistics.h"

int main(){
    std::vector<double> vector = uniform_distribution(random_seed(),100,1,567);
    double a= standard_deviation(vector);
    double b =mean(vector);
    double c =median(vector);
    double d =moment(vector, 4);
    std::cout <<"uniform_distribution\n";
    print_vector(vector);
    std::cout <<"\nstd_dev = " << a <<"\nmean = "<<b
              <<"\n median = "<< c <<"\nmoment = "<< d << std::endl;
}