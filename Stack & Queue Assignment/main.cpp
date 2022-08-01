#include "Stack.h"
#include <iostream>


using namespace std;
bool isEnclosed(string s,Stack st){
    int a=0;
    char ele;
    int length = s.length();
    while (a != length/2)
    {
        ele = st.top();
        cout<<s[a]<<ele<<endl;
        if (ele != ')' && s[a] == '(' || s[a] == ')') {
            return false;
        }
        else if (ele != ']' && s[a] == '[' || s[a] == ']') {
            return false;
        }
        else if (ele != '}' && s[a] == '{' || s[a] == '}') {
            return false;
        }
        a++;
        st.pop();
    }
    return true;

}
int main(){
    Stack stack;
    string str;
    while (str != "q") {
        cin >> str;
        if(str != "q") {
            for (int i = 0; str[i] != '\0' ; i++) {
                stack.push(str[i]);
            }

            if (isEnclosed(str, stack)) {
                cout << str << " " << "Enclosed" << endl;
                stack.clear();
            }
            else {
                cout << str << " " << "nonEnclosed" << endl;
                stack.clear();
            }
        }
    }

    return 0;
}