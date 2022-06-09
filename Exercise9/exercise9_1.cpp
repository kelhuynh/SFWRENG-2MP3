#include <iostream>

using namespace std;

/*
Kelvin Huynh
400179088
Q1: Meters to KM
2019-11-19
*/
class Exercise9_1{
    
    public:
        float distance;
    Exercise9_1(){
        cout << "Enter the distance in meters:" << endl;
        cin >> distance;
    }
    void toKM(){
        cout << "The distance is " << distance/1000 << " in km";
    }
};

int main(){
    Exercise9_1 meters;
    meters.toKM();
    return 0;
}