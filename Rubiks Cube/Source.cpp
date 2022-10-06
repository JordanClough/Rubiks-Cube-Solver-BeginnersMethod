#include <iostream>
#include <string>
#include <vector>

using namespace std;

char topArr[9];
char frontArr[9];
char backArr[9];
char leftArr[9];
char rightArr[9];
char downArr[9];

vector<string>solution;
//CHANGE
void initCube() {
	cout << "Enter a 9 colors for each side." << endl;
	cout << "Up Side:" << endl;
	for (int i = 0; i < 9; i++) {
		cin >> topArr[i];
	}
	cout << "Front Side:" << endl;
	for (int i = 0; i < 9; i++) {
		cin >> frontArr[i];
	}
	cout << "Back Side:" << endl;
	for (int i = 0; i < 9; i++) {
		cin >> backArr[i];
	}
	cout << "Left Side:" << endl;
	for (int i = 0; i < 9; i++) {
		cin >> leftArr[i];
	}
	cout << "Right Side:" << endl;
	for (int i = 0; i < 9; i++) {
		cin >> rightArr[i];
	}
	cout << "Down Side:" << endl;
	for (int i = 0; i < 9; i++) {
		cin >> downArr[i];
	}
}
void U() {

	solution.push_back("U ");
	char tempTopArr[9];
	for (int i = 0; i < 9; i++) {
		tempTopArr[i] = topArr[i];
	}
	topArr[0] = tempTopArr[6];
	topArr[1] = tempTopArr[3];
	topArr[2] = tempTopArr[0];
	topArr[3] = tempTopArr[7];
	topArr[5] = tempTopArr[1];
	topArr[6] = tempTopArr[8];
	topArr[7] = tempTopArr[5];
	topArr[8] = tempTopArr[2];

	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[i];
	}
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[i];
	}
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[i];
	}
	char temp3Left[3];
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[i];
	}

	for (int i = 0; i < 3; i++) {
		backArr[i] = temp3Left[i];
	}
	for (int i = 0; i < 3; i++) {
		rightArr[i] = temp3Back[i];
	}
	for (int i = 0; i < 3; i++) {
		frontArr[i] = temp3Right[i];
	}
	for (int i = 0; i < 3; i++) {
		leftArr[i] = temp3Front[i];
	}
}
void Up() {
	solution.push_back("U' ");
	char tempTopArr[9];
	for (int i = 0; i < 9; i++) {
		tempTopArr[i] = topArr[i];
	}
	topArr[0] = tempTopArr[2];
	topArr[1] = tempTopArr[5];
	topArr[2] = tempTopArr[8];
	topArr[3] = tempTopArr[1];
	topArr[5] = tempTopArr[7];
	topArr[6] = tempTopArr[0];
	topArr[7] = tempTopArr[3];
	topArr[8] = tempTopArr[6];

	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[i];
	}
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[i];
	}
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[i];
	}
	char temp3Left[3];
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[i];
	}

	for (int i = 0; i < 3; i++) {
		backArr[i] = temp3Right[i];
	}
	for (int i = 0; i < 3; i++) {
		rightArr[i] = temp3Front[i];
	}
	for (int i = 0; i < 3; i++) {
		frontArr[i] = temp3Left[i];
	}
	for (int i = 0; i < 3; i++) {
		leftArr[i] = temp3Back[i];
	}
}
void R() {
	solution.push_back("R ");
	char tempRightArr[9];
	for (int i = 0; i < 9; i++) {
		tempRightArr[i] = rightArr[i];
	}
	rightArr[0] = tempRightArr[6];
	rightArr[1] = tempRightArr[3];
	rightArr[2] = tempRightArr[0];
	rightArr[3] = tempRightArr[7];
	rightArr[5] = tempRightArr[1];
	rightArr[6] = tempRightArr[8];
	rightArr[7] = tempRightArr[5];
	rightArr[8] = tempRightArr[2];
	char temp3Back[3];
	int z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 2;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 2;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 0;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 2;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
}
void Rp() {
	solution.push_back("R' ");
	char tempRightArr[9];
	for (int i = 0; i < 9; i++) {
		tempRightArr[i] = rightArr[i];
	}
	rightArr[0] = tempRightArr[2];
	rightArr[1] = tempRightArr[5];
	rightArr[2] = tempRightArr[8];
	rightArr[3] = tempRightArr[1];
	rightArr[5] = tempRightArr[7];
	rightArr[6] = tempRightArr[0];
	rightArr[7] = tempRightArr[3];
	rightArr[8] = tempRightArr[6];
	char temp3Back[3];
	int z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 2;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 2;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 0;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
	z = 2;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
}
void L() {
	solution.push_back("L ");
	char tempLeftArr[9];
	for (int i = 0; i < 9; i++) {
		tempLeftArr[i] = leftArr[i];
	}
	leftArr[0] = tempLeftArr[6];
	leftArr[1] = tempLeftArr[3];
	leftArr[2] = tempLeftArr[0];
	leftArr[3] = tempLeftArr[7];
	leftArr[5] = tempLeftArr[1];
	leftArr[6] = tempLeftArr[8];
	leftArr[7] = tempLeftArr[5];
	leftArr[8] = tempLeftArr[2];
	char temp3Back[3];
	int z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 0;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 0;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 2;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
}
void Lp() {
	solution.push_back("L' ");
	char tempLeftArr[9];
	for (int i = 0; i < 9; i++) {
		tempLeftArr[i] = leftArr[i];
	}
	leftArr[0] = tempLeftArr[2];
	leftArr[1] = tempLeftArr[5];
	leftArr[2] = tempLeftArr[8];
	leftArr[3] = tempLeftArr[1];
	leftArr[5] = tempLeftArr[7];
	leftArr[6] = tempLeftArr[0];
	leftArr[7] = tempLeftArr[3];
	leftArr[8] = tempLeftArr[6];
	char temp3Back[3];
	int z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 0;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 0;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 2;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
}
void F() {
	solution.push_back("F ");
	char tempFrontArr[9];
	for (int i = 0; i < 9; i++) {
		tempFrontArr[i] = frontArr[i];
	}
	frontArr[0] = tempFrontArr[6];
	frontArr[1] = tempFrontArr[3];
	frontArr[2] = tempFrontArr[0];
	frontArr[3] = tempFrontArr[7];
	frontArr[5] = tempFrontArr[1];
	frontArr[6] = tempFrontArr[8];
	frontArr[7] = tempFrontArr[5];
	frontArr[8] = tempFrontArr[2];
	char temp3Left[3];
	int z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 6;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z++;
	}
	z = 0;
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[z];
		z += 3;
	}
	z = 0;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z++;
	}

	z = 2;
	for (int i = 0; i < 3; i++) {
		leftArr[z] = temp3Down[i];
		z += 3;
	}
	z = 6;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Left[i];
		z++;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		rightArr[z] = temp3Top[i];
		z += 3;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Right[i];
		z++;
	}
}
void Fp() {
	solution.push_back("F' ");
	char tempFrontArr[9];
	for (int i = 0; i < 9; i++) {
		tempFrontArr[i] = frontArr[i];
	}
	frontArr[0] = tempFrontArr[2];
	frontArr[1] = tempFrontArr[5];
	frontArr[2] = tempFrontArr[8];
	frontArr[3] = tempFrontArr[1];
	frontArr[5] = tempFrontArr[7];
	frontArr[6] = tempFrontArr[0];
	frontArr[7] = tempFrontArr[3];
	frontArr[8] = tempFrontArr[6];
	char temp3Left[3];
	int z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 6;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z++;
	}
	z = 0;
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[z];
		z += 3;
	}
	z = 0;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z++;
	}

	z = 2;
	for (int i = 2; i >= 0; i--) {
		leftArr[z] = temp3Top[i];
		z += 3;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Right[i];
		z++;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		rightArr[z] = temp3Down[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Left[i];
		z++; 
	}
}
void B() {
	solution.push_back("B ");
	char tempBackArr[9];
	for (int i = 0; i < 9; i++) {
		tempBackArr[i] = backArr[i];
	}
	backArr[0] = tempBackArr[6];
	backArr[1] = tempBackArr[3];
	backArr[2] = tempBackArr[0];
	backArr[3] = tempBackArr[7];
	backArr[5] = tempBackArr[1];
	backArr[6] = tempBackArr[8];
	backArr[7] = tempBackArr[5];
	backArr[8] = tempBackArr[2];
	char temp3Left[3];
	int z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z++;
	}
	z = 2;
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[z];
		z += 3;
	}
	z = 6;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z++;
	}

	z = 0;
	for (int i = 2; i >= 0; i--) {
		leftArr[z] = temp3Top[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Right[i];
		z++;
	}
	z = 2;
	for (int i = 2; i >= 0; i--) {
		rightArr[z] = temp3Down[i];
		z += 3;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Left[i];
		z++;
	}
}
void Bp() {
	solution.push_back("B' ");
	char tempBackArr[9];
	for (int i = 0; i < 9; i++) {
		tempBackArr[i] = backArr[i];
	}
	backArr[0] = tempBackArr[2];
	backArr[1] = tempBackArr[5];
	backArr[2] = tempBackArr[8];
	backArr[3] = tempBackArr[1];
	backArr[5] = tempBackArr[7];
	backArr[6] = tempBackArr[0];
	backArr[7] = tempBackArr[3];
	backArr[8] = tempBackArr[6];
	char temp3Left[3];
	int z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z++;
	}
	z = 2;
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[z];
		z += 3;
	}
	z = 6;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z++;
	}

	z = 0;
	for (int i = 0; i < 3; i++) {
		leftArr[z] = temp3Down[i];
		z += 3;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Left[i];
		z++;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		rightArr[z] = temp3Top[i];
		z += 3;
	}
	z = 6;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Right[i];
		z++;
	}
}
void D() {
	solution.push_back("D ");
	char tempDownArr[9];
	for (int i = 0; i < 9; i++) {
		tempDownArr[i] = downArr[i];
	}
	downArr[0] = tempDownArr[6];
	downArr[1] = tempDownArr[3];
	downArr[2] = tempDownArr[0];
	downArr[3] = tempDownArr[7];
	downArr[5] = tempDownArr[1];
	downArr[6] = tempDownArr[8];
	downArr[7] = tempDownArr[5];
	downArr[8] = tempDownArr[2];
	char temp3Left[3];
	int z = 6;
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[z];
		z++;
	}
	char temp3Front[3];
	z = 6;
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z++;
	}
	z = 6;
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[z];
		z++;
	}
	z = 6;
	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z++;
	}

	z = 6;
	for (int i = 0; i < 3; i++) {
		leftArr[z] = temp3Back[i];
		z++;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Left[i];
		z++;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		rightArr[z] = temp3Front[i];
		z++;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		backArr[z] = temp3Right[i];
		z++;
	}
}
void Dp() {
	solution.push_back("D' ");
	char tempDownArr[9];
	for (int i = 0; i < 9; i++) {
		tempDownArr[i] = downArr[i];
	}
	downArr[0] = tempDownArr[2];
	downArr[1] = tempDownArr[5];
	downArr[2] = tempDownArr[8];
	downArr[3] = tempDownArr[1];
	downArr[5] = tempDownArr[7];
	downArr[6] = tempDownArr[0];
	downArr[7] = tempDownArr[3];
	downArr[8] = tempDownArr[6];
	char temp3Left[3];
	int z = 6;
	for (int i = 0; i < 3; i++) {
		temp3Left[i] = leftArr[z];
		z++;
	}
	char temp3Front[3];
	z = 6;
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z++;
	}
	z = 6;
	char temp3Right[3];
	for (int i = 0; i < 3; i++) {
		temp3Right[i] = rightArr[z];
		z++;
	}
	z = 6;
	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z++;
	}

	z = 6;
	for (int i = 0; i < 3; i++) {
		leftArr[z] = temp3Front[i];
		z++;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Right[i];
		z++;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		rightArr[z] = temp3Back[i];
		z++;
	}
	z = 6;
	for (int i = 0; i < 3; i++) {
		backArr[z] = temp3Left[i];
		z++;
	}
}
void M() {
	solution.push_back("M ");
	char temp3Top[3];
	int z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 1;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 1;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}
	z = 1;
	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	
	z = 1;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
} 
void Mp() {
	solution.push_back("M' ");
	char temp3Top[3];
	int z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 1;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 1;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}
	z = 1;
	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}

	z = 1;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
}

