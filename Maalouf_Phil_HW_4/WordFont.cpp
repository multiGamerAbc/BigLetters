////////////////////////////////////////////////////////////////////////////////
// Phil Maalouf - Homework 4 - Printing Characters as Multi-Dimensional Vectors
// CIS554 Object Oriented Programming in C++
////////////////////////////////////////////////////////////////////////////////#include "stdafx.h"
#include "stdafx.h"
#include <string>
#include "WordFont.h"


//----< prompt for input and print word in a loop >-------------------------

void WordFont::runLoop() {
	while (true) {
		doPrompt();    // prompt for input
		printWord();   // print word
	}
}
//----< prompt for input >--------------------------------------------------
void WordFont::doPrompt() {
	// prompt for word
	cout << "Enter a word using a combination of:" << endl;
	cout << "A E I O U and P Q R S T V W X Y Z" << endl;
	cout << "(8 letter max - may need to adjust console size)" << endl;
	cout << "input word:  ";
	getline(cin, inputWord);
	cout << "You entered: " << inputWord << endl;
	// prompt for drawing character
	cout << "Enter the pixel character you want to use to draw " << endl;
	cout << "pixel character:  ";
	cin >> myDrawingChar;
	cout << "You entered: " << myDrawingChar << endl;
	cin.get();
	// prompt for font size
	cout << "Enter the Font Size (8 or 10, default is 10):" << endl;
	cout << "Font Size:  ";
	cin >> fontSize;
	cout << "You entered: " << fontSize << endl;
	cin.get();
	// validate font size
	if (fontSize != 8 && fontSize != 10) {
		fontSize = 10;
	}
	cout << "Using fontSize: " << fontSize << endl;
}
//----< print word >--------------------------------------------------------
void WordFont::printWord() {
	vector<vector<vector<char>>> seq;  // a sequence of 2D vectors (letters)
	vector<vector<char>> wrd(10); // a 2D vector representing a word
	// push each char in input word to seq
	for (char ch : inputWord) {
		ch = tolower(ch);
		switch (ch) {
		case 'a':
			seq.push_back(getA(myDrawingChar, fontSize));
			break;
		case 'e':
			seq.push_back(getE(myDrawingChar, fontSize));
			break;
		case 'i':
			seq.push_back(getI(myDrawingChar, fontSize));
			break;
		case 'o':
			seq.push_back(getO(myDrawingChar, fontSize));
			break;
		case 'u':
			seq.push_back(getU(myDrawingChar, fontSize));
			break;
		case 'p':
			seq.push_back(getP(myDrawingChar, fontSize));
			break;
		case 'q':
			seq.push_back(getQ(myDrawingChar, fontSize));
			break;
		case 'r':
			seq.push_back(getR(myDrawingChar, fontSize));
			break;
		case 's':
			seq.push_back(getS(myDrawingChar, fontSize));
			break;
		case 't':
			seq.push_back(getT(myDrawingChar, fontSize));
			break;
		case 'v':
			seq.push_back(getV(myDrawingChar, fontSize));
			break;
		case 'w':
			seq.push_back(getW(myDrawingChar, fontSize));
			break;
		case 'x':
			seq.push_back(getX(myDrawingChar, fontSize));
			break;
		case 'y':
			seq.push_back(getY(myDrawingChar, fontSize));
			break;
		case 'z':
			seq.push_back(getZ(myDrawingChar, fontSize));
			break;
		}
	}
	// populate wrd vector data from data in each letter in seq
	for (int row = 0; row < fontSize; row++) {
		for (int letter = 0; letter < seq.size(); letter++) {
			for (int col = 0; col < fontSize; col++) {
				wrd.at(row).push_back(seq.at(letter).at(row).at(col));
			}
		}
	}
	// print wrd
	for (int rows = 0; rows<fontSize; rows++)
	{
		for (int cols = 0; cols<wrd.at(0).size(); cols++)
		{
			cout << setw(2) << right << wrd[rows][cols];
		}
		cout << endl;
	}
}

//--------------------------------------------------------------------------
//----< letter methods >----------------------------------------------------

// Vowels

vector<vector<char>> WordFont::getA(char pixel, int fontSize) {
	if(fontSize == 8){
		return letterA(pixel);
	}
	else {
		return letterA_(pixel);
	}
}

vector<vector<char>> WordFont::getE(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterE(pixel);
	}
	else {
		return letterE_(pixel);
	}
}

vector<vector<char>> WordFont::getI(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterI(pixel);
	}
	else {
		return letterI_(pixel);
	}
}

vector<vector<char>> WordFont::getO(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterO(pixel);
	}
	else {
		return letterO_(pixel);
	}
}

vector<vector<char>> WordFont::getU(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterU(pixel);
	}
	else {
		return letterU_(pixel);
	}
}

// Consonants

vector<vector<char>> WordFont::getP(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterP(pixel);
	}
	else {
		return letterP_(pixel);
	}
}

vector<vector<char>> WordFont::getQ(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterQ(pixel);
	}
	else {
		return letterQ_(pixel);
	}
}

vector<vector<char>> WordFont::getR(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterR(pixel);
	}
	else {
		return letterR_(pixel);
	}
}

vector<vector<char>> WordFont::getS(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterS(pixel);
	}
	else {
		return letterS_(pixel);
	}
}

vector<vector<char>> WordFont::getT(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterT(pixel);
	}
	else {
		return letterT_(pixel);
	}
}

vector<vector<char>> WordFont::getV(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterV(pixel);
	}
	else {
		return letterV_(pixel);
	}
}

vector<vector<char>> WordFont::getW(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterW(pixel);
	}
	else {
		return letterW_(pixel);
	}
}

