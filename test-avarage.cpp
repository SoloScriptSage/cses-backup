
#include <bits/stdc++.h>
#include <stdlib.h>

using namespace std;

int num,sum, choice;
float calcAverage(){
    for(int i = 0; i<5; ++i)
        {
            cout << "Grade " << i << ": ";
            cin >> num;
            sum += num;
        }

    return sum/5;
}

string determineGrade(float grade){

    string mark;

    if(grade <= 59) mark="F";
    else if(grade>=60 && grade<=69) mark="D";
    else if(grade>=70 && grade<=79) mark="C";
    else if(grade>=80 && grade<=89) mark="B";
    else if(grade>=90 && grade<=100) mark="A";
    else mark="A+";

    return mark;
}

void menu(){
    while(true){
        cout << "1. Calculate average grade" << endl;
        cout << "2. Determine grade by score" << endl;
        cout << "3. Quit" << endl;
        cout << "Choice: ";
        cin >> choice;

        if(choice==1){
            float average = calcAverage();
            cout << "Average score is: " << average << ", and your grade is " << determineGrade(average) << "\n\n";
        }
        else if(choice==2){
            cout << "Grade 0-100? " << endl;
            float grade;
            cin >> grade;
            cout << determineGrade(grade) << endl;
        }
        else{ exit(0); }
    }
}

int main(){
    menu();
    return 0;
}
