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
        if(bool std::isalpha(char cha)== true){
            if(m.find(cha) == m.end()){
                m.insert(make_pair(char,1));
                count++;
            }else{
                m[cha]++;
                count++;
            }
        }        
    }
    return m;
}

void print_frequencies(const std::map<char,int>& frequencies){
    std::map<char,int>::iterator it;
    for(auto it : frequencies){
        std::cout << it.first << " - " << it.second << std::endl;   
    }
}

int main(){
	get_frequencies();
	print_frequencies(get_frequencies());
	
	return 0;
}    
