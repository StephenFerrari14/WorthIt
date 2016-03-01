#include <iostream>
#include <string>
#include <stdio.h>  
#include <math.h>
#include <cstdlib>   
using namespace std;

int main(int argc, char* argv[]) {
  //Worth It Value, the calculated value of worth
  float WIV = 0;
  
  //initiate prompts
  char* input;
  //Value of Object or Action
  cout << "Please enter the value of the object or action: ";
  cin >> input;
  float valueOf = atof(input);
  //Chance of Consequence
  cout << "Please enter the chance of consequences: ";
  cin >> input;
  float chanceOfCons = atof(input);
  
  cout << "Please enter the weight of the consequences: ";
  cin >> input;
  float weightOfCons = atof(input);

  int numSituations = 1; //Only singular events right now

  cout << "Please enter the area of influence (meters): ";
  cin >> input;
  float areaOfInfl = 3.14 * (pow(atof(input), 2));

  //Individuals Coefficient, assumign all individuals behave the same right now
  float indivCoeff = 1.0; //1-50

  //Worth Threshold is the minimum value for something to be worth it
  float worthThreshold = valueOf/10;

  //Calculate Worth
  WIV = (valueOf / ((1 + (chanceOfCons * weightOfCons)) * areaOfInfl)) / indivCoeff;
  
  cout << WIV << endl;
  
  if (WIV >= worthThreshold){
      cout << "Worth it!" << endl;
  }
  else
      cout << "Not worth!" << endl;
  

return 0;
}