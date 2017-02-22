//
//  reverse.cpp
//  
//
//  Created by Vincent Cannalla on 2/21/17.
//
//

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
    
    char* input = argv[1]; //word to translate
    char* size = argv[2]; //size of word/to make array
    
    char firstLet = input[0];
    char* newInput = new char[(*size) + 4];
    
    //copying array to new array
    for(int i = 0; i < (*size)-1; i++){
        newInput[i] = input[i+1];
    }
    std::cout << newInput << "-" << firstLet << "ay" << std::endl;
    
}
