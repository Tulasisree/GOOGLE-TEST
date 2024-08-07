#include<iostream>
#include "MyMathLib.h"
#include "Account.h"
#include "Validator.h"
#include<algorithm>
#include<string>

using namespace std;

double Testfunctions::mySqrt(double x){
    if(x<0){
        throw runtime_error("Negative arg");
    }
    return sqrt(x);
}

int Testfunctions::countPositive(vector<int>& v){
    return count_if(v.begin(),v.end(),[](int a){return a>=0;});
}

void Testfunctions::upperCase(char* s){
    for(int i=0;i<strlen(s); i++){
        s[i] = toupper(s[i]);
    }
}

vector<int> Testfunctions::generateNumbers(int n, int limit){
    vector<int> result;
    if(limit <=0 ){
        throw runtime_error("Args must be >=0");
    }
    for(int i=0;i<n;i++){
        result.push_back(i%limit);
    }
    return result;
}

Account::Account() : mBalance{0}{}

void Account::deposit(double sum){
    mBalance += sum;
}

void Account::withdraw(double sum){
    if(mBalance < sum){
        throw runtime_error("Insufficient funds");
    }
    mBalance -= sum;
}

double Account::getBalance() const{
    return mBalance;
}

void Account::transfer(Account& to,double sum){
    withdraw(sum);
    to.deposit(sum);
}

Validator::Validator(int low,int high) : mLow(low), mHigh(high){}

bool Validator::inRange(int value){
    return value>=mLow && value<=mHigh;
}