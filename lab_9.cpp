#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include<algorithm>

int main() {

    // Question#1 
    // Write a C++code to count the number of a’s in a string?

    cout<<"Enter the string you want to Check for: ";

    string a;
    getline(cin, a);

    int n = a.length();

    int b = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] == 97 || a[i] == 65) {
            b++;
        }

    }

    cout<<"The character you entered is " << a <<'\n';
    cout<<"You string contains a " << b  << " times";

    // Question#2 
    // Write a program in C++ to read a sentence and replace lowercase characters by uppercase 
    // and vice-versa


    cout<<"Enter the string: ";
    string s;
    getline(cin, s);


    transform(s.begin(), s.end(), s.begin(), ::tolower);
    cout<<"String in small alphabets" << s <<endl;

    transform(s.begin(), s.end(), s.begin(), ::toupper);
    cout<<"String in capital alphabets" << s;


    // Question#3 
    // Write a C++ program to remove characters in String except Alphabets. 

    string s;
    cin>>s;

    s.erase(remove_if(s.begin(), s.end(),
                  [](char c){ return isupper(c); }),
        s.end()); 

        cout<<s;



    // Question#4 
    // Write a C++ program to concatenate one string after the other without using any library function.


    string a;
    cin>>a;
    string b;
    cin>>b;

    cout<<a+b;


    //Question#5
    //Write a C++ program which stores names of five cities and print the names of only those cities
   // which start from K.


    string cities[5] = {"karachi", "Tokyo", "Seoul", "London", "Kolkata"};

    for (int i = 0; i < 5; i++) {
        string city = cities[i];

        char first = tolower(city[0]);

        if (first == 'k') {
            cout<<city;
        }
    }
    


}
