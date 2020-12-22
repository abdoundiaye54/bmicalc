#include <iostream>
#include <cmath>

int main() {

double weight, height , bmi;

std::cout<< "Enter your weight in (lb): ";
std::cin>>weight;

std::cout<<"Enter your height in (ft):";
std::cin>>height;

bmi=weight/pow(height,2);

std::cout<<"Your bmi (body mass index) is: " << bmi;

// Future update: add comment if bmi is too low or high
// Depnding on if bmi is too high or too low recommend fitness and meal plan.









  return 0;
}
