/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchirkin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/20 16:21:55 by dchirkin          #+#    #+#             */
/*   Updated: 2017/06/02 11:07:18 by dchirkin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <locale.h>

int     main(int argc, char **argv)
{
	intmax_t r = 0x133F6;
	setlocale(LC_ALL, "");
	int i;

//    printf("%x\n", 42);
//	ft_printf("%x\n", 42);
	ft_printf("%#x\n", 42);
	printf("%#x\n", 42);
    return(0);
}


//  printf("%x\n", L'ሴ');
//  ft_printf("%S\n", r);
/*  ft_printf("%S\n", L"੦ሴሴሴ");
    ft_printf("%S\n", L"КукушикиЭЭ Ё ");
    ft_printf("%10.5S\n", L"йц в!");
    printf("%-10.5s\n", "abs");*/
/*  ft_printf("%C\n", L'੦');
    ft_printf("%C\n", L'ሴ');
    ft_printf("%C\n", r);*/
//  ft_printf("%C\n", L'ሴ');
