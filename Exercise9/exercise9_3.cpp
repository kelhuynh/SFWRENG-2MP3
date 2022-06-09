#include <iostream>

using namespace std;

/*
Kelvin Huynh
400179088
Q3: Digit Product
2019-11-19
*/
class Exercise9_3{
    
    public:
        int product;
    Exercise9_3(int input){
        product = 1;
        for (input; input > 0; input /= 10){
            product *= input % 10;
        }
    }
    int getProduct(){
        return product;
    }
};

int main(){
    int num;
    cout << "Enter number: ", cin >> num, cout << endl;
    Exercise9_3 number(num);
    cout << "The product of the digits is: " << number.getProduct();
    return 0;
}