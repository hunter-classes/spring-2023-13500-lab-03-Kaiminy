// add your code as appropriate 
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>
#include "reservoir.h"
#include "reverseorder.h"
#include "reverseorder.cpp"
using namespace std;

//int main()//task a 
//{
  //string date ="11/29/2018";
  //cout<<"Enter in a date with the format MM/DD/YYYY"<<endl;
  //cout<< "East Basin Storage:"<<get_east_storage(date)<<"billion gallons"<<endl;
  //date="11/29/2018";
    
  //}

//int main(){
  //cout<<"Enter in a date with the format MM/DD/YYYY"<<endl;
  //date ="11/29/2018";
  
  //cout<<"East Basin Storage:"<<get_east_storage(date)<<"billion gallons"<<endl;
  
  //cout<<"The minimum storage in the East basin is"<<get_min_east()<<"billion gallons"<<endl;
  
  //cout<<""The minimum storage in the East basin is"<<get_maz_east()<<"billion gallons"<<endl;

  //date = "04/26/2018";
  
  //cout<<"Which basin had higher elevation. Enter starting date and ending date"<< date<<endl<<compare_basins(date)<<endl;
  
  //cout<< "Earlier date: 06/25/2018"<<endl<<"Later date: 07/02/2018"<<endl;

  //reverse_order("05/29/2018", "06/02/2018");
  //cout<<endl;
  //return 0;
  
//}

//int main(){
  //get_east_storage("11/29/2018");
  //get_min_east();
  //get_max_east();
  //compare_basins("09/13/2018");
  //reserve_order("06/02/2018","05/29/2018");
  //return 0;
//}

int main()
{
  //Test cases for Task A
  std::cout << "---Test Cases for Task A--- \n";
  std::string date1 = "05/20/2018";
  std::cout << "Date: " << date1 << "\n";
  std::cout << "East basin storage: " << get_east_storage(date1) << " billion gallons \n";


  //Test cases for Task B
  std::cout << "---Test Cases for Task B--- \n";
  std::cout << "Minimum storage in East basin: " << get_min_east() << " billion gallons \n";
  std::cout << "Maxmum storage in East basin: " << get_max_east() << " billion gallons \n";


  //Test cases for Task C
  std::cout << "---Test Cases for Task C--- \n";
  std::cout << "09/13/2018 " << compare_basins("09/13/2018") << "\n";
  std::cout << "011/03/2018 " << compare_basins("11/03/2018") << "\n";

  //Test cases for Task D
  std::cout << "---Test Cases for Task D #1--- \n";
  reverse_order("01/17/2018", "01/20/2018");

  std::cout << "---Test Cases for Task D #2--- \n";
  reverse_order("05/30/2018", "06/02/2018");

  return 0;
}