#include <iostream>
#include <vector>
#include <algorithm>

class BigInt {
private:
    std::vector<int> digits;
    
    // Helper function to multiply current BigInt by a single digit
    void multiplyDigit(int digit) {
        int carry = 0;
        for (int& d : digits) {
            int temp = d * digit + carry;
            d = temp % 10;
            carry = temp / 10;
        }
        while (carry) {
            digits.push_back(carry % 10);
            carry /= 10;
        }
    }
    
public:
    BigInt(int n = 0) {
        do {
            digits.push_back(n % 10);
            n /= 10;
        } while (n);
    }

    BigInt(const std::vector<int>& vec) : digits(vec) {}

    // Multiply BigInt by another BigInt
    BigInt operator*(const BigInt& other) const {
        BigInt product;
        product.digits.assign(digits.size() + other.digits.size(), 0);
        
        for (size_t i = 0; i < other.digits.size(); ++i) {
            int carry = 0;
            for (size_t j = 0; j < digits.size() || carry; ++j) {
                int temp = product.digits[i + j] +
                           (j < digits.size() ? other.digits[i] * digits[j] : 0) +
                           carry;
                product.digits[i + j] = temp % 10;
                carry = temp / 10;
            }
        }
        
        // Remove leading zeros
        while (product.digits.size() > 1 && product.digits.back() == 0) {
            product.digits.pop_back();
        }
        
        return product;
    }

    // Prints the number in the correct order
    void print() const {
        for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
            std::cout << *it;
        }
    }
};

// Calculate 2 raised to the power of n using the fast exponentiation method
BigInt fastPowerOfTwo(int exponent) {
    BigInt result(1);
    BigInt base(2);
    while (exponent > 0) {
        if (exponent & 1) { // If the current exponent bit is 1
            result = result * base;
        }
        base = base * base; // Square the base
        exponent >>= 1; // Right shift the exponent
    }
    return result;
}

int main() {
    BigInt result = fastPowerOfTwo(1000000);
    std::cout << "2^1000000 is:" << std::endl;
    result.print();
    std::cout << std::endl;
    return 0;
}
