#include "io.hh"
#include <vector>
#include <iostream>
#include "statistics.h"



int main(){
    std::vector<double> vector =  normal_distribution(random_seed(),11,5,10);
    double a= standard_deviation(vector);
    double b =mean(vector);
    double c =median(vector);
    double d =moment(vector, 5);
    std::cout <<"normal_distribution\n";
    print_vector(vector);
    std::cout <<"\nstd_dev = " << a <<"\nmean = "<<b
                <<"\n median = "<< c <<"\nmoment = "<< d << std::endl;
}