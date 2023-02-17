// add your code
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
#include "reverseorder.h"



double get_east_storage(std::string date){
  std::cout<<"Enter date:";
  std::cin>>date;

  std::ifstream in("Current_Reservoir_Levels.tsv");
  if (in.fail()){
    std::cerr<<"File cannot be opened for reading."<<std::endl;
    exit(1);
  }
  std::string junk;
  getline(in,junk);

  std::string eastSt;
  std::string point;

  while (in>>point>>eastSt){
    in.ignore(INT_MAX,'\n');
    if (date == point){
      std::cout<<"East basin storage:"<<eastSt<<"billion gallons"<<std::endl;
      in.ignore(INT_MAX)<<std::endl;
    }
  }
  return 0;
}

double get_min_east(){
  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()){
    std::cerr<<"File cannot be opened for reading"<<std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin,junk);
  std::string eastSt;
  std::string point;
  float min = 1000.00;

  while (fin>>point>>eastSt){
    float num =std::stof(eastSt);
    fin.ignore(INT_MAX,'\n');
    if (num<min){
      min=num;
      fin.ignore(INT_MAX, '\n');
    }
  }
  std::cout<<"minimum storage in East Basin is"<<min<<"billion gallons"<<std::endl<<std::endl;
  return 0;
}



double get_max_east(){
  std::ifstream fin("Current_Reservoir_levels.tsv");
  if (fin.fail()){
    std::cerr<<"File cannot be opened for reading."<<std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin,junk);

  std::string eastSt;
  std::string point;
  float max=0.00;

  while (fin>>point>>eastSt){
    float num=std::stof(eastSt);
    fin.ignore(INT_MAX,'\n');
    if (num>max){
      max=num;
      fin.ignore(INT_MAX,'\n');
    }
  }
  std::cout<<"Maxinimum storage in East basin:"<<max<<"billion gallons"<<std::endl;
  return 0;
}

std::string compare_basins(std::string date){
  std::string start;
  std::string end;
  std::cout<<"Enter a starting date in the format MM/DD/YYYY";
  std::cin>>start;
  std::cout<<"Enter ending date in the format MM/DD/YYYY";
  std::cin>>end;


  std::cout<<std::endl;

  std::ifstream fin("Current_Reservoir_Levels.tsv");
  if (fin.fail()){
    std::cerr<<"File can't be opened for reading."<<std::endl;
    exit(1);
  }
  std::string junk;
  getline(fin,junk);

  std::string eastSt;
  std::string eastEl;
  std::string westSt;
  std::string westEl;
  std::string loop="n";
  while(fin>>date>>eastSt>>eastEl>>westSt>>westEl){
    float east=stof(eastEl);
    float west=stof(westEl);
    fin.ignore(INT_MAX,'\n');
    if(date==start||loop=="y"){
      loop="y";
      if (east>west){
        std::cout<<date<<"East"<<std::endl;
      }
      else if (west>east){
        std::cout<<date<<"West"<<std::endl;
      }
      else{
        std::cout<<date<<"Equal"<<std::endl;
      }
      if (date==end){
        loop="n";
      }
    }
  }
  return (date);
}