#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include <string>
#include <streambuf>

using namespace std;

void encryptText(string text);
string decryptText(string morse);

int main() {
	system("cls");
	int menuChoice = 0;
	int menu = 0;
	string message = " ";
	string morseInput = " ";
	string inputFile = " ";
	string userInput;
	
	while (menuChoice != 3){
	cout << "\n";
	cout << "  _____                            _ _              " << "\n";
	cout << " / ____|                          (_) |             " << "\n";
	cout << "| (___   __ _ _ __ ___   __ _ _ __ _| |_ __ _ _ __  " << "\n"; 
	cout << " \\___ \\ / _` | '_ ` _ \\ / _` | '__| | __/ _` | '_ \\ " << "\n";
	cout << " ____) | (_| | | | | | | (_| | |  | | || (_| | | | |" << "\n";
	cout << "|_____/ \\__,_|_| |_| |_|\\__,_|_|  |_|\\__\\__,_|_| |_|" << "\n";
	cout << "\n";
	cout << "WELCOME TO SAMARITAN\n";
	
		string result = ""; 
		cout << "\n"; 
		cout << "Enter 1 to Encrypt using Morse Code\n";
		cout << "Enter 2 to Decrypt file\n";
		cout << "Enter 3 to Exit\n";
		cout << "\n";
		cout << "Note*: Non-valid inputs will not work\n";
		cout << "\n";
		cin >> menuChoice;
		
		if (menuChoice == 1){
		
			cout << "\n";
			cout << "Enter text here: ";
			cin.ignore();
			getline(cin, userInput);
			//cin.ignore(1000, 10);
			cout << "\n";
			encryptText(userInput);
		}	
		else if (menuChoice == 2){
			cout << "\n";
			cout << "Enter file name here: ";
			cin >> inputFile;
			inputFile += ".txt";
			ifstream fin;
			fin.open(inputFile.c_str());
			
			if (!fin.good()){
				cout << "\n";
				cout << "File does not exist: Hit ctrl-C to exit";
			}
			while (!fin.eof()) {
				getline(fin, morseInput);
				fin.ignore();
			}
			fin.close();
			message = decryptText(morseInput);
			cout << "\n";
			cout << "Decrypted Message: " << message << "\n";
			cout << "\n";
			cout << "Enter 1 to continue: ";
			cin >> menu;
			
			if (menu = 1) {
				system("cls");
			}
		}
		else if (menuChoice == 3) {
			cout << "\n";
			cout << "Thank you for using SAMARITAN";
			cout << "\n";
			menuChoice = 3;
		}
		else {
			menuChoice = 3;
		}
	}
	return 0;
 }

