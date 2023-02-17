#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
#include "reverseorder.h"
#include <vector>

#include "reverseorder.h"

void_reverse_order(std::string date1, std::string date2){
  std::cout<<"Enter earlier date";
  std::cin>>date1;
  std::cout<<"Enter later date";
  std::cin>>date2;
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if(fin.fail()){
    std::cerr<<"File cannot be opened for reading"<<std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin,junk);

  std::string date;
  std::string eastSt;
  std::string eastEl;
  std::string westSt;
  std::string westEl;
  std::vector<std::string>time;
  std::vector<std::string>elevation;
  std::string loop="n";

  std::cout<<std::endl;

  while (fin>>date>>eastSt>>eastEl>>westSt>>westEl){
    time.push_back(date);
    elevation.push_back(westEl);
    fin.ignore(INT_MAX,'\n');
    
  }
  for (int i = elevation.size()-1;i>=0;i--){
    if (time[i]==date2||loop=="y"){
      loop="y";
      std::cout<<time[1]<<" "<<elevation[1]<<"feet"<<std::endl;
      if (time[i]==date){}
        loop="n";
        }
  }
  }