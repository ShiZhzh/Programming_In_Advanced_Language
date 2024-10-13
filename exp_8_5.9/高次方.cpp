#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 将数字字符串乘以2
string multiply(const string& number,const int a) {
    string result;
    int carry = 0;
    for (int i = number.size() - 1; i >= 0; --i) {
        int digit = (number[i] - '0') * a + carry;
        carry = digit / 10;
        digit %= 10;
        result = char(digit + '0') + result; 
    }
    if (carry > 0) {
        result = char(carry + '0') + result; 
    }
    return result;
}

// 计算2的幂
string power(int exponent,int a) {
    string result = "1"; 
    while (exponent > 0) {
        result = multiply(result,a);
        --exponent;
    }
    return result;
}

int main() {
    int n,a=0;
    cout<<"which number: ";
    cin>>a;
    cout<<"how many times: ";
    cin>>n;
    string result = power(n,a);
    cout << result << endl;
    return 0;
}
