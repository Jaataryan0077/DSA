 #include<iostream>
using namespace std;
void lowerTOupper(string &s,int index){
if(index==-1){
    return;
}
s[index]='A'+s[index]-
'a';
return lowerTOupper(s,index-1);



}
int main(){
    string s="aryan";
    lowerTOupper(s,4);
cout<<s;
}