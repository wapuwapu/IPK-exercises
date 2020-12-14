#include "io.hh"
#include <vector>
#include <iostream>
#include "statistics.h"


int main(){
   std::vector<double>vector =  read_vector();
    double a= standard_deviation(vector);
    double b =mean(vector);
    double c =median(vector);
    double d =moment(vector, 4);
    std::cout <<"read_vector\n";
    print_vector(vector);
    std::cout <<"\nstd_dev = " << a <<"\nmean = "<<b
              <<"\n median = "<< c <<"\nmoment = "<< d << std::endl;
}

