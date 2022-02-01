#include <iostream>
#include<string>
using namespace std;

void reverse(string s){
  int i=0;
  int j=s.length()-1;
  while(i<=j){
    swap(s[i++],s[j--]);
  }
}

int main() {
string s="My name is prajakta";
string temp=" ";
for(int i=0;(s[i]==' ' ||s[i]=='\0');i++){
  temp.push_back(s[i]);

}

reverse(temp);
string ans="";
for(int j=0;j<temp.length();j++){
  ans.push_back(temp[j]);
}




}