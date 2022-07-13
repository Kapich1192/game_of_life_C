/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_of_life.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:59:25 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/07/13 08:36:00 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define HEIGTH 25
#define WEIGTH 80
#define MARKER '*'

void printGameField(char **gameField);
void initializeIndic(int **indic);
void life(int **indic, int y, int x);
void dead(int **indic, int y, int x);
void countLife(char **gameField, int y, int x);
void downloadPatern();
void skip();

int main(void) {
	int **indic = (int**)malloc(HEIGTH * sizeof(int*));
	for (int i = 0; i < HEIGTH; i++) {
		indic[i] = (int*)malloc(WEIGTH * sizeof(int));
	}
	initializeIndic(indic);

	for (int i = 0; i < HEIGTH; i++) {
		free(indic[i])
	}
	free(indic);
	indic = NULL;
	return (0);
}

void skip() {
	printf("\e[1;1H\e[2J");
}

void initializeIndic(int **indic) {
	for (int i = 0; i < HEIGTH; i++) {
		for (int j = 0; j < WEIGTH; j++) {
			indic[i][j] = 0;
		}
	}
}

void printGameField(char **gameField) {
	for (int i = 0; i < HEIGTH; i++) {
		for (int j = 0; j < WEIGTH; j++) {
			printf("%c", gameField[i][j]);
		}
		printf("\n");
	}
}