void r() {
	solution.push_back("r ");
	//M() but no addition to solution
	char temp3Top[3];
	int z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 1;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 1;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}
	z = 1;
	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}

	z = 1;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
	//R() but no addition to solution
	char tempRightArr[9];
	for (int i = 0; i < 9; i++) {
		tempRightArr[i] = rightArr[i];
	}
	rightArr[0] = tempRightArr[6];
	rightArr[1] = tempRightArr[3];
	rightArr[2] = tempRightArr[0];
	rightArr[3] = tempRightArr[7];
	rightArr[5] = tempRightArr[1];
	rightArr[6] = tempRightArr[8];
	rightArr[7] = tempRightArr[5];
	rightArr[8] = tempRightArr[2];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 0;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 2;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
}
void rp() {
	solution.push_back("r' ");
	//Mp but no addition to solution
	char temp3Top[3];
	int z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 1;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 1;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}
	z = 1;
	char temp3Back[3];
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}

	z = 1;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
	//Rp() but no addition to solution
	char tempRightArr[9];
	for (int i = 0; i < 9; i++) {
		tempRightArr[i] = rightArr[i];
	}
	rightArr[0] = tempRightArr[2];
	rightArr[1] = tempRightArr[5];
	rightArr[2] = tempRightArr[8];
	rightArr[3] = tempRightArr[1];
	rightArr[5] = tempRightArr[7];
	rightArr[6] = tempRightArr[0];
	rightArr[7] = tempRightArr[3];
	rightArr[8] = tempRightArr[6];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 0;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
	z = 2;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 2;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
}

