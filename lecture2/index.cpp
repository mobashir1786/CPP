#include <iostream>
using namespace std;

int nextLine()
{
    cout << "This is the line 1." << endl;
    cout << "This is the line 2." << endl;
    return 0;
}

int main()
{
    cout << "Hello, World!" << endl;
    nextLine();
    return 0;
}

// #include <iostream>: Ye C++ ki standard library ki header file hai,
// jo input aur output ke liye use hoti hai.
// Iski help se hum cout aur cin jaise features use kar sakte hain.

// using namespace std: Isse hum standard library ke members ko
// std:: likhe bina directly use kar sakte hain.
// Jaise std::cout ki jagah sirf cout likh sakte hain.

// cout: Console/screen par output print karne ke liye use hota hai.

// endl: Output ko next line mein le jata hai aur output buffer ko flush karta hai.

// Boiler Plate Code: Ye C++ program ka basic structure hai.
// main() function program ka entry point hota hai.
// Program ki execution main() se start hoti hai.
// Yahan pehle "Hello, World!" print hota hai,
// phir nextLine() function call hota hai,
// jo do additional lines print karta hai.
// return 0; batata hai ki program successfully execute hua.

// int main()
// {
//     return 0;
// }

// variable in c++

// 1. Name letter ya underscore (_) se start hona chahiye.
// 2. Number se start nahi kar sakte.
// 3. Spaces allowed nahi hain.
// 4. Special characters generally allowed nahi hain.
// 5. C++ keywords ko variable name nahi bana sakte.
// 6. C++ case-sensitive hai.

// int age;          // ✅
// int userAge;      // ✅
// int user_age;     // ✅
// int age2;         // ✅
// int _age;         // ✅
// int 2age;         // ❌
// int user age;     // ❌
// int user-age;     // ❌

// #Primitive Data Types

// C++ mein **Data Type** batata hai ki variable mein kis type ka data store hoga aur us data ko memory mein kitni space chahiye.

// ## Primitive / Fundamental Data Types

// ### 1. bool
// `bool` ka use **True/False** value store karne ke liye hota hai.
// bool isPassed = true;
// bool isLoggedIn = false;
// * Size: **1 byte** (commonly)
// * Values: `true` / `false`
// * Use: Conditions, flags, yes/no type values

// ### 2. char
// `char` ka use **single character** store karne ke liye hota hai.
// char grade = 'A';
// char gender = 'M';
// * Size: **1 byte**
// * Common range: `-128 to 127` when `char` is signed
// * `unsigned char`: `0 to 255`
// * Character ko single quotes `' '` mein likhte hain.

// ### 3. short
// `short` ka use **small integer values** store karne ke liye hota hai.
// short age = 28;
// * Size: **2 bytes** (commonly)
// * Range: `-32,768 to 32,767`

// ### 4. int
// `int` ka use **normal whole/integer numbers** store karne ke liye hota hai.
// int age = 28;
// int marks = 95;
// * Size: **4 bytes** (commonly)
// * Range: `-2,147,483,648 to 2,147,483,647`
// * DSA mein `int` sabse commonly used data types mein se ek hai.

// ### 5. long
// `long` ka use **integer values** store karne ke liye hota hai.
// long population = 1000000;
// * Windows par commonly: **4 bytes**
// * Range: `-2,147,483,648 to 2,147,483,647`
