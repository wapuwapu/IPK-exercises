#include "statistics.h"
#include <algorithm>
#include <vector>
#include <cmath>


double mean(const  std::vector<double>& v){
   double sum_of_elements = 0;
   for (auto& x: v){
       sum_of_elements +=x;
   }
   sum_of_elements /=v.size();
    return sum_of_elements;
}

double median(const std::vector<double>& v){
    std::vector<double>v_copy = v;
    std::sort(v_copy.begin(),v_copy.end());
    if (v_copy.size() %2 == 1){
        return v_copy[(v_copy.size()+1)/2];
    }else{
        return (v_copy[v_copy.size()/2]+v_copy[v_copy.size()/2+1])/2;
    }
}

double moment(const std::vector<double>& v, int k){
    double sum_of_elements = 0;
    for (auto& x: v){
        sum_of_elements +=std::pow(x,k);
    }
    sum_of_elements /=v.size();
    return sum_of_elements;
}

double standard_deviation(const std::vector<double>& v){
    return std::sqrt(moment(v,2)-pow(mean(v),2));
}


