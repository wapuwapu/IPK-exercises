#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <algorithm>
#include <vector>

// Return the mean
double mean(const std::vector<double>& v);

// Return the median
double median(const std::vector<double>& v);

// Return the k'th moment
double moment(const std::vector<double>& v, int k);

// Return the standard deviation
double std_dev(const std::vector<double>& v);

// Return a variety of statistics
void statistics(const std::vector<double>& v);

#endif  // STATISTICS_HH
