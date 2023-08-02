	
// Compiler Theory and Design
// Dr. Duane J. Jarc
// This file contains the bodies of the functions that produces the compilation
// listing

enum ErrorCategories {LEXICAL, SYNTAX, GENERAL_SEMANTIC, DUPLICATE_IDENTIFIER,
	UNDECLARED};

void firstLine();
void nextLine();
int lastLine();
void appendError(ErrorCategories errorCategory, string message);

