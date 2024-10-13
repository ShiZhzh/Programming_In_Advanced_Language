#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
class BigInt {
private:
    string number; 

    string reverseStr(const string& str) const {
        string reversed = str;
        reverse(reversed.begin(), reversed.end());
        return reversed;
    }

public:
    
    BigInt(const string& num) : number(num) {}

    BigInt operator+(const BigInt& other) const {
        string num1 = reverseStr(this->number);
        string num2 = reverseStr(other.number);
        string sum;

        int ten = 0;
        for (size_t i = 0; i < num1.size() || i < num2.size() || ten!=0; ++i) {
            int Sum = ten;
            if (i < num1.size()) {
                Sum += num1[i] - '0';
            };
            if (i < num2.size()){ 
                Sum += num2[i] - '0';
            };
            ten = Sum / 10;
            sum += (Sum % 10) + '0';
        }

        return BigInt(reverseStr(sum));
    }

    BigInt operator-(const BigInt& other) const {
        string num1 = this->number;
        string num2 = other.number;
        bool bigger=true;
        if (num1.length() < num2.length() || (num1.length() == num2.length() && num1 < num2)) {
            swap(num1, num2);
            bigger=false;
        }
        while (num2.length() < num1.length()) {
            num2 = "0" + num2;
        }
        string diff;
        int carry = 0;
        for (int i = num1.length() - 1; i >= 0; --i) {
            int n1 = num1[i] - '0';
            int n2 = num2[i] - '0';
            int sub = n1 - n2 - carry;

            carry = 0;
            if (sub < 0) {
                sub += 10;
                carry = 1;
            }
            diff = char(sub + '0') + diff;
        }

        size_t start = diff.find_first_not_of('0');
        if (start != std::string::npos) {
            diff = diff.substr(start);
        } else {
            diff = "0";  
        }

        if (bigger ==0 && diff != "0") {
            diff = "-" + diff;
        }

        return BigInt(diff);
    }

    BigInt operator*(const BigInt& other) const {
        string num1 = reverseStr(this->number);
        string num2 = reverseStr(other.number);
        string product(num1.size() + num2.size(), '0');

        for (size_t i = 0; i < num1.size(); ++i) {
            int carry = 0;
            for (size_t j = 0; j < num2.size() || carry != 0; ++j) {
                int digitProd = product[i + j] - '0' + carry;
                if (j < num2.size()) {
                    digitProd += (num1[i] - '0') * (num2[j] - '0');
                }
                product[i + j] = (digitProd % 10) + '0';
                carry = digitProd / 10;
            }
        }

        auto it = product.find_last_not_of('0');
        if (it != string::npos) {
            product.erase(it + 1);
        } else {
            product = "0";
        }

        return BigInt(reverseStr(product));
    }

    friend ostream& operator<<(ostream& os, const BigInt& num) {
        os << num.number;
        return os;
    }
};

string getNum(){
    string input;
    cin>>input;
    return input;    
}


int main() {
    BigInt num1(getNum());
    BigInt num2(getNum());

    cout << "Num1: " << num1 << endl;
    cout << "Num2: " << num2 << endl;
    cout << "Num1+Num2: " << num1 + num2 << endl;
    cout << "Num1-Num2: " << num1 - num2 << endl;
    cout << "Num1*Num2: " << num1 * num2 << endl;

    return 0;
}