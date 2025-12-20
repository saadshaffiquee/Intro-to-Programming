#include<iostream>
using namespace std;
#include <climits>

int main() {

    // Question # 01
    // Write a C++ program to input angles of a triangle and check whether triangle is valid or not


    const int condition = 180;

    int angle1 = 0;
    cout<<"Enter 1st Angle: ";
    cin>>angle1;

    cout<<"Enter 2nd angle: ";
    int angle2 = 0;
    cin>>angle2;

    cout<<"Enter 3nd angle: ";
    int angle3 = 0;
    cin>>angle3;

    if (angle1 <= 0 || angle2 <= 0 || angle3 <= 0)
    {
        cout << "All angles must be grater than 0. ";
        return 0;
    }


    int sum = angle1 + angle2 + angle3;


    if (sum == condition) {
        cout<<"This is a Valid triangle.";
    } else {
        cout<<"This is not a valid triangle.";
    }



    // Question # 02
    // Write a C++ program to check whether a character is vowel or consonant.


    cout<<"Enter a character you wanna check";
    char c;
    cin>> c;

    char check_vowel = tolower(c);

    if (check_vowel == 97 || check_vowel == 101 || check_vowel == 105 || check_vowel== 111 || check_vowel== 117 ) {
        cout << "Entered charactered in vowel";
    } else {
        cout << "Entered character is not vowel";
    }


    // Question # 03 
    // Write a program to input three numbers and find maximum between all



    int arr [3] = {0, 0, 0};

    for ( int i = 0; i < 3; i++) {
        cin>>arr[i];
    }

    int max_of_three = INT_MIN;

    for (int i = 0; i < 3; i++) {
        if (arr[i] > max_of_three) {
            max_of_three = arr[i];
        }
    }
    cout<<max_of_three;


    // Question # 04 
    // Write a C++ program that tells the user that the number entered is less than, greater than or equal to 10?
    
    
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 10) {
        cout << "The number is less than 10.";
    } 
    else if (num > 10) {
        cout << "The number is greater than 10.";
    } 
    else {
        cout << "The number is equal to 10.";
    }



    // Question # 05 
    // According to your grading system mark the user entered percentage as Grade A, B, C, D, F? 
    // Percentage>=90 A grade  
    // Percentage>=80 B grade  
    // Percentage>=70 C grade  
    // Percentage>=60 D grade  
    // Percentage>=40 E grade  
    // Percentage <40 F grade





    cout << "Enter your percentage in Number";
    int response;
    cin>>response;
    
    if(response > 90 && response < 100){
        cout<< "A+ Grade";
        
    }else if (response > 80 && response < 89){
        cout<< "A Grade";
    }else if (response > 70 && response < 79){
        cout<< "B grade";
    }else if (response > 60 && response < 69){
        cout<< "C grade";
    }else if (response > 50 && response < 59){
        cout<< "D Grade";
    }else if (response > 40 && response < 49){
        cout<< "Fail";
    }else if (response > 40 && response < 0){
        cout<< "Fail";
    } else {
        cout<<"Enter the number between 1 to 100";
    }
}







   