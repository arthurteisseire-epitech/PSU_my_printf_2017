/*
** EPITECH PROJECT, 2017
** File Name : struct.h
** File description:
** By Arthur Teisseire
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct flags {
	char flag;
	int (*f)(va_list);
} flags_t;

#endif
