#include "iostream"

int main(int argc, char* argv[]){
    if(argc > 2 and argc < 4){
        int n = std::stoi(argv[1]);
        int k = std::stoi(argv[2]);
        if(n < k and n > 0 and k < 10000){
            for(n; n <= k; n++){
                std::cout<<n;
            }
        }
        else if(n == k){
            std::cout<<"Error, n = k ;("<<std::endl;

        }
    }
    else{
        std::cout<<"Not found 2 arguments"<<std::endl;
    }
    
}
