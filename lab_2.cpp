#include<iostream>
#include<string>
#include<cmath>
using namespace std;

int main() {

    // QUESTION NO 1
    cout << "\t \t * \t \t \n" ;
    cout << "\t * \t * \t* \n" ;
    cout << "* \t * \t *\t*\t*\n";
    cout << "\t * \t * \t*\n" ;
    cout << "\t \t * \t \t \n" ;

    // QUESTION NO 2

    string Name;
    cout << "Enter your name: ";
    cin >> Name;

    int Reg_No;
    cout <<"Enter your registration number:";
    cin >> Reg_No;

    int session;
    cout << "Enter your session:";
    cin >> session;

    
    int Semester;
    cout <<"Enter your semester:";
    cin>> Semester;





    int DLD_Marks;
    cout << "Enter your DLD marks in integers:";
    cin >> DLD_Marks;

    int Eng_Marks;
    cout << "Enter your English marks in integers:";
    cin >> Eng_Marks;


    int Electronic;
    cout << "Enter your Electronics marks in integers:";
    cin >> Electronic;


    
    double Obtained_Marks = DLD_Marks + Eng_Marks + Electronic;
    

    double percentage = Obtained_Marks *100 / 300;
    







 
    cout<<"Name:"<< Name << '\n';
    cout<<"Registration NO: " << Reg_No << '\n';
    cout<<"Session: " << session << '\n';
    cout<<"Semester: " << Semester << '\n';
    cout<<"DlD Marks:" << DLD_Marks << '\n';
    cout<<"English Marks:" << Eng_Marks << '\n';
    cout<<"Elecronic Marks:" << Electronic << '\n';
    cout<<"Your Percentage: " << percentage << "%" << '\n';






//QUESTION NO 3

    int number_size = 123;
    float decimal_number = 3.234242;
    string string_size = "SAAD";
    double double_size = 4629739;
    char character_size = 'r';
    bool is_true = true;
    
    
    cout<<"Size of " << number_size <<"is " << sizeof(number_size) <<" Bytes \n";
    cout<<"Size of " << decimal_number <<"is " << sizeof(decimal_number) <<" Bytes\n";
    cout<<"Size of " << string_size <<" is " << sizeof(string_size) <<" Bytes\n";
    cout<<"Size of " << double_size <<" is " << sizeof(double_size) <<" Bytes\n";
    cout<<"Size of " << character_size <<" is " << sizeof(character_size) <<" Bytes\n";
    cout<<"Size of " << is_true <<" is " << sizeof(is_true) <<" Bytes\n";
    

    //QUESTION NO 4
    
    cout << "2 * 1 = " << 2*1 << "\n";
    cout << "2 * 1 = " << 2*2 << "\n";
    cout << "2 * 1 = " << 2*3 << "\n";
    cout << "2 * 1 = " << 2*4 << "\n";
    cout << "2 * 1 = " << 2*5 << "\n";
    cout << "2 * 1 = " << 2*6 << "\n";
    cout << "2 * 1 = " << 2*7 << "\n";
    cout << "2 * 1 = " << 2*8 << "\n";
    cout << "2 * 1 = " << 2*9 << "\n";
    cout << "2 * 1 = " << 2*10 << "\n";
    

    //QUESTION NO 5

    int a = 10;
    int b = 20;
    int temp;
    
    temp = a;
    
    a = b;
    b = a;
    cout<<temp << endl;
    cout<<b;



   






    
    return 0;
}


