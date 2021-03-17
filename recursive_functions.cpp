// Name: Joshua Lavieri
// Course: Data Structures

#include <iostream>
#include <string>

using namespace std;

//Name:Palindrome
//Pre-condition: Word has not been checked if it is a palindrome or not
//Post-condition: Has checked if the word is a palindrome or not
//Description: Checks to see if the word is a palindrome
bool palindrome(const string& s)
{
    int i = 0;
    int j = s.length() - 1;
    while(i < j)
    {
        if(s[i] != s[j])
        {
            return false;
        }
        else
        {
            i++;
            j--;
        }
    }
    return true;
}

//Name: printReversal
//Pre-condition: Word has not been displayed to the screen
//Post-condition: Word has been displayed to the screen
//Description: Displays word to the screen backwards
string printReversel(const string& s)
{
    string reversal = "";
    for(int i = s.length(); i >= 0; i--)
    {
        reversal = reversal + s[i];
    }
    return reversal;
};

//Name: printIterReversal
//Pre-condition: Word has not been displayed to the screen
//Post-condition: Word has been displayed to the screen
//Description: Displays word to the screen backwards although uses a recursive data structure
string printIterReverse(const string& s)
{
    if(s.length() <= 1)
        return s;
    else
    {
        return printIterReverse(s.substr(1)) + s.at(0);
    }
};

int main()
{
    string s = "";
    string response = "y";
    while (response == "y" || response == "Y")
    {
        
        cout << " please enter string: ";
        getline(cin, s);
        if (palindrome(s) == true)
        {
            cout << s << " is a palindrome \n";
        }
        else
        {
            cout << s << " is a not palindrome \n";
        }
        cout << "The Rec-reverse of \"" << s << "\" is \"" << printReversel(s) << "\"" << endl;
        cout << "The Iter-reverse of \"" << s << "\" is \"" << printIterReverse(s) << "\"" << endl;
        cout << endl << "Do you wish to continue (y or Y for yes; n or N for no? ";
        cin >> response;
        cin.ignore();
        
    }
    return 0;
    
}