vector<vector<char>> WordFont::getX(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterX(pixel);
	}
	else {
		return letterX_(pixel);
	}
}

vector<vector<char>> WordFont::getY(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterY(pixel);
	}
	else {
		return letterY_(pixel);
	}
}

vector<vector<char>> WordFont::getZ(char pixel, int fontSize) {
	if (fontSize == 8) {
		return letterZ(pixel);
	}
	else {
		return letterZ_(pixel);
	}
}

//--------------------------------------------------------------------------
//----< helper functions for letter methods - Large font >------------------

// Vowels Large Font

vector<vector<char>> WordFont::letterA_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(7) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(7) = pixel;
	res.at(7).at(8) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterE_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(3) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterI_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(4) = pixel;
	res.at(2).at(5) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(3) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterO_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(7) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(7) = pixel;
	res.at(7).at(8) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(3) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterU_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(7) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(7) = pixel;
	res.at(7).at(8) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(3) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

// Consonants Large Font

vector<vector<char>> WordFont::letterP_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterQ_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(6).at(7) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	res.at(7).at(7) = pixel;
	res.at(7).at(8) = pixel;
	res.at(8).at(5) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterR_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterS_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(7) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(7) = pixel;
	res.at(7).at(8) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(3) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterT_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(4) = pixel;
	res.at(2).at(5) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterV_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(7) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(7) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(7) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(7) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(7) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(6) = pixel;
	res.at(7).at(7) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterW_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(8) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(8) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(8) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(8) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(8) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	res.at(7).at(8) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterX_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(3) = pixel;
	res.at(2).at(6) = pixel;
	res.at(2).at(7) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(6) = pixel;
	res.at(7).at(7) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterY_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(3) = pixel;
	res.at(2).at(6) = pixel;
	res.at(2).at(7) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterZ_(char pixel) {
	vector<vector<char>> res(fontSize, vector<char>(fontSize));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(0).at(7) = pixel;
	res.at(0).at(8) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(1).at(7) = pixel;
	res.at(1).at(8) = pixel;
	res.at(2).at(6) = pixel;
	res.at(2).at(7) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(8).at(1) = pixel;
	res.at(8).at(2) = pixel;
	res.at(8).at(3) = pixel;
	res.at(8).at(4) = pixel;
	res.at(8).at(5) = pixel;
	res.at(8).at(6) = pixel;
	res.at(8).at(7) = pixel;
	res.at(8).at(8) = pixel;
	res.at(9).at(1) = pixel;
	res.at(9).at(2) = pixel;
	res.at(9).at(3) = pixel;
	res.at(9).at(4) = pixel;
	res.at(9).at(5) = pixel;
	res.at(9).at(6) = pixel;
	res.at(9).at(7) = pixel;
	res.at(9).at(8) = pixel;
	return res;
}

//--------------------------------------------------------------------------
//----< helper functions for letter methods - large font >------------------

// Vowels Small Font

vector<vector<char>> WordFont::letterA(char pixel) {
	vector<vector<char>> res(8, vector<char>(8, 0));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterE(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterI(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(3) = pixel;
	res.at(2).at(4) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterO(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterU(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

// Consonants Small Font

vector<vector<char>> WordFont::letterP(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterQ(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(4) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterR(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterS(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;

	return res;
}

vector<vector<char>> WordFont::letterT(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(3) = pixel;
	res.at(2).at(4) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterV(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(2) = pixel;
	res.at(3).at(5) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(5) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(5) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterW(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(1) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(1) = pixel;
	res.at(3).at(6) = pixel;
	res.at(4).at(1) = pixel;
	res.at(4).at(6) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(6) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterX(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(3) = pixel;
	res.at(2).at(4) = pixel;
	res.at(2).at(5) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(5).at(5) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterY(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(2) = pixel;
	res.at(2).at(3) = pixel;
	res.at(2).at(4) = pixel;
	res.at(2).at(5) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(5).at(3) = pixel;
	res.at(5).at(4) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	return res;
}

vector<vector<char>> WordFont::letterZ(char pixel) {
	vector<vector<char>> res(8, vector<char>(8));
	res.at(0).at(1) = pixel;
	res.at(0).at(2) = pixel;
	res.at(0).at(3) = pixel;
	res.at(0).at(4) = pixel;
	res.at(0).at(5) = pixel;
	res.at(0).at(6) = pixel;
	res.at(1).at(1) = pixel;
	res.at(1).at(2) = pixel;
	res.at(1).at(3) = pixel;
	res.at(1).at(4) = pixel;
	res.at(1).at(5) = pixel;
	res.at(1).at(6) = pixel;
	res.at(2).at(4) = pixel;
	res.at(2).at(5) = pixel;
	res.at(2).at(6) = pixel;
	res.at(3).at(3) = pixel;
	res.at(3).at(4) = pixel;
	res.at(3).at(5) = pixel;
	res.at(4).at(2) = pixel;
	res.at(4).at(3) = pixel;
	res.at(4).at(4) = pixel;
	res.at(5).at(1) = pixel;
	res.at(5).at(2) = pixel;
	res.at(5).at(3) = pixel;
	res.at(6).at(1) = pixel;
	res.at(6).at(2) = pixel;
	res.at(6).at(3) = pixel;
	res.at(6).at(4) = pixel;
	res.at(6).at(5) = pixel;
	res.at(6).at(6) = pixel;
	res.at(7).at(1) = pixel;
	res.at(7).at(2) = pixel;
	res.at(7).at(3) = pixel;
	res.at(7).at(4) = pixel;
	res.at(7).at(5) = pixel;
	res.at(7).at(6) = pixel;
	return res;
}