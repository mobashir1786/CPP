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