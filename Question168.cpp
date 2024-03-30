#include<bits/stdc++.h>
using namespace std;
bool isIsomorphic(string s1, string s2){
    vector<int>v1(128, -1);
    vector<int>v2(128, -1);
    if(s1.length() != s2.length()){
        cout << "Those aren't isomorphic";
    }
    for(int i=0; i<s1.length(); i++){ // checking if value of character at idx i match in both vector
       if( v1[s1[i]] != v2[s2[i]] ){
        return false;
       }
       v1[s1[i]] = v2[s2[i]] = i; // storing string position in vector for charcter at idx i
    }
    return true;
}
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    if(isIsomorphic(s1, s2)){
        cout << "Those strings are isomorphic.";
    }else{
        cout << "Those are not isomorphic.";
    }
    return 0;
}
