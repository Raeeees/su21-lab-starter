#include <string.h>
#include "ex1.h"

/* Returns the number of times LETTER appears in STR.
There are two different ways to iterate through a string.
1st way hint: strlen() may be useful
2nd way hint: all strings end in a null terminator */
int num_occurrences(char *str, char letter) {
    int count=0;
    for (int i=0; str[i] != '\0';i++){
	    if (str[i] == letter || str[i] == letter +32 ||str[i]== letter -32){ 
		    count++;
	    }
    }
    return count;
}

/* Populates DNA_SEQ with the number of times each nucleotide appears.
Each sequence will end with a NULL terminator and will have up to 20 nucleotides.
All letters will be upper case. */
void compute_nucleotide_occurrences(DNA_sequence *dna_seq) {
	dna_seq->A_count = 0;
	dna_seq->C_count = 0;
	dna_seq->G_count = 0;
	dna_seq->T_count = 0;
	for (int i=0; dna_seq->sequence[i] != '\0' ; i++){
		char nucleotide = dna_seq->sequence[i];
		switch (nucleotide) {
			case 'A':
				dna_seq->A_count++;
				break;
			case 'C':
				dna_seq->C_count++;
				break;
			case 'G':
				dna_seq->G_count++;
				break;
			case 'T':
			        dna_seq->T_count++;
			default:
			       break;
		}
	}
}

