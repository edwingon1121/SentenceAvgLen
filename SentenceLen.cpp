//  Edwin Gonzalez
//  ITP 165, Spring 2016
//  Lab Practical 21
//  edwingon@usc.edu
//
//  lp21.cpp
//  lp21
//
//  Created by Edwin Gonzalez on 4/7/16.
//  Copyright © 2016 Edwin Gonzalez. All rights reserved.
//

#include <iostream>
#include <vector>
#include <sstream>
#include <string>


int main()
{
    std::string readInput;
    std::vector <std::string> words;
    std::string indWord;
    
    std::cout<<"Please enter line of words separated by spaces: "<<std::endl;
    std::getline(std::cin,readInput);
    
    std::istringstream ss(readInput);
    
    while (!ss.eof())
    {
        ss>>indWord;
        words.push_back(indWord);
    }
    
    double lengthWords=0;
    
    for (int i=0; i<words.size(); i++)
    {
        //std::cout<<words[i]<<std::endl;
        lengthWords+=words[i].length();
    }
    
    lengthWords=(lengthWords)/words.size();
    std::cout<< "The average word length is "<<lengthWords<<std::endl;
    
    return 0;
}
