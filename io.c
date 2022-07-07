/* SPDX-License-Identifier: GPL-2.0-only */
/*
 * io.c
 *
 * Copyright (C) 2022 Bryan Hinton
 *
 */
#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv) 
{
	if(argc > 1) 
		return EXIT_FAILURE;

	void *fptr = &main;
	printf("fptr 0x%.12"PRIXPTR"\n", (uintptr_t)fptr);

	return EXIT_SUCCESS;
}
