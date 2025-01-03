#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

double findGrade(double score){
    double grade;
    if (score > 90 && score <= 100) {
        grade = double('A');
    }else if (score > 75 && score <= 90) {
        grade = double('B');
    }else if (score > 60 && score <= 75) {
        grade = double('C');
    }else if (score > 45 && score <= 60) {
        grade = double('D');
    }else if (score >= 0 && score <= 45) {
        grade = double('F');
    }
    return grade;
}

int main(){
	//Input the number of students
	int N,i = 0;
	cout << "Enter the number of students: ";
	cin >> N;
	string name[N];
	float score[N];	
	
	//Store names and scores of students into an array 
	while(i < N){
		cout << "Name of student " << i+1 << ": ";
		cin.ignore();
		getline(cin,name[i]);
		cout << "Score of student " << i+1 << ": ";
		cin >> score[i];
		i++;
	}
	
	//Print names scores and grades
	i = 0;
	cout << "---------------------------------------------\n";
	cout << setw(25) << "Name" << setw(8) << "Score" << setw(8) << "Grade" << "\n";
	cout << "---------------------------------------------\n";
	while(i < N){
		cout << setw(25) << name[i] << setw(8) << score[i] << setw(8) << char(findGrade(score[i])) << "\n";
		i++;
	} 
	cout << "---------------------------------------------\n";

	return 0;
}
