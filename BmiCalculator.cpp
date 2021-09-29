
#include <iostream>
using namespace std;


int main()
{
    //Bmi Calculator
    float weight, height, bmi;
    cout << "enter weight in kg " <<  endl;
    cin >> weight;
    cout << "enter height in metres " << endl;
    cin >> height;

    bmi = (weight /( height * height));

    if (bmi < 18.5)
        cout << "you're Underweight" << endl;
    else {
        if (bmi > 25)
            cout << "you're Overweight" << endl;
        else
            cout << "you have normal weight" << endl;
    }

    cout << "your bmi is " << bmi << endl;








    system("pause>0");
}

