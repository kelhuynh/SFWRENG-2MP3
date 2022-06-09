#include <iostream>

using namespace std;

/*
Kelvin Huynh
400179088
Q2: String Pattern
2019-11-19
*/
class Exercise9_2{
    
    public:
        string str = "ACEGIKMOQS";
};

void pattern(string str){
    int index = 0;
    for (int i = 4; i > 0; i--){
        for (int j = 0; j < i; j++, index++){
            cout << str[index] << " ";
        }
        cout << endl;
    }
}

int main(){
    Exercise9_2 data;
    pattern(data.str);
    return 0;
}