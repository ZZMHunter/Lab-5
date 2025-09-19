/*
    Author: Zhao Zhang
    Course: CSCI-135
    Instructor: Tong Yi
    Assignment: Lab-5

    Make a function that returns true if a is divisible by b, and false otherwise
*/

#include <iostream>
//part a
bool isDivisibleBy(int a, int b){
    if (a%b == 0){
        return true;
    }else{
        return false;
    }
}
//part b
bool isPrime(int a){
    if (a <= 1){
        return false;
    }
    for (int i = a-1; i > 1; i--){
        if (a%i == 0){
            return false;
        }
    }
    return true;
}
//part c
int nextPrime(int a){
    for (int i = a+1; i > a; i ++){
        if (isPrime(i)){
            return i;
        }
    }
    return 0;
}
//part d
int countPrimes(int a, int b){
    int count = 0;
    for (int i = a; i <= b; i ++){
        if (isPrime(i)){
            count++;
        }
    }
    return count;
}
//part e
bool isTwinPrime(int a){
    if (isPrime(a) && isPrime(a+2) || isPrime(a) && isPrime(a-2)){
        return true;
    }
    return false;
}
//part f
int nextTwinPrime(int a){
    for (int i = a+1; i > a; i++){
        if (isTwinPrime(i)){
            return i;
        }
    }
    return 0;
}
//part g
int largestTwinPrime(int a, int b){
    for (int i = b; i >= a; i--){
        if (isTwinPrime(i)){
            return i;
        }
    }
    return 0;
}
//test cases
int main(){
    std::cout << "Test for isDivisibleBy() function (1 is true, 0 is false):" << std::endl;
    std::cout << "5 is divisible by 3: " << isDivisibleBy(5,3) << std::endl;
    std::cout << "7 is divisible by 7: " << isDivisibleBy(7,7) << std::endl;
    std::cout << "6 is divisible by 3: " << isDivisibleBy(6,3) << std::endl;
    std::cout << "5 is divisible by 0: " << isDivisibleBy(5,3) << std::endl;
    std::cout << "0 is divisible by 3: " << isDivisibleBy(0,3) << std::endl;
    std::cout << "Test for isPrime() function (1 is true, 0 is false):" << std::endl; 
    std::cout << "Is 1 prime: " << isPrime(1) << std::endl;
    std::cout << "Is 2 prime: " << isPrime(2) << std::endl;
    std::cout << "Is 3 prime: " << isPrime(3) << std::endl;
    std::cout << "Is 6 prime: " << isPrime(6) << std::endl;
    std::cout << "Is 0 prime: " << isPrime(0) << std::endl;
    std::cout << "Test for nextPrime() function:" << std::endl;
    std::cout << "Next prime of 14: " << nextPrime(14) << std::endl;
    std::cout << "Next prime of 12: " << nextPrime(12) << std::endl;
    std::cout << "Next prime of 16: " << nextPrime(16) << std::endl;
    std::cout << "Next prime of 25: " << nextPrime(25) << std::endl;
    std::cout << "Next prime of 1203: " << nextPrime(1203) << std::endl;
    std::cout << "Test for countPrimes() function:" << std::endl;
    std::cout << "Number of primes between 1 and 10: " << countPrimes(1,10) << std::endl;
    std::cout << "Number of primes between 4 and 15: " << countPrimes(4,15) << std::endl;
    std::cout << "Number of primes between 230 and 1344: " << countPrimes(230,1344) << std::endl;
    std::cout << "Number of primes between 15 and 3825: " << countPrimes(15,3825) << std::endl;
    std::cout << "Number of primes between 23 and 1412: " << countPrimes(23,1412) << std::endl;
    std::cout << "Test for isTwinPrime() function (1 is true, 0 is false):" << std::endl;
    std::cout << "Is 17 a twin prime: " << isTwinPrime(17) << std::endl;
    std::cout << "Is 14 a twin prime: " << isTwinPrime(14) << std::endl;
    std::cout << "Is 31 a twin prime: " << isTwinPrime(31) << std::endl;
    std::cout << "Is 823 a twin prime: " << isTwinPrime(823) << std::endl;
    std::cout << "Is 317 a twin prime: " << isTwinPrime(317) << std::endl;
    std::cout << "Test for nextTwinPrime() function:" << std::endl;
    std::cout << "Next twin prime of 17: " << nextTwinPrime(17) << std::endl;
    std::cout << "Next twin prime of 14: " << nextTwinPrime(14) << std::endl;
    std::cout << "Next twin prime of 31: " << nextTwinPrime(31) << std::endl;
    std::cout << "Next twin prime of 823: " << nextTwinPrime(823) << std::endl;
    std::cout << "Next twin prime of 317: " << nextTwinPrime(317) << std::endl;
    std::cout << "Test for largestTwinPrime() function:" << std::endl;
    std::cout << "Largest twin prime between 38 and 103 is: " << largestTwinPrime(38,103) << std::endl;
    std::cout << "Largest twin prime between 13 and 5528 is: " << largestTwinPrime(13,5528) << std::endl;
    std::cout << "Largest twin prime between 23 and 52 is: " << largestTwinPrime(23,52) << std::endl;
    std::cout << "Largest twin prime between 93 and 3128 is: " << largestTwinPrime(93,3128) << std::endl;
    std::cout << "Largest twin prime between 4234 and 23424 is: " << largestTwinPrime(4234,23424) << std::endl;
}