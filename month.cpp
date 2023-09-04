#include <iostream>

int main() {
  int Month, Year; 
  std::cout<<"Enter Year: ";
std::cin>>Year;
  std::cout<<"Enter Month: ";
std::cin>>Month;
  if (Month==1)// Jan
    std::cout<<" 31 days";
  if (Month == 2) {
    if (Year%400==0|| (Year%4==0 && Year %100 !=0)){
      std::cout<<" 29 days";
    }
  else {
    
  
    std::cout<<" 28 days";
  }
  if (Month == 4)//April 
    std::cout<<" 30 days ";
  if (Month == 5)//MAY
    std::cout<<" 31 days";
  if (Month == 6)//june
    std::cout<<" 30 days";
  if (Month == 7)//july
    std::cout<<" 31 days";
  if (Month == 8)//august
    std::cout<<" 31 days";
  if (Month == 9)//sept
    std::cout<<" 30 days";
   if(Month ==10)//oct
     std::cout<<" 31 days";
  if(Month == 11)//nov
    std::cout<<" 30 days";
  if (Month == 12)//dece
    std::cout<<" 31 days";
}

}
