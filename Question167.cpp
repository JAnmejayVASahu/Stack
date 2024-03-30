#include<bits/stdc++.h>
using namespace  std;
bool isAnagram(string s1, string s2){
    // create frequency array
    vector<int>freq(26, 0);
    // if length are difference for s1 and s2 both return  false
    if( s1.length() != s2.length() ) return false;
    // stored of qrequency of charcter in s1 & s2
    for(int i=0; i<s1.length(); i++){
        freq[s1[i] - 'a']++;
        freq[s2[i] - 'a']--;
    }
    // checking if freqency of every character is 0
    for(int i=0; i<26; i++){
        if(freq[i] != 0){ // this means not an anagram
            return false;
        }
    }
    return true;
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(isAnagram(s1, s2) ) cout << "Strings are anagram.";
    else cout << "strings are not anagram.";
   return 0; 
}
