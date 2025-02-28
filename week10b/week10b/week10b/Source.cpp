#include <iostream>
#include <stack>
#include <string>
/*
Souces usecd: 
https://www.geeksforgeeks.org/reverse-the-sentence-using-stack/
*/

#include <string>
using namespace std;

int main() {
   
    stack<string> reversestring;

    string userstring;
    cout << "Enter string: " << endl;
    getline(cin, userstring);
  
    string temp = "";
   
    for (int i = 0; i < userstring.length(); i++){
           temp = userstring[i] + temp;
  
    }
   
    reversestring.push(temp);

    while (!reversestring.empty()) {
        temp = reversestring.top();
        cout << temp << " ";
        reversestring.pop();
    }
    cout << endl;
    
    return 0;
}


