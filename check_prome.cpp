//This code will check a number is prime or not
//Then it will print prime or not

#include<iostream>
#include<cstdlib>
using namespace std;
 void findPrime(int i){

    if(i>10) return;

    bool isPrime = true;
    for(int j=2;j<i ;++j){if(i%j == 0){isPrime = false;}}

    if(isPrime) cout<<i<<"is prime"<<endl;
    else cout<<i<<"is not prime"<<endl;

    findPrime(++i);
}


int main( )
{
     findPrime(5);
    return 0;
}


