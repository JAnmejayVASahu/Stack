#include<iostream>
using namespace std;
int longestOnes(string str, int flip){
    int start = 0;
    int end = 0;
    int zero_count = 0;
    int max_length = 0;
    for(;end<str.length(); end++){
        if(str[end] == '0'){
            zero_count++;
        }
        while(zero_count > flip){
            if(str[start]=='0') zero_count--;
            start++;// contracting our window
        }
        max_length = max(max_length, end - start +1);
    }
    return max_length;
}
int main(){
    string str;
    cout << "Enter binary string-> ";
    cin >> str;
    int k;
    cout << "Enter flip-> ";
    cin >> k;
    cout << longestOnes(str, k) <<endl;
    return 0;
}
