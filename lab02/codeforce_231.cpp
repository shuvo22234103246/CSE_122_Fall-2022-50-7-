//codeforce_problem_no_231A
//problem_name_Team;



#include<iostream>
using namespace std;
int main() {
    int a,b,c,num,c=0;
    cin >> num;
    for(int i =0; i<num; i++) {
        cin >> a >> b >> c;
        if((a == 1 && b == 1 ) || (b == 1 && c == 1) || ( a == 1 && c == 1)) {
            c += 1;
        }

    }


    cout << c;



}
