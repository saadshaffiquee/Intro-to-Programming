#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {
    //     Question#01
    //     Write a C++ program to inputan upper bound by user and print all numbers up to that limit?

    cout<<"Enter the upper limit";
    int upper_limit;
    cin>>upper_limit;

    for (int i = 0; i <= upper_limit; i++) {
        cout<<i;
    }


    // Question#02
    // Write a C++ program to input an upper bound and separate even & odd from that limit?

    int upper_limit2;
    cin>>upper_limit2;
    int nums;

    for (int i = 0; i < upper_limit2; i++) {
        if (i%2==0) {
            cout<< i;
        } else if (i%2 != 0) {
            cout<< i;
        }

    }


    
}

// Question #03
// Write a C++ program that prints complete alphabets using for loop? (a-z)

#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {

    for (char i ='a'; i <= 'z'; i++) {
        char alpha = i;
        cout<<alpha<<" ";
    }

}


// Question #04
// Write a C++ program that ask the user a number and prints the table of that number up to 10?

#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {
    int n1;
    cin>>n1;
    for (int i = 1; i <=10; i++) {
        cout<<n1 << " X "<< i  << " = "<< n1 * i <<endl;
    }
}

// Question #05
// Write a C++ program that displays the product of all odd numbers from 1 to 10 using for loop?

#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {
    int product = 1;
    for (int i = 1; i <=10; i++) {
        if (i%2 != 0) {
            product *= i;

        }
    }
    cout<<product;
}

// Question #06
// Write a C++ program that finds the sum of squares of integer from 1 to n. Where n is a positive value entered by user (i.e. .

#include<iostream>
using namespace std;


int main() {
    int n = 1;
    cin>>n;
    int sumofsq = 0;
    for (int i = 1; i < n; i++) {
        sumofsq += i*i;

    }
    cout<<sumofsq;
}

