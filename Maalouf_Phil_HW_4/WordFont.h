////////////////////////////////////////////////////////////////////////////////
// Phil Maalouf - Homework 4 - Printing Characters as Multi-Dimensional Vectors
// CIS554 Object Oriented Programming in C++
////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <iomanip> 
#include <vector>
using namespace std;

////////////////////////////////////////////////////////////////////////////////
// class for reading input word and printing to screen

class WordFont {
public:
	//----< prompt for input and print word in a loop >-------------------------
	void runLoop();
private:
	//----< prompt for input >--------------------------------------------------
	void doPrompt();
	//----< print word >--------------------------------------------------------
	void printWord();
	//----< private variables used in printWord() >-----------------------------
	int fontSize;
	string inputWord;
	char myDrawingChar;
	//----< letter methods >----------------------------------------------------
	vector<vector<char>> getA(char pixel, int fontSize);
	vector<vector<char>> getE(char pixel, int fontSize);
	vector<vector<char>> getI(char pixel, int fontSize);
	vector<vector<char>> getO(char pixel, int fontSize);
	vector<vector<char>> getU(char pixel, int fontSize);
	vector<vector<char>> getP(char pixel, int fontSize);
	vector<vector<char>> getQ(char pixel, int fontSize);
	vector<vector<char>> getR(char pixel, int fontSize);
	vector<vector<char>> getS(char pixel, int fontSize);
	vector<vector<char>> getT(char pixel, int fontSize);
	vector<vector<char>> getV(char pixel, int fontSize);
	vector<vector<char>> getW(char pixel, int fontSize);
	vector<vector<char>> getX(char pixel, int fontSize);
	vector<vector<char>> getY(char pixel, int fontSize);
	vector<vector<char>> getZ(char pixel, int fontSize);
	//----< helper functions for letter methods - large font >------------------
	vector<vector<char>> letterA_(char pixel);
	vector<vector<char>> letterE_(char pixel);
	vector<vector<char>> letterI_(char pixel);
	vector<vector<char>> letterO_(char pixel);
	vector<vector<char>> letterU_(char pixel);
	vector<vector<char>> letterZ_(char pixel);
	vector<vector<char>> letterY_(char pixel);
	vector<vector<char>> letterX_(char pixel);
	vector<vector<char>> letterW_(char pixel);
	vector<vector<char>> letterV_(char pixel);
	vector<vector<char>> letterT_(char pixel);
	vector<vector<char>> letterS_(char pixel);
	vector<vector<char>> letterR_(char pixel);
	vector<vector<char>> letterQ_(char pixel);
	vector<vector<char>> letterP_(char pixel);
	//----< helper functions for letter methods - small font >------------------
	vector<vector<char>> letterA(char pixel);
	vector<vector<char>> letterE(char pixel);
	vector<vector<char>> letterI(char pixel);
	vector<vector<char>> letterO(char pixel);
	vector<vector<char>> letterU(char pixel);
	vector<vector<char>> letterZ(char pixel);
	vector<vector<char>> letterY(char pixel);
	vector<vector<char>> letterX(char pixel);
	vector<vector<char>> letterW(char pixel);
	vector<vector<char>> letterV(char pixel);
	vector<vector<char>> letterT(char pixel);
	vector<vector<char>> letterS(char pixel);
	vector<vector<char>> letterR(char pixel);
	vector<vector<char>> letterQ(char pixel);
	vector<vector<char>> letterP(char pixel);
};