// Compiler Theory and Design
// Dr. Duane J. Jarc

// This file contains the bodies of the functions that produces the compilation
// listing

#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

#include "listing.h"

static int lineNumber;
static string error = "";
static int totalErrors = 0;
static int totallexicalErrrors = 0; 
static int totalSyntaxErrrors = 0;
static int totalSemmanticErrors = 0;

static void displayErrors();

void firstLine()
{
	lineNumber = 1;
	printf("\n%4d  ",lineNumber);
}

void nextLine()
{
	displayErrors();
	lineNumber++;
	printf("%4d  ",lineNumber);
}

int lastLine()
{
	printf("\r");
	printf("     \n");
	if(totalErrors > 0){
		cout << "Lexical Errors " << totallexicalErrrors<< "\n";
		cout << "Syntax Errors " << totalSyntaxErrrors<< "\n";
		cout << "Semantic Errors " << totalSemmanticErrors<< "\n";
		
	}else{
		printf("%s\n", "Compiled Successfully");
	}
	

	return totalErrors;
}
    
void appendError(ErrorCategories errorCategory, string message)
{
	string messages[] = { "Lexical Error, Invalid Character ", "",
		"Semantic Error, ", "Semantic Error, Duplicate Identifier: ",
		"Semantic Error, Undeclared " };
	if (messages[errorCategory] == "Lexical Error, Invalid Character "){
		totallexicalErrrors++;
	}else if (messages[errorCategory] == ""){
		totalSyntaxErrrors++;
	}else{
		totalSemmanticErrors++;
	}
	error += messages[errorCategory] + message + "\n";
	totalErrors++;
}

void displayErrors()
{
	if (error != "")
		printf("%s\n", error.c_str());	
		error = "";
}
