#include<iostream>
using namespace std;

int main() {
    cout<<"Enter the number: ";
    int max_limit;
    cin>>max_limit;
    int even_num = 0;
    int i = 1;
    int odd_num = 0;
    while (i <= max_limit) {

        if (i % 2 == 0) {
            even_num += i;
            i++;

        } else if (i % 2 != 0 ) {
            odd_num += i;
            i++;
        }

    }

    cout<<"Sum of even numbers till the number " <<max_limit << " is " << even_num <<endl;
    cout<<"Sum of odd numbers till the number " <<max_limit << " is " << odd_num <<endl;

   return 0;
}