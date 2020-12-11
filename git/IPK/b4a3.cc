#include <iostream>
#include <cmath>
#include <map>

std::map<char,int> get_frequencies(){
    std::map<char,int> m;
    int count=0;
    while(true){
        unsigned char c;
        std::cin >> c;
        if(not std::cin)
        	break;
        
        if(std::islower(c))
   		c = std::toupper(c);
     	
        if(std::isalpha(c) == true){
                m[c]++; 
                count++;
           
                   
    	}
    }
    return m;
}

void print_frequencies(std::map<char,int>& frequencies){
    std::map<char,int>::iterator it;
    for(it=frequencies.begin(); it != frequencies.end(); it++){
	int sum_all = frequencies.size();
	double t = static_cast<double>(it->second)/sum_all;
        std::cout << it->first << " - " << it->second <<"Probability: " << t << std::endl;   
    }
}

int main(){
	std::map<char,int>n = get_frequencies();
	print_frequencies(n);
	
	return 0;
}    
