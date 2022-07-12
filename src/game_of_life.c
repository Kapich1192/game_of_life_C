/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   game_of_life.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Dmitriy <kapich1192@yandex.ru>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 17:59:25 by Dmitriy           #+#    #+#             */
/*   Updated: 2022/07/12 18:05:49 by Dmitriy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

#define HEIGTH 25
#define WEIGTH 80
#define MARKER '*'

void printGameField(char **gameField);

int main(void) {
	
	return (0);
}

void printGameField(char **gameField) {
	for (int i = 0; i < HEIGTH; i++) {
		for (int j = 0; j < WEIGTH; j++) {
			printf("%c", gameField[i][j]);
		}
		printf("\n");
	}
}

