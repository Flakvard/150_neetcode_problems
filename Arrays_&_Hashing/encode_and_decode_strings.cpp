#include <iostream>
#include <vector>
#include <list>
#include <bits/stdc++.h>
#include <string>
using namespace std;
string encode(list<string> strs);
list<string> decode(string strs);

int main(){

list<string> strs ({"Hello","Mr.","Batman","long","time","no","see"});
string encoded = "";
encoded = encode(strs);
decode(encoded);

}

/*
* @param strs: a list of strings
* @return: encodes a list of strings to a single string.
*/
string encode(list<string> strs) {
    string encoded = "";
    char encode_word = ' '; 
    for(auto str : strs){
        for(int i = 0; i < str.size(); i++){
            encode_word = str[i]+4;
            encoded.push_back(encode_word);
        }
        encoded.push_back(';');
    }
    return encoded;
}

/*
* @param str: A string
* @return: dcodes a single string to a list of strings
*/
list<string> decode(string strs) {
    list<string> decoded_list;
    string decoded_words = "";
    char decoded_word = ' ';
    for(int i = 0; i < strs.size(); i++){
        if(strs[i] == ';'){
            decoded_list.push_back(decoded_words);
            decoded_words = "";
        }else{
            decoded_word = strs[i]-4;
            decoded_words.push_back(decoded_word);
        }
    }
    return decoded_list;
}
