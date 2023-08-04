// Compiler Theory and Design
// Duane J. Jarc

typedef char* CharPtr;

enum Types {MISMATCH, INT_TYPE, BOOL_TYPE, REAL_TYPE};

void checkAssignment(Types lValue, Types rValue, string message);
Types checkArithmetic(Types left, Types right);
Types checkLogical(Types left, Types right);
Types checkRelational(Types left, Types right);


//added functions
Types checkRemOp(Types left, Types right);
Types checkIfStatement(Types left, Types middle, Types right);
Types checkCase(Types left, Types middle, Types right);