string decryptText(string morse){
	string transfer = " ";
	string index = " ";
	string message = " ";
	int counter = 0;
	while (counter <= morse.length()){
		while (morse[counter] != ' ' && morse[counter] != '\0') {
			index = morse[counter];
			transfer.append(index);
			counter++;
		}
		if (transfer == " .-") {
			message += "A";
			transfer = " ";
		}
		else if (transfer == " -...") {
			message += "B";
			transfer = " ";
		}
		else if (transfer == " -.-.") {
			message += "C";
			transfer = " ";
		}
		else if (transfer == " -..") {
			message += "D";
			transfer = " ";
		}
		else if (transfer == " .") {
			message += "E";
			transfer = " ";
		}
		else if (transfer == " ..-.") {
			message += "F";
			transfer = " ";
		}
		else if (transfer == " --.") {
			message += "G";
			transfer = " ";
		}
		else if (transfer == " ....") {
			message += "H";
			transfer = " ";
		}
		else if (transfer == " ..") {
			message += "I";
			transfer = " ";
		}
		else if (transfer == " .---") {
			message += "J";
			transfer = " ";
		}
		else if (transfer == " -.-") {
			message += "K";
			transfer = " ";
		}
		else if (transfer == " .-..") {
			message += "L";
			transfer = " ";
		}
		else if (transfer == " --") {
			message += "M";
			transfer = " ";
		}
		else if (transfer == " -.") {
			message += "N";
			transfer = " ";
		}
		else if (transfer == " ---") {
			message += "O";
			transfer = " ";
		}
		else if (transfer == " .--.") {
			message += "P";
			transfer = " ";
		}
		else if (transfer == " --.-") {
			message += "Q";
			transfer = " ";
		}
		else if (transfer == " .-.") {
			message += "R";
			transfer = " ";
		}
		else if (transfer == " ...") {
			message += "S";
			transfer = " ";
		}
		else if (transfer == " -") {
			message += "T";
			transfer = " ";
		}
		else if (transfer == " ..-") {
			message += "U";
			transfer = " ";
		}
		else if (transfer == " ...-") {
			message += "V";
			transfer = " ";
		}
		else if (transfer == " .--") {
			message += "W";
			transfer = " ";
		}
		else if (transfer == " -..-") {
			message += "X";
			transfer = " ";
		}
		else if (transfer == " -.--") {
			message += "Y";
			transfer = " ";
		}
		else if (transfer == " --..") {
			message += "Z";
			transfer = " ";
		}
		else if (transfer == " .-.-.-") {
			message += ".";
			transfer = " ";
		}
		else if (transfer == " --..--") {
			message += ",";
			transfer = " ";
		}
		else if (transfer == " /") {
			message += " ";
			transfer = " ";
		}
		else if (transfer == " (error)") {
			message += "(error)";
			transfer = " ";
		}
		counter++;
	}
				
	return message;
}


 void encryptText (string text){
	string code = " ";
	string temp = " ";
	for (int i = 0; i < text.length(); i++){
		char c = text[i];
		char x = toupper((int) c);
		temp += x;
	}
	text = temp;
	 for(int i; i < text.length(); i++) {
		switch (text[i]){
			 case 'A':
			   code.append(".- "); 
			   break;
			 case 'B':
			   code.append("-... "); 
			   break;
			 case 'C':
			   code.append("-.-. ");
			   break;  
			 case 'D':
			   code.append("-.. ");
			   break;
			 case 'E':
			   code.append(". ");
			   break;
			 case 'F':
			   code.append("..-. ");
			   break;  
			 case 'G':
			   code.append("--. ");
			   break;
			 case 'H':
			   code.append(".... ");
			   break;
			 case 'I':
			   code.append(".. ");
			   break;  
			 case 'J':
			   code.append(".--- ");
			   break;
			 case 'K':
			   code.append("-.- ");
			   break;
			 case 'L':
			   code.append(".-.. ");
			   break;
			 case 'M':
			   code.append("-- ");
			   break;
			 case 'N':
			   code.append("-. ");
			   break;
			 case 'O':
			   code.append("--- "); 
			   break;  
			 case 'P':
			   code.append(".--. "); 
			   break;
			 case 'Q':
			   code.append("--.- "); 
			   break;
			 case 'R':
			   code.append(".-. "); 
			   break;  
			 case 'S':
			   code.append("... "); 
			   break;
			 case 'T':
			   code.append("- ");
			   break;
			 case 'U':
			   code.append("..- "); 
			   break;  
			 case 'V':
			   code.append("...- "); 
			   break;
			 case 'W':
			   code.append(".-- "); 
			   break;
			 case 'X':
			   code.append("-..- ");
			   break;
			 case 'Y':
			   code.append("-.-- ");
			   break;
			 case 'Z':
			   code.append("--.. ");
			   break;
			 case '.':
			   code.append(".-.-.- ");
			   break;
			 case ',':
			   code.append("--..-- ");
			   break;
			  case ' ':
				code.append(" / ");
				break;
			 default:
			  code.append("(error) ");
			  break;
		}
		 
	}
		string input = " ";
		int input1 = 0;
		bool test = false;
		cout << code << endl;
		cout << "\n";
		while (test == false){
			cout << "Do you want to save to a file [y or n]?: ";
			cin >> input;
			
			if (input == "y") {
				string saveName = "";				
				cout << "\n";
				cout << "Enter name of desired save file: ";
				cin >> saveName;
				saveName += ".txt";
				ofstream fout;
				fout.open(saveName.c_str());
				
				if (!fout.good()) throw "I/O error";
				
				string file = code;
				fout << file << "\n";
				fout.close();
				
				while (input1 != 1){
					cout << "\n";
					cout << "Enter 1 to continue: ";
					cin >> input1;
					cin.ignore(1000, 10);
					cout << "\n";
					if (input1 == 1) {
						system("cls");
						test = true;
					}
					else 
						cout << "Not a valid choice...";						
				}
			}
			else if (input == "n") {
				cout << "\n";
				while (input1 != 1){
					cout << "\n";
					cout << "Enter 1 to continue: ";
					cin >> input1;
					cin.ignore(1000, 10);
					cout << "\n";
					if (input1 == 1) {
						system("cls");
						test = true;
					}
					else 
						cout << "Not a valid choice...";
				}
				
			}
			else {
				cout << "Not a valid choice...";
				cout << "\n";
			}			
		}
}




