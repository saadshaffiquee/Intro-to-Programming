#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {

    // Question # 1
    // Read the entries of an array of 10 integers from a user. Compute x as the average of the 10 entries and then compute the average 
    // and display those entries that are greater than or equal to x. Print this final average.

    int num = 10;
    int number [num];
    int sum = 0;


    for (int i = 0; i < num; i++) {
        cin>>number[i];
        sum += number[i] ;
    }
    cout<<"The sum of the 10 number is " <<sum <<'\n';
    int avg = sum/num;
    cout<<"The avg of the 10 number is " <<avg<<'\n';

    int higher = 0;
    int numofele = 0;

    for (int i = 0; i < 10; i++) {
        if (number[i] > avg) {
            cout<<number[i] <<" ";
            higher = higher + number[i];
            numofele++;
        }


    }

    cout<<endl;
    cout<<"The sum of number higher than the avg is" <<higher <<endl;
    int finalavg = higher / numofele;
    cout<<'The avg after dividing higher and numofele is' <<finalavg;

}
    // Question # 2
    // Write a C++ code to find the minimum and maximum distance between two numbers of an array.
//Two way....
#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int n1index;
    int n2index;

    int data[5] = {2, 34, 23, 5, 7};

    for (int i = 0; i <5; i++) {
        if (data[i] == n1) {
            n1index = i;
        }
        if (data[i] == n2) {
            n2index = i;
        }
    }

    cout<<abs(n1index - n2index);

}

//One way
#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {
    int n1;
    cin>>n1;
    int n2;
    cin>>n2;
    int distance = 0;

    int data[5] = {2, 34, 23, 5, 7};

    for (int i = 0; i < 5; i++) {
        if (data[i] == n1) {
            for (int j = i; j < 10; j++) {
                if (data[j] == n2) {
                    break;
                }
                distance++;
            }
        }

    }
    cout<<distance -1;

}


// Question # 3
// Take input 10 numbers from user, sort them in ascending and descending order.


#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {

    // Using Manual logic


    int data[10] = {2, 34, 23, 5, 7, 4, 3, 2, 65, 56};

    cout<<"Ascending order: \n";

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j< 10; j++) {
            if (data[i] < data[j]) {
                swap(data[i], data[j]);
            }
        }
    }


    for (int i =0; i < 10; i++) {
        cout<<data[i] << " ";
    }

    cout<<endl;

    cout<<"Descending order: \n" ;

    for (int i = 0; i< 10; i++) {
        for (int j = 0; j< 10; j++) {
            if (data[i] > data[j]) {
                swap(data[i], data[j]);
            }
        }
    }


for (int i =0; i < 10; i++) {
    cout<<data[i] << " ";
}
}

// Using built in functions

#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {


    int data[10] = {2, 34, 23, 5, 7, 4, 3, 2, 65, 56};

    sort(data, data+10);


for (int i =0; i < 10; i++) {
    cout<<data[i] << " ";
}
}


// Question # 4
// Take array of 5 numbers from user, now print them in reverse order.


#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {

    int arr[5];

    for (int i = 0; i< 5; i++) {
        cin>>arr[i];
    }

    for (int i =4; i>=0; i--) {
        cout<<arr[i]<<" ";

    }

}

// Question # 5
// Take 10 float numbers from user, now find second greatest number from array.




#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>

int main() {
    float arr[10];
    float max = INT_MIN;
    float secmax = INT_MIN;


    for (int i = 0; i< 10; i++) {
        cin>>arr[i];
    }

    for (int i = 0; i< 10; i++){
        if (arr[i] > max) {
            max = arr[i];
        };
    }

    for (int i = 0; i< 10; i++) {
        if (arr[i] > secmax && arr[i] != max) {
            secmax = arr[i];
        }
    }

    cout<<"The max is number is " << max<<"\n";

    for (int i = 0; i < 10; i++) {
        cout<<arr[i] <<"  ";

    }

    cout<<endl;
    cout<<"The max is number is " << max<<"\n";
    cout<<"The second maximum number is " <<secmax;
}





#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>
// Question # 8
// Write a C++ program to generate the sum of left diagonal.
int main() {
    int arr[3][3] = {{11, 12, 13 }, {21, 22, 23}, {31, 32, 33}};
    int sum = 0;
    
    for (int i = 0; i < 3; i++) {
        for (int j= 0; j < 3; j++) {
            if (i == j) {
                cout<<arr[i][j] <<" ";
                sum  += arr[i][j];
            }
        }
    }
    cout<<endl;
    cout<<"The sum of left diagonal is" << sum;
}


#include<iostream>
using namespace std;
#include <climits>
#include <string>
#include <algorithm>
// Question # 11
// Write a C++ Program to store temperature of two different cities for a week and display it. Find the city with hottest temperature.

int main() {
    int arr[2][7] = {{12, 14, 15, 17, 20, 19, 14}, {14, 13, 13, 15, 17, 20, 24}};
    int seoulavg;
    int sum1 = 0;
    int sum2 = 0;
    int tokyoavg;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j<7; j++) {
            if (i ==  0) {
                sum1 += arr[i][j];

            } else if (i == 1) {
                sum2 += arr[i][j];
            }
        }
    }
    cout<<sum1<<" " <<sum2 <<"\n";
    seoulavg = sum1/7;
    tokyoavg = sum2/7;
    cout<<"The avg temperature in seoul is "<< seoulavg <<"\n";
    cout<<"The avg temperature in Tokyo is "<< tokyoavg;
}