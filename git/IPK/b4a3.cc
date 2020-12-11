#include <iostream>
#include <cmath>
#include <map>

std::map<char,int> get_frequencies(){
    std::map<char,int> m;
    int count=0;
    while(true){
        unsigned char cha;
        std::cin >> cha;
        if(not std::cin){
                break;
        }
        if(std::islower(cha)){
            cha = std::toupper(cha);
        }
	bool std::isalpha(char cha) c;
        if(c == true){
                m[cha]++; 
                count++;
           
        }        
    }
    return m;
}

void print_frequencies(const std::map<char,int>& frequencies){
    std::map<char,int>::iterator it;
    for(it=frequencies.begin(); it != frequencies.end(); it++){
        std::cout << it->first << " - " << it->second << std::endl;   
    }
}

int main(){
	get_frequencies();
	print_frequencies(get_frequencies());
	
	return 0;
}    
