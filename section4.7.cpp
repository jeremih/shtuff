#include <vector>
#include <iostream>
#include <string>
using std::vector; using std::cout; using std::string;

int conditional_test_exercise(vector<int> v1) {
	for (int i:v1) {
		(i%2==1)?(i*=2):i;
		cout<<i<<" ";
	}
	return 0;
}

int grade_organizer(int grade) {
	string finalgrade= (grade>90)?"high pass"
						:(grade>75)?"pass"
						:(grade==69)?"SM0KE BLUNTZ 420"
						:(grade>60)?"low pass":"fail";
	cout<<finalgrade<<" ";	
	return 0;
}