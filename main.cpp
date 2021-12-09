#include <iostream>
#include <string>
using namespace std;

int main()
{
int shape;
int horizontalvalue;
int trianglevalue;
int horizontalvaluefinalfinal;
int horizontalvaluefinal;
int trianglefinalvalue;
int answer;
int area1;
  cout << "Is the shape a triangle,a square or a rectangle? \n 1 triangle 2 for square 3 for rectangle\n press enter after you have typed in the number \n";
  cin >> shape;
  if (shape == 1) {
      cout << "Do you want to calculate the parameter or the area?\n 1 for parameter 2 for area\n press enter after you have typed in the number\n";
      cin >> answer;
      if (answer == 1) {
      cout << "What is the value of 1 of the sides of the triangle?\n press enter after you have typed in the number\n";
    cin >> trianglevalue;
    trianglefinalvalue = trianglevalue*3;
    cout << "The total parameter of the triangle is ";
    cout << trianglefinalvalue;
  }
    if (answer == 2) { 
          cout << "What is the value of the height of the triangle?\n press enter after you have typed in the number\n";
        cin >> trianglevalue;
        cout << "What is the value of the base of the triangle?\n press enter after you have typed in the number\n";        
        cin >> trianglefinalvalue;
        horizontalvaluefinal = trianglefinalvalue*0.5;
        horizontalvaluefinalfinal = trianglevalue*0.5;
        area1 = horizontalvaluefinalfinal+horizontalvaluefinal,
        cout << "The total area of the triangle is ";
        cout << area1;
  }
  }
  if (shape == 2) {
      cout << "Do you want to calculate the parameter or the area?\n 1 for parameter 2 for area\n press enter after you have typed in the number\n";
      cin >> answer;
      if (answer == 1) {
      cout << "What is the value of 1 of the sides of the square\n press enter after you have typed in the number \n";
    cin >> trianglevalue;
    trianglefinalvalue = trianglevalue*4;
    cout << "The total parameter of the square is ";
    cout << trianglefinalvalue;
}
        if (answer == 2){ 
          cout << "What is the value of the height of the square?\n press enter after you have typed in the number\n";
        cin >> trianglevalue;
        cout << "What is the value of the base of the square?\n press enter after you have typed in the number\n";        
        cin >> trianglefinalvalue;
        horizontalvaluefinal = trianglefinalvalue*0.5;
        horizontalvaluefinalfinal = trianglevalue*0.5;
        area1 = horizontalvaluefinalfinal+horizontalvaluefinal,
        cout << "The total area of the square is ";
        cout << area1;
}
}
    if (shape == 3) {
      cout << "Do you want to calculate the parameter or the area?\n 1 for parameter 2 for area\n press enter after you have typed in the number\n";
      cin >> answer;
        if (answer == 1){         
    cout << "What is the value of one of the vertical sides in the rectangle?\n press enter after you have typed in the number \n";
    cin >> trianglevalue;
    cout << "What is the value of one of the horizontal sides in the rectangle?\n press enter after you have typed in the number \n";
    cin >> horizontalvalue;
    trianglefinalvalue = trianglevalue*2;;
    horizontalvaluefinal = horizontalvalue*2;
    horizontalvaluefinalfinal = horizontalvaluefinal+trianglefinalvalue;
    cout << "The total parameter of the rectangle is ";
    cout << horizontalvaluefinalfinal;
        }
    }
    if (answer == 2) {
        cout << "What is the value of the height of the rectanle?\n press enter after you have typed in the number\n";
        cin >> trianglevalue;
        cout << "What is the value of the base of the rectangle?\n press enter after you have typed in the number\n";        
        cin >> trianglefinalvalue;
        horizontalvaluefinalfinal = trianglefinalvalue*trianglevalue;
        cout << "The total area of the rectangle is ";
        cout << horizontalvaluefinalfinal;
}
}
