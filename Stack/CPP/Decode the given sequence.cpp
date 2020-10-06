#include <iostream>
#include <stack>
using namespace std;

string decode(string seq){
string result;
stack<int>stk;
for(int i=0;i<=seq.length();i++){
stk.push(i+1);
if(i == seq.length() || seq[i] == 'I'){
       while(!stk.empty())
            {
                result += to_string(stk.top());
                stk.pop();
            }
}
}
return result;
}

int main(){
string seq = "IDIDII";
cout<<"Minimum number is"<<decode(seq)<<endl;
return 0;
}
