#include <iostream>
//using namespace std;

void printTriangle(int num){
    for(int row=0;row<num;row++){
        for(int coloumn=0;coloumn<row;coloumn++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

}

void reverseTriangle(int num){
    for(int row=0;row<num;row++){
        for(int column=0;column<row;column++){
           std::cout<<" ";
        }
        for(int coloumn=0;coloumn<num-row;coloumn++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }
}

void completeTriangle(int num){
    for(int row=0;row<num;row++){
        for(int column=0;column<num-row;column++){
            std::cout<<" ";
        }
        for(int column=0;column<row;column++){
            std::cout<<"*";
        }
        for(int column=1;column<row;column++){
            std::cout<<"*";
        }
        std::cout<<"\n";
    }

}

void falseMain(){
    int number;
    std::cout<<"Enter a number of your choice: ";
    std::cin>>number;
    //printTriangle(number);
    //reverseTriangle(number);
    completeTriangle(number);
}

int main(){

    falseMain();

return 0;

}
