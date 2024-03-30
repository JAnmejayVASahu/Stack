/*NOTR-> When the element of an array you entered most need in lexecographi*/
#include<bits/stdc++.h>
using namespace std;
string longestCommonPrefix(vector<string> &str){
    // keeping first string as const & compare
    string s1 = str[0];
    int ans_length = s1.size();
    for(int i=1; i<=str.size(); i++){
        int j = 0;
        while(j < s1.size() && j < str[i].size() && s1[j] == str[i][j]) //finding the common prefix string length
            j++;
        ans_length = min(ans_length, j); // updataion length of answer string
    }
    string ans = s1.substr(0,ans_length);
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
