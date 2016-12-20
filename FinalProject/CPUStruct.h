#include <stdio.h>
#include <stdlib.h>
//New data types are defined/created

//This represents a word of SDC memory		
typedef short int Word;          
//This represents an SDC address
typedef unsigned short int Address;   


//Constants
#define MEMLEN 65535
#define NREG 8


//struct CPU format created
typedef struct 
{
	Word mem[MEMLEN];
	Word reg[NREG];      // Note: "register" is a reserved word
	Address pc;          // Program Counter
	Address origin;
	char cc;
	int running;         // running = 1 iff CPU is executing instructions
	Word ir;             // Instruction Register
	int instr_sign;      //   sign of instruction
	int opcode;          //   opcode field
	int reg_R;           //   register field
	int addr_MM;         //   memory field
} CPU;

