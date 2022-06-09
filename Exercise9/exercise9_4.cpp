#include <string>
#include <iostream>

using namespace std;

/*
Kelvin Huynh
400179088
Q4: Multi-inheritance
2019-11-19
*/
class Car{
    
    private:
        string cmodel = "RAV4";
        int cprice = 52000;
    
    public:
    string getCModel(){
        return cmodel;
    }
    int getCPrice(){
        return cprice;
    }
};

class Truck{
    
    private:
        string tmodel = "SILVERADO 1500", tcolour = "BLACK";
        int tprice = 46750;
    
    public:
    string getTModel(){
        return tmodel;
    }
    string getTColour(){
        return tcolour;
    }
    int getTPrice(){
        return tprice;
    }
};

class Sales : public Car, public Truck{
    public:
    void call(){
        cout << "CAR INFORMATION\n---------------" << endl;
        cout << "Model: " << getCModel() << endl;
        cout << "Price: $" << getCPrice() << "\n" << endl;
        cout << "TRUCK INFORMATION\n---------------" << endl;
        cout << "Model: " << getTModel() << endl;
        cout << "Colour: " << getTColour() << endl;
        cout << "Price: $" << getTPrice() << endl;
    }
};

int main(){
    Sales s;
    s.call();
    return 0;
}