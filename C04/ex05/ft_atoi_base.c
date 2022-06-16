/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clcarre <clcarrer@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 16:40:25 by clcarre           #+#    #+#             */
/*   Updated: 2022/02/24 12:41:04 by clcarre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
• Escribe una función que convierta el principio de la cadena apuntada por str en un
entero de tipo int.
• str está en una base específica pasada como segundo argumento de la función.
• Con excepción del sistema de base, esta función debe reproducir el comportamiento
de ft_atoi.
• Si un parámetro contiene un error, la función devuelve 0. Un error puede ser:
◦ la base está vacía o su tamaño es 1;
◦ la base contiene dos veces el mismo carácter;
◦ la base contiene los caracteres + o - o espacios;
*/
int ft_atoi_base(char *str, char *base)