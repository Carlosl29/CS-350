#include <stdio.h>
#include <stdlib.h>

//New data types are defined/created

//This represents a word of SDC memory		
typedef short int Word;          
typedef unsigned char Address;   
//This represents an SDC address


//Constants
#define MEMLEN 100
#define NREG 10


//struct CPU format created
typedef struct {
	Word mem[MEMLEN];
	Word reg[NREG];      // Note: "register" is a reserved word
	Address pc;          // Program Counter
	int running;         // running = 1 iff CPU is executing instructions
	Word ir;             // Instruction Register
	int instr_sign;      //   sign of instruction
	int opcode;          //   opcode field
	int reg_R;           //   register field
	int addr_MM;         //   memory field
} CPU;

