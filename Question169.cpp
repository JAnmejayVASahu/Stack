/*NOTR-> When the element of an array you entered most need in lexecographi*/
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &str){
    // sorting the array of string 
    sort(str.begin(), str.end()); 
    string s1 = str[0];// first string
    int i = 0;
    string s2 = str[str.size()-1]; // last string
    int j = 0;
    string ans = "";
    while(i < s1.size() && j<s2.size()){
        if(s1[i] == s2[j]){
            ans += s1[i];
            i++;
            j++;
        }else{
            break;
        }
    }
    return ans;
}
int main(){
    int n;
    cout << "Number of string: ";
    cin >> n;
    cout << "Enter string: ";
    vector <string> str(n);
    for(int i=0; i<n; i++){
        cin >> str[i];
    }
    cout << "Longest common prefix: "<<longestCommonPrefix(str) << endl;
    return 0;
}
