//
//  reverse.cpp
//  
//
//  Created by Vincent Cannalla on 2/21/17.
//
//

//#include "reverse.hpp"
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

int main(int argc, char** argv){
    
    //check arg count
    if(argc != 3){
        std::cout << "Invalid number of arguments" << std::endl;
        std::cout << "./compress infile outfile" << std::endl;
        return -1;
    }
    
    char* input = argv[1];
    char* size = argv[2];
    
    char firstLet = input[0];
    char* newInput = new char[(*size) + 4];
    
    for(int i = 0; i < (*size)-1; i++){
        newInput[i] = input[i+1];
    }
    std::cout << newInput << "-" << firstLet << "ay" << std::endl;
    
}
