#include <iostream>
#include <cmath>

using namespace std;

int main() {

double weight, height , bmi;

cout<< "Enter your weight in (kg): ";
cin>>weight;

cout<<"Enter your height in (m):";
cin>>height;

bmi=weight/pow(height,2);

cout<<"Your bmi (body mass index) is: " << bmi<<endl;

/* Future update 1: add comment if bmi is too low or high
- If your BMI is less than 18.5, it falls within the underweight range.
-  If your BMI is 18.5 to 24.9, it falls within the normal or Healthy Weight range.
-  If your BMI is 25.0 to 29.9, it falls within the overweight range.
-  If your BMI is 30.0 or higher, it falls within the obese range.

  Future update 2:Depnding on if bmi is too high or too low recommend fitness and meal plan.
*/

double underweight=18.5;
double normal=22.5;
double overweight=25.0;
double obese=29.0;

if (bmi < underweight){

  cout<<"It looks like you fall within the underweight range!";
} else if(bmi >underweight && bmi<=normal){

  cout<<"It looks like you fall within the  Normal range. :)";
} else if (bmi >normal && bmi<=overweight){

cout<<"It looks like you fall within the overweight range!";

}else if(bmi>obese){
  cout<<"It looks like you fall within the obesity range!";

}

  return 0;
}
