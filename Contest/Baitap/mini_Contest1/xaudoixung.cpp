#include <iostream>
#include <string>
using namespace std;
 
bool checkPalindrome(string s){
    for (int i=0; i<=s.length()/2; i++)
        if (s[i]!=s[s.length()-i-1])
        	return 0;
    	return 1;
}
 
int main(){
    string s;
    getline(cin,s); 
    if (checkPalindrome(s))
        cout << "La chuoi palindrome";
    else
        cout << "Khong la chuoi palindrome";
}
