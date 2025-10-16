#include <iostream>
#include <string>
using namespace std;

int main() {
                                                  // Question no 1

//Print the few astricks (***). Try to make some pattern?

cout<<"************";
cout<<"**********";
cout<<"********";
cout<<"******";
cout<<"****";
cout<<"***";
cout<<"**";
cout<<"*";                           


                                              //Question no 2

//Make a CV that include your name, father name,  CNIC, Qualification, Semester, GPA etc?


                                              //Answer no 2


    std:: string Name = "Saad Shafique"; // This will print name
    std:: cout << Name <<'\n';
    std:: string Father_name = "Muhammad Shafique"; // This will print father name
    std:: cout <<Father_name <<'\n';
    std:: string Qualification = "FSc"; // This will print father name
    std:: cout <<Qualification <<'\n';
    const string CNIC = "13503-1817366-3"; // This will print CNIC number
    std:: cout << CNIC <<'\n';
    std:: string Semester = "1st Semester"; //This will print Semester
    std:: cout <<Semester <<'\n';
    float GPA = 4.00; // This will print GPA
    std::cout << GPA <<'\n';
    



//                                                   Question no 3

// Prepare the list of header files and there function?
                                                    //Answer no 3


// Definition in Headers

// A header file serves as a library interface that tells the compiler what functions and objects are available for use in the current program.


// 1-#Include <iostream>

// #Include<iostream> provides the basic input/output stream objects i-e std::out for standard output printing to the console.
// Above I used #Include<iostream>to print the some strings and functions like Name, Father Name etc.


// 2-#Include <string>

// #Include <string> provide the std::string class. Which enables us to print and stores the text.
// In the question above I used #Include <string> to store and print string like Name, Father Name etc.


// There are many other header files but for now we will stick to these two







                                                    //Question no 4

//Describe phases of compilation



/*The C++ compilation process happens in four main phases before your program runs.
    1. Preprocessing
        ◦ Handles lines starting with # (like #include, #define).
        ◦ It copies header files into your code and replaces macros.
        ◦ Output: a pure source file with all macros expanded.
    2. Compilation
        ◦ Converts the preprocessed code into assembly code (low-level instructions).
        ◦ Checks for syntax and semantic errors.
        ◦ Output: an object file (.obj or .o).
    3. Assembly
        ◦ Translates assembly code into machine code (binary instructions).
        ◦ Output: object file (machine-readable).
(Sometimes combined with the previous step by modern compilers.)
    4. Linking
        ◦ Combines all object files and required libraries into one executable file.
        ◦ Resolves external references (like functions from other files).
        ◦ Output: final .exe or a.out file.
In short:
Preprocessing → Compilation → Assembly → Linking → Execution*/




                                                //Question no 5

//Describe different types of computer languages (at least 8)

                                               /*Answer no 5



1. **Machine Language**

   * The lowest-level language (0s and 1s).
   * Directly understood by the computer’s CPU.
   * Example: `10110000 01100001`

2. **Assembly Language**

   * Uses short codes called **mnemonics** instead of binary.
   * Easier than machine language but still hardware-specific.
   * Example: `MOV A, B`

3. **High-Level Language**

   * Closer to human language, easy to read and write.
   * Compiled or interpreted into machine code.
   * Example: C, C++, Java, Python.

4. **Procedural Language**

   * Based on step-by-step procedures or functions.
   * Example: C, Pascal.

5. **Object-Oriented Language**

   * Organizes code into objects (data + behavior).
   * Example: C++, Java, Python.

6. **Scripting Language**

   * Used for automating tasks and web scripting.
   * Example: JavaScript, Python, PHP.

7. **Functional Language**

   * Focuses on functions and avoids changing state.
   * Example: Lisp, Haskell.

8. **Markup / Query Language**

   * Used to structure or query data.
   * Example: HTML (markup), SQL (query). */









    return 0;
}