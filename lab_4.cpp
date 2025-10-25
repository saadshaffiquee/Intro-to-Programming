#include <iostream>
using namespace std;
int main() {

    //Question no 1

    // Write a C++ program that tells the user that the number entered is less than or greater than 10?

    cout <<"Enter the number: ";
    int num_entred;
    cin >> num_entred;
    int num = 10;


        if (num_entred< 10) {
            cout <<num_entred <<" is less than 10";

        } else if (num_entred == 10) {
            cout << num_entred <<" is equal to 10";
        } else {
            cout << num_entred<<" is less than 10";
            return 0;
            

    }}


    // Question no 2


    // Write a C++ program that tells the user that the number entered is even or odd?


    #include <iostream>
    using namespace std;
    int main() {

    cout <<"Enter the number: ";
    int num_entred;
    cin >> num_entred;
    if (num_entred % 2 == 0) {
        cout<< num_entred << " is an even number";
    } else {
    cout<< num_entred << " is an odd number";
    }


    return 0;
}


// Quuestion no 3

// Write a menu driven C++ program that ask the user to choose the type in which he wants the output?
// Either he wants to convert the entered Celsius temperature in toFahrenheit or Kelvin?

#include <iostream>
using namespace std;
#include <string>


int main() {
    

    cout << "Do  you want convert Celcius to Farhenit? y/n  ";
    string response;
    cin>>response;

    float c, f, k;
    

    if (response == "y") {

        cout<<"Enter the Temp in celcius : ";
        float tempertature;
        cin>>tempertature;


        float temp_in_farhenit;

        temp_in_farhenit = (tempertature * 1.8) + 32;
        cout<< tempertature << " in farhenit is " << temp_in_farhenit;


    } else if (response == "n") {

        cout<<"Do you wanna convert Celcius to Kelvin? y/n ";
        string answer;
        cin>>answer;

        if (answer == "y") {

            cout<<"Enter the Temp in celcius : ";
            float tempertature;
            cin>>tempertature;

            float temp_in_kelvin;
            temp_in_kelvin = tempertature + 273;
            cout << tempertature << " in kelvin is equal to " << temp_in_kelvin;


        } else {
        }



    }


}






// Question no 4
// Write a program to compare following strings with each other and display which string is smaller.
// string str1 = "Hello";
// string str2 = "Hi";
// string str3 = "Air";
// string str4 = "Bill";
// string str5 = "Big";


#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "Hi";
    string str3 = "Air";
    string str4 = "Bill";
    string str5 = "Big";

    string smallest = str1;



    if (str2.length() < smallest.length()) smallest = str2;
    if (str3.length() < smallest.length()) smallest = str3;
    if (str4.length() < smallest.length()) smallest = str4;
    if (str5.length() < smallest.length()) smallest = str5;

    cout << "The smallest string by length is: " << smallest << endl;





}  //Disclaimer copied from gpt.





// Question no 5

// STUDENT GRADE CALCULATOR


#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter your percentage in Number";
    int response;
    cin>>response;
    
    if(response > 90 && response < 100){
        cout<< "You passed exam  with A+ Grade \nHUGE SHOUT OUT.... CONGRAGULATION \nFROM NOW ON YOU DON'T NEED TO PAY ANY FEE.... YOU GOT 100% SCHLORSHIP";
        
    }else if (response > 80 && response < 89){
        cout<< "You passed the exams with A Grade \nCONGRAGULATION___ YOU GOT 50% SCHLORSHIP TOO";
    }else if (response > 70 && response < 79){
        cout<< "You passed the exams with B+ Grade \nYOU MISSED A GRADE!! I WANNA SEE YOU WITH A GRADE___ NEXT SEMESTER";
    }else if (response > 60 && response < 69){
        cout<< "You passed the exams with B Grade \nNOT BAD BUT NOT GOOD";
    }else if (response > 50 && response < 59){
        cout<< "You passed the exams with C Grade \nYOU ARE SAFE";
    }else if (response > 40 && response < 49){
        cout<< "You bearly passed the exams with D Grade \nBAAL BAAL BACH GEE";
    }else if (response > 40 && response < 0){
        cout<< "You Failed the exams with F Grade \nPARNA THA NA";
    } else {
        cout<<"i don't what you are talking about";
    }

    return 0;
}