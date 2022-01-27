#include <iostream>
#include <string>
#include <vector>
using namespace std;

long long wrong, ansInt;
string str, formula, numStr, ansStr;
vector<long long> numVec, opVec;

int main(int argc, const char* argv[]) {
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	cin >> str;
	for (int k = 0; k < str.length(); k++) {
		if (str[k] == 'Z' && str[k+1] == 'E' && str[k+2] == 'R' && str[k+3] == 'O') {
			formula += '0';
			str.erase(k, 4);
			k--;
		} else if (str[k] == 'O' && str[k + 1] == 'N' && str[k + 2] == 'E') {
			formula += '1';
			str.erase(k, 3);
			k--;
		} else if (str[k] == 'T' && str[k+1] == 'W' && str[k+2] == 'O') {
			formula += '2';
			str.erase(k, 3);
			k--;
		} else if (str[k] == 'T' && str[k+1] == 'H' && str[k+2] == 'R' && str[k+3] == 'E' && str[k+4] == 'E') {
			formula += '3';
			str.erase(k, 5);
			k--;
		} else if (str[k] == 'F' && str[k+1] == 'O' && str[k+2] == 'U' && str[k+3] == 'R') {
			formula += '4';
		    str.erase(k, 4);
			k--;
		} else if (str[k] == 'F' && str[k+1] == 'I' && str[k+2] == 'V' && str[k+3] == 'E') {
			formula += '5';
			str.erase(k, 4);
			k--;
		} else if (str[k] == 'S' && str[k+1] == 'I' && str[k+2] == 'X') {
			formula += '6';
			str.erase(k, 3);
			k--;
		} else if (str[k] == 'S' && str[k+1] == 'E' && str[k+2] == 'V' && str[k+3] == 'E' && str[k+4] == 'N') {
			formula += '7';
			str.erase(k, 5);
			k--;
		} else if (str[k] == 'E' && str[k+1] == 'I' && str[k+2] == 'G' && str[k+3] == 'H' && str[k+4] == 'T') {
			formula += '8';
			str.erase(k, 5);
			k--;
		} else if (str[k] == 'N' && str[k+1] == 'I' && str[k+2] == 'N' && str[k+3] == 'E') {
			formula += '9';
			str.erase(k, 4);
			k--;
		} else if (str[k] == '+') {
			formula += '+';
			str.erase(k, 1);
			k--;
		} else if (str[k] == '-') {
			formula += '-';
			str.erase(k, 1);
			k--;
		} else if (str[k] == 'x') {
			formula += 'x';
			str.erase(k, 1);
			k--;
		} else if (str[k] == '/') {
			formula += '/';
			str.erase(k, 1);
			k--;
		} else if (str[k] == '=') { 
			formula += '=';
			str.erase(k, 1);   
			k--;
		}
	} if (!str.empty()) wrong = 1;
	for (int k=1; k < formula.length(); k++) {
	    if ((formula[k] == '+' && formula[k-1] == '+') ||
	        (formula[k] == '+' && formula[k-1] == '-') ||
	        (formula[k] == '+' && formula[k-1] == 'x') ||
	        (formula[k] == '+' && formula[k-1] == '/')) { wrong = 1; break; }
	    else if ((formula[k] == '-' && formula[k-1] == '+') ||
	        (formula[k] == '-' && formula[k-1] == '-') ||
	        (formula[k] == '-' && formula[k-1] == 'x') ||
	        (formula[k] == '-' && formula[k-1] == '/')) { wrong = 1; break; }
	    else if ((formula[k] == 'x' && formula[k-1] == '+') ||
	        (formula[k] == 'x' && formula[k-1] == '-') ||
	        (formula[k] == 'x' && formula[k-1] == 'x') ||
	        (formula[k] == 'x' && formula[k-1] == '/')) { wrong = 1; break; }
	    else if ((formula[k] == '/' && formula[k-1] == '+') ||
	        (formula[k] == '/' && formula[k-1] == '-') ||
	        (formula[k] == '/' && formula[k-1] == 'x') ||
	        (formula[k] == '/' && formula[k-1] == '/')) { wrong = 1; break; }
	    else if ((formula[k] == '=' && formula[k-1] == '+') ||
	        (formula[k] == '=' && formula[k-1] == '-') ||
	        (formula[k] == '=' && formula[k-1] == 'x') ||
	        (formula[k] == '=' && formula[k-1] == '/')) { wrong = 1; break; }
	} if(wrong) { cout << "Madness!"; return 0; }
	cout << formula << '\n';
	
	for (int k=0; k < formula.length(); k++) {
	    if (formula[k] >= '0' && formula[k] <= '9') {
	        numStr += formula[k];
	    } else {
	        if (formula[k] == '+') opVec.push_back(1);
	        else if (formula[k] == '-') opVec.push_back(2);
	        else if (formula[k] == 'x') opVec.push_back(3);
	        else if (formula[k] == '/') opVec.push_back(4);
	        numVec.push_back(stoi(numStr));
	        numStr = "";
	    }
	} ansInt = numVec[0];
    for (int k=0; k < opVec.size(); k++) {
        if (opVec[k] == 1) {
            ansInt += numVec[k+1];
        } else if (opVec[k] == 2) {
            ansInt -= numVec[k+1];
        } else if (opVec[k] == 3) {
            ansInt *= numVec[k+1];
        } else if (opVec[k] == 4) {
            ansInt /= numVec[k+1];
        }
    } ansStr = to_string(ansInt);
    for (int k=0; k < ansStr.length(); k++) {
        if (ansStr[k] == '0') cout << "ZERO";   
        else if (ansStr[k] == '1') cout << "ONE";
        else if (ansStr[k] == '2') cout << "TWO";
        else if (ansStr[k] == '3') cout << "THREE";
        else if (ansStr[k] == '4') cout << "FOUR";
        else if (ansStr[k] == '5') cout << "FIVE";
        else if (ansStr[k] == '6') cout << "SIX";
        else if (ansStr[k] == '7') cout << "SEVEN";
        else if (ansStr[k] == '8') cout << "EIGHT";
        else if (ansStr[k] == '9') cout << "NINE";
        else if (ansStr[k] == '-') cout << "-"; 
    } return 0;
}