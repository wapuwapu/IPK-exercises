#ifndef STATISTICS_HH
#define STATISTICS_HH

#include <algorithm>
#include <vector>
template <typename T>
// Return the mean
double mean(const std::vector<T>& v);

// Return the median
double median(const std::vector<T>& v);

// Return the k'th moment
double moment(const std::vector<T>& v, int k);

// Return the standard deviation
double std_dev(const std::vector<T>& v);

// Return a variety of statistics
void statistics(const std::vector<T>& v);

#endif  // STATISTICS_HH
