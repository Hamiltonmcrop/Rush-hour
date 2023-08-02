	
// Compiler Theory and Design
// Dr. Duane J. Jarc
// This file contains the bodies of the functions that produces the compilation
// listing


typedef char* CharPtr;

enum Types {MISMATCH, INT_TYPE, BOOL_TYPE, REAL_TYPE};

void checkAssignment(Types lValue, Types rValue, string message);
Types checkArithmetic(Types left, Types right);
Types checkLogical(Types left, Types right);
Types checkRelational(Types left, Types right);
void storeReturnType(Types returnType);
void checkReturnType(Types currentType);
Types checkRemainder(Types left, Types right);
Types checkIf(Types ifCheck);
void checkThenElse(Types currentThen, Types currentElse);
Types checkCaseExpression(Types caseCheck);
void storeFirstWhen(Types whenStore);
void checkCaseWhen(Types currentWhen, string location);