void l() {
	solution.push_back("l ");
	//L but no addition to solution
	char tempLeftArr[9];
	for (int i = 0; i < 9; i++) {
		tempLeftArr[i] = leftArr[i];
	}
	leftArr[0] = tempLeftArr[6];
	leftArr[1] = tempLeftArr[3];
	leftArr[2] = tempLeftArr[0];
	leftArr[3] = tempLeftArr[7];
	leftArr[5] = tempLeftArr[1];
	leftArr[6] = tempLeftArr[8];
	leftArr[7] = tempLeftArr[5];
	leftArr[8] = tempLeftArr[2];
	char temp3Back[3];
	int z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 0;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 0;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 2;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
	//Mp but no addition to solution
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}

	z = 1;
	for (int i = 2; i >= 0; i--) {
		topArr[z] = temp3Back[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Top[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		downArr[z] = temp3Front[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Down[i];
		z += 3;
	}
}

void lp() {
	solution.push_back("l' ");
	//Lp() but no additon to solution
	char tempLeftArr[9];
	for (int i = 0; i < 9; i++) {
		tempLeftArr[i] = leftArr[i];
	}
	leftArr[0] = tempLeftArr[2];
	leftArr[1] = tempLeftArr[5];
	leftArr[2] = tempLeftArr[8];
	leftArr[3] = tempLeftArr[1];
	leftArr[5] = tempLeftArr[7];
	leftArr[6] = tempLeftArr[0];
	leftArr[7] = tempLeftArr[3];
	leftArr[8] = tempLeftArr[6];
	char temp3Back[3];
	int z = 2;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}
	char temp3Top[3];
	z = 0;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 0;
	char temp3Front[3];
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 0;
	char temp3Down[3];
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}

	z = 2;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 0;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 0;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
	//M() but no addition to the solution
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Top[i] = topArr[z];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Front[i] = frontArr[z];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Down[i] = downArr[z];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		temp3Back[i] = backArr[z];
		z += 3;
	}

	z = 1;
	for (int i = 0; i < 3; i++) {
		topArr[z] = temp3Front[i];
		z += 3;
	}
	z = 1;
	for (int i = 0; i < 3; i++) {
		frontArr[z] = temp3Down[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		downArr[z] = temp3Back[i];
		z += 3;
	}
	z = 1;
	for (int i = 2; i >= 0; i--) {
		backArr[z] = temp3Top[i];
		z += 3;
	}
}
void optiSolution() {
	//Read 4
	for (int i = 0; i < (solution.size() - 3); i++) {
		if (solution.size() < 4) {
			break;
		}
		if (solution[i] == solution[i + 1] && solution[i + 1] == solution[i + 2] && solution[i + 2] == solution[i + 3]) {
			solution.erase(solution.begin() + i);
			solution.erase(solution.begin() + i);
			solution.erase(solution.begin() + i);
			solution.erase(solution.begin() + i);
			i--;
		}
	}
	//Read 3
	for (int i = 0; i < (solution.size() - 2); i++) {
		if (solution.size() < 3) {
			break;
		}
		if (solution[i] == solution[i + 1] && solution[i + 1] == solution[i + 2]) {
			solution.erase(solution.begin() + i);
			solution.erase(solution.begin() + i);
			if (solution[i][1] == ' ') {
				solution[i][1] = '\'';
			}
			else {
				solution[i][1] = ' ';
			}
			i--;
		}
	}
	//Read 2
	for (int i = 0; i < (solution.size() - 1); i++) {
		if (solution.size() < 2) {
			break;
		}
		if (solution[i][0] == solution[i + 1][0] && solution[i][1] != solution[i + 1][1]) {
			solution.erase(solution.begin() + i);
			solution.erase(solution.begin() + i);
			i--;
		}
	}
	//Make Doubles into 1 ex. U U = U2
	for (int i = 0; i < (solution.size() - 1); i++) {
		if (solution.size() < 2) {
			break;
		}
		if (solution[i][0] == solution[i + 1][0]) {
			solution.erase(solution.begin() + i);
			solution[i][1] = '2';
			solution[i].push_back(' ');
		}
	}
}
void printSolution() {
	for (int F = 0; F < solution.size(); F++) {
		cout << solution[F];
	}
	cout << endl;
}
void bottomCross() {
	while (downArr[1] != downArr[4] || downArr[3] != downArr[4] || downArr[5] != downArr[4] || downArr[7] != downArr[4] || frontArr[7] != frontArr[4] || rightArr[7] != rightArr[4] || backArr[7] != backArr[4] || leftArr[7] != leftArr[4]) {//When bottom cross is not solved
		//White is facing out on sides
		if (frontArr[3] == downArr[4]) {
			while (topArr[3] == downArr[4]) {
				U();
			}
			if (leftArr[5] == leftArr[4]) {
				L();
			}
			else {
				int count = 0;
				while (downArr[3] == downArr[4]) {
					D();
					count++;
				}
				Lp();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (frontArr[5] == downArr[4]) {
			while (topArr[5] == downArr[4]) {
				U();
			}
			if (rightArr[3] == rightArr[4]) {
				Rp();
			}
			else {
				int count = 0;
				while (downArr[5] == downArr[4]) {
					D();
					count++;
				}
				R();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (rightArr[3] == downArr[4]) {
			while (topArr[7] == downArr[4]) {
				U();
			}
			if (frontArr[5] == frontArr[4]) {
				F();
			}
			else {
				int count = 0;
				while (downArr[2] == downArr[4]) {
					D();
					count++;
				}
				Fp();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (rightArr[5] == downArr[4]) {
			while (topArr[1] == downArr[4]) {
				U();
			}
			if (backArr[3] == backArr[4]) {
				Bp();
			}
			else {
				int count = 0;
				while (downArr[7] == downArr[4]) {
					D();
					count++;
				}
				B();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (leftArr[5] == downArr[4]) {
			while (topArr[7] == downArr[4]) {
				U();
			}
			if (frontArr[3] == frontArr[4]) {
				Fp();
			}
			else {
				int count = 0;
				while (downArr[2] == downArr[4]) {
					D();
					count++;
				}
				F();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (leftArr[3] == downArr[4]) {
			while (topArr[2] == downArr[4]) {
				U();
			}
			if (backArr[5] == backArr[4]) {
				B();
			}
			else {
				int count = 0;
				while (downArr[7] == downArr[4]) {
					D();
					count++;
				}
				Bp();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (backArr[3] == downArr[4]) {
			while (topArr[5] == downArr[4]) {
				U();
			}
			if (rightArr[5] == rightArr[4]) {
				R();
			}
			else {
				int count = 0;
				while (downArr[5] == downArr[4]) {
					D();
					count++;
				}
				Rp();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		if (backArr[5] == downArr[4]) {
			while (topArr[3] == downArr[4]) {
				U();
			}
			if (leftArr[3] == rightArr[4]) {
				Lp();
			}
			else {
				int count = 0;
				while (downArr[3] == downArr[4]) {
					D();
					count++;
				}
				L();
				for (int i = 0; i < count; i++) {
					Dp();
				}
			}
		}
		//White is on the bottom but in the wrong position
		if ((downArr[1] == downArr[4]) && (frontArr[7] != frontArr[4])) {
			while (topArr[7] == downArr[4]) {
				U();
			}
			F();
			F();
		}
		if ((downArr[3] == downArr[4]) && (leftArr[7] != leftArr[4])) {
			while (topArr[3] == downArr[4]) {
				U();
			}
			L();
			L();
		}
		if ((downArr[5] == downArr[4]) && (rightArr[7] != rightArr[4])) {
			while (topArr[5] == downArr[4]) {
				U();
			} 
			R();
			R();
		}
		if ((downArr[7] == downArr[4]) && (backArr[7] != backArr[4])) {
			while (topArr[1] == downArr[4]) {
				U();
			}
			B();
			B();
		}
		while (topArr[1] == downArr[4] || topArr[3] == downArr[4] || topArr[5] == downArr[4] || topArr[7] == downArr[4]) {//When White is on Top Arr
			if (topArr[1] == downArr[4] && backArr[1] == backArr[4]) {
				B();
				B();
			}
			else if (topArr[3] == downArr[4] && leftArr[1] == leftArr[4]) {
				L();
				L();
			}
			else if (topArr[5] == downArr[4] && rightArr[1] == rightArr[4]) {
				R();
				R();
			}
			else if (topArr[7] == downArr[4] && frontArr[1] == frontArr[4]) {
				F();
				F();
			}
			else {
				U();
			}
		}
		//White facing out on top of side
		while (frontArr[1] == downArr[4] || leftArr[1] == downArr[4] || backArr[1] == downArr[4] || rightArr[1] == downArr[4]) {
			if (frontArr[1] == downArr[4] && topArr[7] == rightArr[4]) {
				if (frontArr[7] == frontArr[4] && downArr[1] == downArr[4]) {
					F();
					Rp();
					Fp();
				}
				else {
					F();
					Rp();
				}
			}
			if (frontArr[1] == downArr[4] && topArr[7] == leftArr[4]) {
				if (frontArr[7] == frontArr[4] && downArr[1] == downArr[4]) {
					Fp();
					L();
					F();
				}
				else {
					Fp();
					L();
				}
			}
			if (rightArr[1] == downArr[4] && topArr[5] == frontArr[4]) {
				if (rightArr[7] == rightArr[4] && downArr[5] == downArr[4]) {
					Rp();
					F();
					R();
				}
				else {
					Rp();
					F();
				}
			}
			if (rightArr[1] == downArr[4] && topArr[5] == backArr[4]) {
				if (rightArr[7] == rightArr[4] && downArr[5] == downArr[4]) {
					R();
					Bp();
					Rp();
				}
				else {
					R();
					Bp();
				}
			}
			if (backArr[1] == downArr[4] && topArr[1] == rightArr[4]) {
				if (backArr[7] == backArr[4] && downArr[7] == downArr[4]) {
					Bp();
					R();
					B();
				}
				else {
					Bp();
					R();
				}
			}
			if (backArr[1] == downArr[4] && topArr[1] == leftArr[4]) {
				if (backArr[7] == backArr[4] && downArr[7] == downArr[4]) {
					B();
					Lp();
					Bp();
				}
				else {
					B();
					Lp();
				}
			}
			if (leftArr[1] == downArr[4] && topArr[3] == backArr[4]) {
				if (leftArr[7] == leftArr[4] && downArr[3] == downArr[4]) {
					Lp();
					B();
					L();
				}
				else {
					Lp();
					B();
				}
			}
			if (leftArr[1] == downArr[4] && topArr[3] == frontArr[4]) {
				if (leftArr[7] == leftArr[4] && downArr[3] == downArr[4]) {
					L();
					Fp();
					Lp();
				}
				else {
					L();
					Fp();
				}
			}
			if (frontArr[1] == downArr[4] || leftArr[1] == downArr[4] || backArr[1] == downArr[4] || rightArr[1] == downArr[4]) {
				U();
			}
		}
		//White is facing out on the side in Arr[7]
		while (frontArr[7] == downArr[4] || rightArr[7] == downArr[4] || backArr[7] == downArr[4] || leftArr[7] == downArr[4]) {
			if (frontArr[7] == downArr[4]) {
				if (downArr[1] == rightArr[4]) {
					Fp();
					Rp();
				}
				else if (downArr[1] == leftArr[4]) {
					F();
					L();
				}
				else if (downArr[1] == frontArr[4]) {
					Fp();
					R();
					U();
					Rp();
					F();
					F();
				}
				else if (downArr[1] == backArr[4]) {
					Fp();
					R();
					Up();
					Rp();
					B();
					B();
				}
			}
			if (rightArr[7] == downArr[4]) {
				if (downArr[5] == frontArr[4]) {
					R();
					F();
				}
				if (downArr[5] == backArr[4]) {
					Rp();
					Bp();
				}
				if (downArr[5] == rightArr[4]) {
					R();
					Fp();
					Up();
					F();
					R();
					R();
				}
				if (downArr[5] == leftArr[4]) {
					R();
					Fp();
					U();
					F();
					L();
					L();
				}
			}
			if (leftArr[7] == downArr[4]) {
				if (downArr[3] == frontArr[4]) {
					Lp();
					Fp();
				}
				if (downArr[3] == backArr[4]) {
					L();
					B();
				}
				if (downArr[3] == leftArr[4]) {
					Lp();
					F();
					U();
					Fp();
					L();
					L();
				}
				if (downArr[3] == rightArr[4]) {
					Lp();
					F();
					Up();
					Fp();
					R();
					R();
				}
			}
			if (backArr[7] == downArr[4]) {
				if (downArr[7] == rightArr[4]) {
					B();
					R();
				}
				if (downArr[7] == leftArr[4]) {
					Bp();
					Lp();
				}
				if (downArr[7] == backArr[4]) {
					Bp();
					L();
					U();
					Lp();
					B();
					B();
				}
				if (downArr[7] == frontArr[4]) {
					Bp();
					L();
					Up();
					Lp();
					F();
					F();
				}
			}
		}
	}
	cout << "Bottom Cross Solution:" << endl;
	optiSolution();
	printSolution();
	solution.clear();
}

void bottomCorners() {
	while (frontArr[6] != frontArr[4] || frontArr[8] != frontArr[4] || rightArr[6] != rightArr[4] || rightArr[8] != rightArr[4] || leftArr[6] != leftArr[4] || leftArr[8] != leftArr[4] || backArr[6] != backArr[4] || backArr[8] != backArr[4] || downArr[0] != downArr[4] || downArr[2] != downArr[4] || downArr[6] != downArr[4] || downArr[8] != downArr[4]) {
		outcorners:
		while (frontArr[0] == downArr[4] || frontArr[2] == downArr[4] || rightArr[0] == downArr[4] || rightArr[2] == downArr[4] || backArr[0] == downArr[4] || backArr[2] == downArr[4] || leftArr[0] == downArr[4] || leftArr[2] == downArr[4]) { //White is facing out on side top corners Arr[0] or Arr[2]
			if (frontArr[0] == downArr[4] && leftArr[2] == leftArr[4] && topArr[6] == frontArr[4]) {
				Up();
				Lp();
				U();
				L();
			}
			else if (frontArr[2] == downArr[4] && rightArr[0] == rightArr[4] && topArr[8] == frontArr[4]) {
				U();
				R();
				Up();
				Rp();
			}
			else if (rightArr[0] == downArr[4] && frontArr[2] == frontArr[4] && topArr[8] == rightArr[4]) {
				Up();
				Fp();
				U();
				F();
			}
			else if (rightArr[2] == downArr[4] && backArr[0] == backArr[4] && topArr[2] == rightArr[4]) {
				U();
				B();
				Up();
				Bp();
			}
			else if (backArr[0] == downArr[4] && rightArr[2] == rightArr[4] && topArr[2] == backArr[4]) {
				Up();
				Rp();
				U();
				R();
			}
			else if (backArr[2] == downArr[4] && leftArr[0] == leftArr[4] && topArr[0] == backArr[4]) {
				U();
				L();
				Up();
				Lp();
			}
			else if (leftArr[0] == downArr[4] && backArr[2] == backArr[4] && topArr[0] == leftArr[4]) {
				Up();
				Bp();
				U();
				B();
			}
			else if (leftArr[2] == downArr[4] && frontArr[0] == frontArr[4] && topArr[6] == leftArr[4]) {
				U();
				F();
				Up();
				Fp();
			}
			else {
				U();
			}
		}
		while (topArr[0] == downArr[4] || topArr[2] == downArr[4] || topArr[6] == downArr[4] || topArr[8] == downArr[4]) { //While white corners are on topArr with white facing up
			if (topArr[0] == downArr[4]) {
				if (downArr[6] == downArr[4] && leftArr[6] == leftArr[4]) {
					U();
				}
				else {
					L();
					Up();
					Lp();
					goto outcorners;
				}
			}
			if (topArr[2] == downArr[4]) {
				if (downArr[8] == downArr[4] && rightArr[8] == rightArr[4]) {
					U();
				}
				else {
					Rp();
					U();
					R();
					goto outcorners;
				}
			}
			if (topArr[6] == downArr[4]) {
				if (downArr[0] == downArr[4] && frontArr[6] == frontArr[4]) {
					U();
				}
				else {
					Lp();
					U();
					L();
					goto outcorners;
				}
			}
			if (topArr[8] == downArr[4]) {
				if (downArr[2] == downArr[4] && frontArr[8] == frontArr[4]) {
					U();
				}
				else {
					R();
					Up();
					Rp();
					goto outcorners;
				}
			}
		}
		//White facing out on bottom layer
		while (frontArr[6] == downArr[4] || frontArr[8] == downArr[4] || rightArr[6] == downArr[4] || rightArr[8] == downArr[4] || backArr[6] == downArr[4] || backArr[8] == downArr[4] || leftArr[6] == downArr[4] || leftArr[8] == downArr[4]) {
			if (frontArr[6] == downArr[4]) {
				Lp();
				U();
				L();
				goto outcorners;
			}
			if (frontArr[8] == downArr[4]) {
				R();
				Up();
				Rp();
				goto outcorners;
			}
			if (rightArr[6] == downArr[4]) {
				Fp();
				U();
				F();
				goto outcorners;
			}
			if (rightArr[8] == downArr[4]) {
				B();
				Up();
				Bp();
				goto outcorners;
			}
			if (backArr[6] == downArr[4]) {
				Rp();
				U();
				R();
				goto outcorners;
			}
			if (backArr[8] == downArr[4]) {
				L();
				Up();
				Lp();
				goto outcorners;
			}
			if (leftArr[6] == downArr[4]) {
				Bp();
				U();
				B();
				goto outcorners;
			}
			if (leftArr[8] == downArr[4]) {
				F();
				Up();
				Fp();
				goto outcorners;
			}
		}
		//White on bottom but in wrong place
		if (downArr[0] == downArr[4] && frontArr[6] != frontArr[4]) {
			Lp();
			Up();
			L();
			goto outcorners;
		}
		if (downArr[2] == downArr[4] && frontArr[8] != frontArr[4]) {
			R();
			U();
			Rp();
			goto outcorners;
		}
		if (downArr[6] == downArr[4] && backArr[8] != backArr[4]) {
			L();
			U();
			Lp();
			goto outcorners;
		}
		if (downArr[8] == downArr[4] && backArr[6] != backArr[4]) {
			Rp();
			Up();
			R();
			goto outcorners;
		}
	}
	cout << "Bottom Corners Solution:" << endl;
	optiSolution();
	printSolution();
	solution.clear();
}

void middleEdges() {
	//Take out Flipped Pieces
	if (frontArr[5] == rightArr[4] && rightArr[3] == frontArr[4]) {
		while (topArr[7] != topArr[4] && frontArr[1] != topArr[4]) {
			U();
		}
		U();
		R();
		Up();
		Rp();
		Up();
		Fp();
		U();
		F();
	}
	if (frontArr[3] == leftArr[4] && leftArr[5] == frontArr[4]) {
		while (topArr[7] != topArr[4] && frontArr[1] != topArr[4]) {
			U();
		}
		Up();
		Lp();
		U();
		L();
		U();
		F();
		Up();
		Fp();
	}
	if (backArr[3] == rightArr[4] && rightArr[5] == backArr[4]) {
		while (topArr[5] != topArr[4] && rightArr[1] != topArr[4]) {
			U();
		}
		U();
		B();
		Up();
		Bp();
		Up();
		Rp();
		U();
		R();
	}
	if (leftArr[3] == backArr[4] && backArr[5] == leftArr[4]) {
		while (topArr[3] != topArr[4] && leftArr[1] != topArr[4]) {
			U();
		}
		Up();
		Bp();
		U();
		B();
		U();
		L();
		Up();
		Lp();
	}
	
	while (frontArr[3] != frontArr[4] || frontArr[5] != frontArr[4] || rightArr[5] != rightArr[4] || rightArr[3] != rightArr[4] || leftArr[5] != leftArr[4] || leftArr[3] != leftArr[4] || backArr[5] != backArr[4] || backArr[3] != backArr[4]) {
		if ( (topArr[1] == topArr[4] || backArr[1] == topArr[4]) && (topArr[5] == topArr[4] || rightArr[1] == topArr[4]) && (topArr[3] == topArr[4] || leftArr[1] == topArr[4]) && (topArr[7] == topArr[4] || frontArr[1] == topArr[4]) ) { //3 or 4 flipped
			if (frontArr[3] != frontArr[4] || leftArr[5] != leftArr[4]) {
				Up();
				Lp();
				U();
				L();
				U();
				F();
				Up();
				Fp();
			}
			else {
				U();
				R();
				Up();
				Rp();
				Up();
				Fp();
				U();
				F();
			}
		}
		if (topArr[7] == leftArr[4] && frontArr[1] == frontArr[4]) { //Top Front Edge to Middle Left Front Edge
			Up();
			Lp();
			U();
			L();
			U();
			F();
			Up();
			Fp();
		}
		if (topArr[7] == rightArr[4] && frontArr[1] == frontArr[4]) { //Top Front Edge to Middle Right Front Edge
			U();
			R();
			Up();
			Rp();
			Up();
			Fp();
			U();
			F();
		}
		if (topArr[5] == frontArr[4] && rightArr[1] == rightArr[4]) { //Right Top Edge to 
			Up();
			Fp();
			U();
			F();
			U();
			R();
			Up();
			Rp();
		}
		if (topArr[5] == backArr[4] && rightArr[1] == rightArr[4]) {
			U();
			B();
			Up();
			Bp();
			Up();
			Rp();
			U();
			R();
		}
		if (topArr[1] == rightArr[4] && backArr[1] == backArr[4]) {
			Up();
			Rp();
			U();
			R();
			U();
			B();
			Up();
			Bp();
		}
		if (topArr[1] == leftArr[4] && backArr[1] == backArr[4]) {
			U();
			L();
			Up();
			Lp();
			Up();
			Bp();
			U();
			B();
		}
		if (topArr[3] == backArr[4] && leftArr[1] == leftArr[4]) {//
			Up();
			Bp();
			U();
			B();
			U();
			L();
			Up();
			Lp();
		}
		if (topArr[3] == frontArr[4] && leftArr[1] == leftArr[4]) {
			U();
			F();
			Up();
			Fp();
			Up();
			Lp();
			U();
			L();
		}	
		U();
	}
	cout << "Middle Edges Solution:" << endl;
	optiSolution();
	printSolution();
	solution.clear();
}
//OLL Cases
void OLL1() {
	R();
	U();
	U();
	R();
	R();
	F();
	R();
	Fp();
	U();
	U();
	Rp();
	F();
	R();
	Fp();
}
void OLL2() {
	r();
	U();
	rp();
	U();
	U();
	r();
	U();
	U();
	Rp();
	U();
	U();
	R();
	Up();
	rp();
}
void OLL3() {
	rp();
	R();
	R();
	U();
	Rp();
	U();
	r();
	U();
	U();
	rp();
	U();
	Mp();
}
void OLL4() {
	M();
	Up();
	r();
	U();
	U();
	rp();
	Up();
	R();
	Up();
	Rp();
	Mp();
}
void OLL5() {
	lp();
	U();
	U();
	L();
	U();
	Lp();
	U();
	l();
}

void OLL6() {
	r();
	U();
	U();
	Rp();
	Up();
	R();
	Up();
	rp();
}

void OLL7() {
	r();
	U();
	Rp();
	U();
	R();
	U();
	U();
	rp();
}
void OLL8() {
	lp();
	Up();
	L();
	Up();
	Lp();
	U();
	U();
	l();
}
void OLL9() {
	R();
	U();
	Rp();
	Up();
	Rp();
	F();
	R();
	R();
	U();
	Rp();
	Up();
	Fp();
}
void OLL10() {
	R();
	U();
	Rp();
	U();
	Rp();
	F();
	R();
	Fp();
	R();
	U();
	U();
	Rp();
}
void OLL11() {
	r();
	U();
	Rp();
	U();
	Rp();
	F();
	R();
	Fp();
	R();
	U();
	U();
	rp();
}
void OLL12() {
	Mp();
	Rp();
	Up();
	R();
	Up();
	Rp();
	U();
	U();
	R();
	Up();
	R();
	rp();
}
void OLL13() {
	F();
	U();
	R();
	Up();
	R();
	R();
	Fp();
	R();
	U();
	R();
	Up();
	Rp();
}
void OLL14() {
	Rp();
	F();
	R();
	U();
	Rp();
	Fp();
	R();
	F();
	Up();
	Fp();
}
void OLL15() {
	lp();
	Up();
	l();
	Lp();
	Up();
	L();
	U();
	lp();
	U();
	l();
}
void OLL16() {
	r();
	U();
	rp();
	R();
	U();
	Rp();
	Up();
	r();
	Up();
	rp();
}
void OLL17() {
	F();
	Rp();
	Fp();
	R();
	R();
	rp();
	U();
	R();
	Up();
	Rp();
	Up();
	Mp();
}
void OLL18() {
	r();
	U();
	Rp();
	U();
	R();
	U();
	U();
	r();
	r();
	Up();
	R();
	Up();
	Rp();
	U();
	U();
	r();
}
void OLL19() {
	rp();
	R();
	U();
	R();
	U();
	Rp();
	Up();
	Mp();
	Rp();
	F();
	R();
	Fp();
}
void OLL20() {
	r();
	U();
	Rp();
	Up();
	M();
	M();
	U();
	R();
	Up();
	Rp();
	Up();
	Mp();
}
void OLL21() {
	R();
	U();
	U();
	Rp();
	Up();
	R();
	U();
	Rp();
	Up();
	R();
	Up();
	Rp();
}
void OLL22() {
	R();
	U();
	U();
	R();
	R();
	Up();
	R();
	R();
	Up();
	R();
	R();
	U();
	U();
	R();
}
void OLL23() {
	R();
	R();
	Dp();
	R();
	U();
	U();
	Rp();
	D();
	R();
	U();
	U();
	R();
}
void OLL24() {
	r();
	U();
	Rp();
	Up();
	rp();
	F();
	R();
	Fp();
}
void OLL25() {
	Fp();
	r();
	U();
	Rp();
	Up();
	rp();
	F();
	R();
}
void OLL26() {
	R();
	U();
	U();
	Rp();
	Up();
	R();
	Up();
	Rp();
}
void OLL27() {
	R();
	U();
	Rp();
	U();
	R();
	U();
	U();
	Rp();
}
void OLL28() {
	r();
	U();
	Rp();
	Up();
	rp();
	R();
	U();
	R();
	Up();
	Rp();
}
void OLL29() {
	R();
	U();
	Rp();
	Up();
	R();
	Up();
	Rp();
	Fp();
	Up();
	F();
	R();
	U();
	Rp();
}
void OLL30() {
	F();
	Rp();
	F();
	R();
	R();
	Up();
	Rp();
	Up();
	R();
	U();
	Rp();
	F();
	F();
}
void OLL31() {
	Rp();
	Up();
	F();
	U();
	R();
	Up();
	Rp();
	Fp();
	R();
}
void OLL32() {
	L();
	U();
	Fp();
	Up();
	Lp();
	U();
	L();
	F();
	Lp();
}
void OLL33() {
	R();
	U();
	Rp();
	Up();
	Rp();
	F();
	R();
	Fp();
}
void OLL34() {
	R();
	U();
	R();
	R();
	Up();
	Rp();
	F();
	R();
	U();
	R();
	Up();
	Fp();
}
void OLL35() {
	R();
	U();
	U();
	R();
	R();
	F();
	R();
	Fp();
	R();
	U();
	U();
	Rp();
}
void OLL36() {
	Lp();
	Up();
	L();
	Up();
	Lp();
	U();
	L();
	U();
	L();
	Fp();
	Lp();
	F();
}
void OLL37() {
	F();
	Rp();
	Fp();
	R();
	U();
	R();
	Up();
	Rp();
}
void OLL38() {
	R();
	U();
	Rp();
	U();
	R();
	Up();
	Rp();
	Up();
	Rp();
	F();
	R();
	Fp();
}
void OLL39() {
	L();
	Fp();
	Lp();
	Up();
	L();
	U();
	F();
	Up();
	Lp();
}
void OLL40() {
	Rp();
	F();
	R();
	U();
	Rp();
	Up();
	Fp();
	U();
	R();
}
void OLL41() {
	R();
	U();
	Rp();
	U();
	R();
	U();
	U();
	Rp();
	F();
	R();
	U();
	Rp();
	Up();
	Fp();
}
void OLL42() {
	Rp();
	Up();
	R();
	Up();
	Rp();
	U();
	U();
	R();
	F();
	R();
	U();
	Rp();
	Up();
	Fp();
}
void OLL43() {
	Fp();
	Up();
	Lp();
	U();
	L();
	F();
}
void OLL44() {
	F();
	U();
	R();
	Up();
	Rp();
	Fp();
}
void OLL45() {
	F();
	R();
	U();
	Rp();
	Up();
	Fp();
}
void OLL46() {
	Rp();
	Up();
	Rp();
	F();
	R();
	Fp();
	U();
	R();
}
void OLL47() {
	Rp();
	Up();
	Rp();
	F();
	R();
	Fp();
	Rp();
	F();
	R();
	Fp();
	U();
	R();
}
void OLL48() {
	F();
	R();
	U();
	Rp();
	Up();
	R();
	U();
	Rp();
	Up();
	Fp();
}
void OLL49() {
	r();
	Up();
	r();
	r();
	U();
	r();
	r();
	U();
	r();
	r();
	Up();
	r();
}
void OLL50() {
	rp();
	U();
	r();
	r();
	Up();
	r();
	r();
	Up();
	r();
	r();
	U();
	rp();
}
void OLL51() {
	F();
	U();
	R();
	Up();
	Rp();
	U();
	R();
	Up();
	Rp();
	Fp();
}
void OLL52() {
	R();
	U();
	Rp();
	U();
	R();
	Up();
	B();
	Up();
	Bp();
	Rp();
}
void OLL53() {
	lp();
	U();
	U();
	L();
	U();
	Lp();
	Up();
	L();
	U();
	Lp();
	U();
	l();
}
void OLL54() {
	r();
	U();
	U();
	Rp();
	Up();
	R();
	U();
	Rp();
	Up();
	R();
	Up();
	rp();
}
void OLL55() {
	Rp();
	F();
	R();
	U();
	R();
	Up();
	R();
	R();
	Fp();
	R();
	R();
	Up();
	Rp();
	U();
	R();
	U();
	Rp();
}
void OLL56() {
	rp();
	Up();
	r();
	Up();
	Rp();
	U();
	R();
	Up();
	Rp();
	U();
	R();
	rp();
	U();
	r();
}
void OLL57() {
	R();
	U();
	Rp();
	Up();
	Mp();
	U();
	R();
	Up();
	rp();
}
char tempOLL12Strip[12];
vector<bool> OLL12TOF;
void yellow12SideStrip() {//Take array from sides [0][1][2] and puts in into one long string T for top Colour F for not top colour, color first then assign T or F (Matching topArr[4] or not)

	tempOLL12Strip[0] = rightArr[2];
	tempOLL12Strip[1] = rightArr[1];
	tempOLL12Strip[2] = rightArr[0];
	tempOLL12Strip[3] = frontArr[2];
	tempOLL12Strip[4] = frontArr[1];
	tempOLL12Strip[5] = frontArr[0];
	tempOLL12Strip[6] = leftArr[2];
	tempOLL12Strip[7] = leftArr[1];
	tempOLL12Strip[8] = leftArr[0];
	tempOLL12Strip[9] = backArr[2];
	tempOLL12Strip[10] = backArr[1];
	tempOLL12Strip[11] = backArr[0];

	for (int i = 0; i < 12; i++) {
		if (tempOLL12Strip[i] == topArr[4]) {
			OLL12TOF.push_back(true);
		}
		else {
			OLL12TOF.push_back(false);
		}
	}
}
vector<bool> OLLTopArrTOF;
void OLLTopArrTOFAssign() {
	for (int i = 0; i < 9; i++) {
		if (topArr[i] == topArr[4]) {
			OLLTopArrTOF.push_back(true);
		}
		else {
			OLLTopArrTOF.push_back(false);
		}
	}
}

void OLL() {
	yellow12SideStrip();
	OLLTopArrTOFAssign();
	vector<bool> caseTopArraySol = { true, true, true, true, true, true, true, true, true };
	while (caseTopArraySol != OLLTopArrTOF) {
		//Case 1
		vector<bool> case12Strip = { true, true, true, false, true, false, true, true, true, false, true, false };
		vector<bool> caseTopArray = { false, false, false, false, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL1();
			return;
		}
		//Case 2
		case12Strip = { false, true, true,false, true, false, true, true, false, true, true, true };
		caseTopArray = { false, false, false, false, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL2();
			return;
		}
		//Case 3
		case12Strip = { true, true, false, true, true, false, false, true, false, true, true, false };
		caseTopArray = { false, false, false, false, true, false, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL3();
			return;
		}
		//Case 4
		case12Strip = { false, true, false, false, true, true, false, true, true, false, true, true };
		caseTopArray = { false, false, false, false, true, false, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL4();
			return;
		}
		//Case 5
		case12Strip = { true, true, false, true, true, false, true, false, false, false, false, false };
		caseTopArray = { true, true, false, true, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL5();
			return;
		}
		//Case 6
		case12Strip = { false, false, true, false, true, true, false, true, true, false, false, false };
		caseTopArray = { false, true, true, false, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL6();
			return;
		}
		//Case 7
		case12Strip = { true, true, false, true, true, false, false, false, false, true, false, false };
		caseTopArray = { false, true, false, true, true, false, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL7();
			return;
		}
		//Case 8
		case12Strip = { false, false, false, false, true, true, false, true, true, false, false, true };
		caseTopArray = { false, true, false, false, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL8();
			return;
		}
		//Case 9
		case12Strip = { false, true, false, false, true, true, false, false, true, false, false, true };
		caseTopArray = { false, true, false, true, true, false, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL9();
			return;
		}
		//Case 10
		case12Strip = { false, true, false, true, false, false, true, false, false, true, true, false };
		caseTopArray = { false, false, true, true, true, false, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL10();
			return;
		}
		//Case 11
		case12Strip = { false, true, false, true, true, false, true, false, false, true, false, false };
		caseTopArray = { false, true, true, true, true, false, false, false ,false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL11();
			return;
		}
		//Case 12
		case12Strip = { false, false, true, false, true, true, false, true, false, false, false, true };
		caseTopArray = { true, true, false, false, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL12();
			return;
		}
		//Case 13
		case12Strip = { true, false, false, true, true, false, false, false, false, true, true, false };
		caseTopArray = { false, false, false, true, true, true, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL13();
			return;
		}
		//Case 14
		case12Strip = { false, false, false, false, true, true, false, false, true, false, true, true };
		caseTopArray = { false, false, false, true, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL14();
			return;
		}
		//Case 15
		case12Strip = { true, false, false, true, true, false, true, false, false, false, true, false };
		caseTopArray = { true, false, false, true, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL15();
			return;
		}
		//Case 16
		case12Strip = { false, false, true, false, true, true, false, false, true, false, true, false };
		caseTopArray = { false, false, true, true, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL16();
			return;
		}
		//Case 17
		case12Strip = { true, true, false, false, true, true, false, true, false, false, true, false };
		caseTopArray = { true, false, false, false, true, false, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL17();
			return;
		}
		//Case 18
		case12Strip = { false, true, false, true, true, true, false, true, false, false, true, false };
		caseTopArray = { true, false, true, false, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL18();
			return;
		}
		//Case 19
		case12Strip = { false, true, true, false, true, false, true, true, false, false, true, false };
		caseTopArray = { true, false, true, false, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL19();
			return;
		}
		//Case 20
		case12Strip = { false, true, false, false, true, false, false, true, false, false, true, false };
		caseTopArray = { true, false, true, false, true, false, true, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL20();
			return;
		}
		//Case 21
		case12Strip = { false, false, false, true, false, true, false, false, false, true, false, true };
		caseTopArray = { false, true, false, true, true, true, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL21();
			return;
		}
		//Case 22
		case12Strip = { false, false, false, true, false, false, true, false, true, false, false, true };
		caseTopArray = { false, true, false, true, true, true, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL22();
			return;
		}
		//Case 23
		case12Strip = { false, false, false, false, false, false, false, false, false, true, false, true };
		caseTopArray = { false, true, false, true, true, true, true, true, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL23();
			return;
		}
		//Case 24
		case12Strip = { false, false, false, false, false, true, false, false, false, true, false, false };
		caseTopArray = { false, true, true, true, true, true, false, true, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL24();
			return;
		}
		//Case 25
		case12Strip = { false, false, false, true, false, false, false, false, true, false, false, false };
		caseTopArray = { false, true, true, true, true, true, true, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL25();
			return;
		}
		//Case 26
		case12Strip = { false, false, true, false, false, true, false, false, true, false, false, false };
		caseTopArray = { false, true,true, true, true, true, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL26();
			return;
		}
		//Case 27
		case12Strip = { true, false, false, true, false, false, false, false, false, true, false, false };
		caseTopArray = { false, true, false, true, true, true, true, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL27();
			return;
		}
		//Case 28
		case12Strip = { false, true, false, false, true, false, false, false, false, false, false, false };
		caseTopArray = { true, true, true, true, true, false, true, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL28();
			return;
		}
		//Case 29
		case12Strip = { false, true, false, false, true, true, false, false, false, true, false, false };
		caseTopArray = { false, true, true, true, true, false, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL29();
			return;
		}
		//Case 30
		case12Strip = { true, true, false, false, true, false, false, false, true, false, false, false };
		caseTopArray = { false, true, false, true, true, false, true, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL30();
			return;
		}
		//Case 31
		case12Strip = { false, false, false, false, true, true, false, true, false, true, false, false };
		caseTopArray = { false, true, true, false, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL31();
			return;
		}
		//Case 32
		case12Strip = { false, true, false, true, true, false, false, false, false, false, false, true };
		caseTopArray = { true, true, false, true, true, false, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL32();
			return;
		}
		//Case 33
		case12Strip = { false, false, false, false, true, true, false, false, false, true, true, false };
		caseTopArray = { false, false, true, true, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL33();
			return;
		}
		//Case 34
		case12Strip = { true, false, false, false, true, false, false, false, true, false, true, false };
		caseTopArray = { false, false, false, true, true, true, true, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL34();
			return;
		}
		//Case 35
		case12Strip = { true, false, false, false, false, true, false, true, false, false, true, false };
		caseTopArray = { true, false, false, false, true, true, false, true, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL35();
			return;
		}
		//Case 36
		case12Strip = { false, false, false, false, true, false, true, true, false, false, false, true };
		caseTopArray = { true, true, false, false, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL36();
			return;
		}
		//Case 37
		case12Strip = { true, true, false, false, true, true, false, false, false, false, false, false };
		caseTopArray = { true, true, false, true, true, false, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL37();
			return;
		}
		//Case 38
		case12Strip = { false, true, true, false, true, false, false, false, false, true, false, false };
		caseTopArray = { false, true, true, true, true, false, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL38();
			return;
		}
		//Case 39
		case12Strip = { false, false, true, false, true, false, false, false, false, true, true, false };
		caseTopArray = { false, false, true, true, true, true, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL39();
			return;
		}
		//Case 40
		case12Strip = { false, false, false, false, true, false, true, false, false, false, true, true };
		caseTopArray = { true, false, false, true, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL40();
			return;
		}
		//Case 41
		case12Strip = { false, true, false, false, true, false, false, false, false, true, false, true };
		caseTopArray = { false, true, false, true, true, false, true, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL41();
			return;
		}
		//Case 42
		case12Strip = { false, true, false, true, false, true, false, false, false, false, true, false };
		caseTopArray = { true, false, true, true, true, false, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL42();
			return;
		}
		//Case 43
		case12Strip = { false, false, false, false, true, false, true, true, true, false, false, false };
		caseTopArray = { false, true, true, false, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL43();
			return;
		}
		//Case 44
		case12Strip = { true, true, true, false, true, false, false, false, false, false, false, false };
		caseTopArray = { true, true, false, true, true, false, true, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL44();
			return;
		}
		//Case 45
		case12Strip = { false, false, false, false, true, false, true, false, true, false, true, false };
		caseTopArray = { false, false, true, true, true, true, false, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL45();
			return;
		}
		//Case 46
		case12Strip = { true, true, true, false, false, false, false, true, false, false, false, false };
		caseTopArray = { true, true, false, false, true, false, true, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL46();
			return;
		}
		//Case 47
		case12Strip = { true, false, true, false, true, true, false, true, false, true, false, false };
		caseTopArray = { false, true, false, false, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL47();
			return;
		}
		//Case 48
		case12Strip = { false, true, false, true, true, false, true, false, true, false, false, true };
		caseTopArray = { false, true, false, true, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL48();
			return;
		}
		//Case 49
		case12Strip = { false, false, false, true, true, false, true, true, true, false, false, true };
		caseTopArray = { false, true, false, false, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL49();
			return;
		}
		//Case 50
		case12Strip = { false, false, false, true, false, false, true, true, true, false, true, true };
		caseTopArray = { false, false, false, false, true, true, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL50();
			return;
		}
		//Case 51
		case12Strip = { true, false, true, false, true, true, false, false, false, true, true, false };
		caseTopArray = { false, false, false, true, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL51();
			return;
		}
		//Case 52
		case12Strip = { true, true, true, false, false, true, false, true, false, true, false, false };
		caseTopArray = { false, true, false, false, true, false, false, true, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL52();
			return;
		}
		//Case 53
		case12Strip = { false, false, false, true, true, true, false, true, false, true, false, true };
		caseTopArray = { false, true, false, false, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL53();
			return;
		}
		//Case 54
		case12Strip = { false, true, false, true, true, true, false, false, false, true, false, true };
		caseTopArray = { false, true, false, true, true, false, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL54();
			return;
		}
		//Case 55
		case12Strip = { false, false, false, true, true, true, false, false, false, true, true, true };
		caseTopArray = { false, false, false, true, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL55();
			return;
		}
		//Case 56
		case12Strip = { true, false, true, false, true, false, true, false, true, false, true, false };
		caseTopArray = { false, false, false, true, true, true, false, false, false };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL56();
			return;
		}
		//Case 57
		case12Strip = { false, false, false, false, true, false, false, false, false, false, true, false };
		caseTopArray = { true, false, true, true, true, true, true, false, true };
		if (case12Strip == OLL12TOF && caseTopArray == OLLTopArrTOF) {
			OLL57();
			return;
		}

		
		U();//If none found rotate
		OLL12TOF.clear();
		OLLTopArrTOF.clear();
		yellow12SideStrip();
		OLLTopArrTOFAssign();
	}
}
void PLL(){
	while (frontArr[0] != frontArr[2] || rightArr[0] != rightArr[2] || leftArr[0] != leftArr[2] || backArr[0] != backArr[2]) {//Permute corners
		int cornerEqualCount = 0; //Two Corners on the same side have the same colour
		if (rightArr[0] == rightArr[2]) {
			cornerEqualCount++;
		}
		if (leftArr[0] == leftArr[2]) {
			cornerEqualCount++;
		}
		if (frontArr[0] == frontArr[2]) {
			cornerEqualCount++;
		}
		if (backArr[0] == backArr[2]) {
			cornerEqualCount++;
		}
		//Diagonal Swap
		if (cornerEqualCount == 0) {
			F();
			R();
			Up();
			Rp();
			Up();
			R();
			U();
			Rp();
			Fp();
			R();
			U();
			Rp();
			Up();
			Rp();
			F();
			R();
			Fp();
		}
		//Adjacent Corner Swap aka Headlights
		if (cornerEqualCount == 1) {
			while (leftArr[0] != leftArr[2]) {
				U();
			}
			R();
			U();
			Rp();
			Up();
			Rp();
			F();
			R();
			R();
			Up();
			Rp();
			Up();
			R();
			U();
			Rp();
			Fp();
		}
	}
	cout << "PLL Corners Solution: " << endl;
	optiSolution();
	printSolution();
	solution.clear();
	while (frontArr[0] != frontArr[1] || rightArr[0] != rightArr[1] || backArr[0] != backArr[1] || leftArr[0] != leftArr[1]) {
		//One Side Solved (Ua or Ub)
		if (frontArr[0] == frontArr[1] || rightArr[0] == rightArr[1] || backArr[0] == backArr[1] || leftArr[0] == leftArr[1]){
			while (backArr[0] != backArr[1]) {
				U();
			}
			//Ua (Counter Clock Wise)
			if (rightArr[1] == leftArr[0]) {
				R();
				Up();
				R();
				U();
				R();
				U();
				R();
				Up();
				Rp();
				Up();
				R();
				R();
			}
			//Ub (Clock Wise)
			if (rightArr[1] == frontArr[0]){
				R();
				R();
				U();
				R();
				U();
				Rp();
				Up();
				Rp();
				Up();
				Rp();
				U();
				Rp();
			}
		}
		//No Sides Solved
		//Diagonal Swap
		if (frontArr[1] == rightArr[0] || frontArr[1] == leftArr[0]) {
			while (frontArr[1] != rightArr[0]) {
				U();
			}
			M();
			M();
			U();
			M();
			M();
			U();
			M();
			U();
			U();
			M();
			M();
			U();
			U();
			M();
		}
		//Cross Swap Edges
		if (frontArr[1] == backArr[0]) {
			M();
			M();
			U();
			M();
			M();
			U();
			U();
			M();
			M();
			U();
			M();
			M();
		}
		while (frontArr[1] != frontArr[4]) {
			U();
		}
	}
	cout << "PLL Edges Solution: " << endl;
	optiSolution();
	printSolution();
	solution.clear();
}
int main() {
	//Asks user to describe cube by each color
	initCube();
	//Solve the Bottom Cross
	bottomCross();
	//Solves the rest of the bottom layer
	bottomCorners();
	//Solve the middle layer
	middleEdges();
	//Orient Last layer (Same colour on top)
	OLL();
	cout << "Orient Last Layer (Same Colour on Top)" << endl;
	optiSolution();
	printSolution();
	solution.clear();
	//Step 1 Pll
	PLL();
	cout << endl << endl << endl << "THANK YOU FOR SOLVING" << endl;
	
	return 0;
}