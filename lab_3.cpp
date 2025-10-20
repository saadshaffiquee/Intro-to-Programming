// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
#include <cmath>
#include<string>

int main() {

    //Question # 1: Write a program to take two float numbers then find remainder of them by using type casting in integer form.
    
    cout<<"Enter a decimal Number: ";
    float float_1;
    cin>>float_1;
    
    
    cout<<"Enter a second decimal Number: ";
    float float_2;
    cin>>float_2;
    
    float  decimal_result = fmod(float_1, float_2);
    cout <<"The decimal result " << decimal_result<<endl;
    
    int implict_typecasting  = decimal_result; //done by compiler we just set the values float value with integer
    cout<<"The integer result using implict typercasting is " << implict_typecasting <<endl;
   
    
    
    
    int explict_typecasting = int(decimal_result); //done by me manually
    cout<<"The integer result using explict type casting is " << explict_typecasting <<endl;

cout<<endl;
cout<<endl;

//Question # 2: Write a program to take input name, address and age from user, then display data on screen.




    string Name;
    cout<<"What is your name? \n";
    cin>>Name;
    string address;
    cout <<"Enter your address: \n";
    cin >> address;
    int age;
    cout << "Enter your age \n";
    cin >> age;
    
    
    cout << "\n\n";
    
    
    cout << "Here is what i know about you \n";
    cout << "Your name is " << Name << ". \n";
    cout << "Your address is " << address <<". \n";
    cout << "Your are " <<age << " years old. \n";
    
    cout<<endl;
    cout<<endl;


    
//Question # 3: Write a program to take input a character and display its ASCII code.


    cout<<"Enter the character: " <<endl;
    char character1;
    cin>>character1;
    cout<<"The ASCI code of " << character1 << " is " << int(character1) << endl;
    
    
    cout<<endl;
    cout<<endl;



//Question # 4: Take an amount from user, interest rate and number of years from user let suppose 1000, 5% and 3. 
//Find Interest amount for those years. (e.g. output for above values is 150)



    cout<<"Enter the principle amount/ Amount you wanna invest: ";
    int P;
    cin>>P;
    cout<<"Enter annual intrest rate: ";
    double r_in;
    cin>>r_in;
    double final_r = r_in/100;
    cout<<"Enter the time of intrest is compounded: ";
    float n;
    cin>>n;
    cout<<"Enter the number of years: ";
    float T;
    cin>>T;

    double amount;
    amount = P * pow((1 + final_r/n), n*T);

    cout<<amount << endl;
    cout<<endl;
    cout<<endl;



//Question # 5: Write a program to take dividend and divisor. Then display the quotient and remainder.(e.g. 20 3. Quotient=6, Remainder=2)


cout<<"Enter the dividend: ";
    int dividend = 0;
    cin>>dividend;
    cout<<"Enter the divisor: ";
    int divisor;
    cin>>divisor;


    int reminder = 0;
    reminder = dividend  % divisor;
    cout<<"The reminder of " << dividend << " and " << divisor <<" is " << reminder <<endl;


    int quotient = 0;
    quotient = dividend / divisor;
    cout<<"The Quotient of " << dividend << " and " << divisor <<" is " << quotient <<endl;
    
    cout<<endl;
    cout<<endl;



//Question # 6: Write a program to take input base and height of triangle. Now calculate area by using formula Area=1/2 x base x height;.


    cout<<"Enter the height of trianle: ";
    float height;
    cin>> height;

    cout<<"Enter the base of triangle: ";
    float base;
    cin>>base;

    double area;
    area = 0.5 * base * height;

    cout << "The area of a triangle with the base " << base <<" and height " << height << " is = " << area <<endl;

cout<<endl;
cout<<endl;



//Question # 7: Write a program to take temperature in Celsius and convert it into Fahrenheit by using F=9/5 *C +32;.


    cout<<"Enter the temperature in celsius: ";
    float temp_in_celsius;
    cin>>temp_in_celsius;

    double celsius_to_fahrenheit;
    celsius_to_fahrenheit = temp_in_celsius * 1.8 + 32;

    cout<< "The " <<temp_in_celsius <<" is equal to " <<celsius_to_fahrenheit << " in Fahrenheit" <<endl;



cout<<endl;
cout<<endl;


//Question # 8: Write a program to take three digit numbers from user then display its reverse order.


    cout<<"Enter the number that you want to reverse: ";
    int num;
    cin>>num;

    while (num > 0) {
        int digit = num % 10;
        cout << digit;
        num /=10;

    }



    return 0;
}