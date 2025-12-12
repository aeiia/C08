/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiida <tiida@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 02:39:14 by tiida             #+#    #+#             */
/*   Updated: 2025/12/12 18:56:06 by tiida            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>

typedef int	t_bool;

# define TRUE 1
# define FALSE 0
# define SUCCESS 0

//# define EVEN(n) (n % 2 == 0)

# define EVEN_MSG "I have an even number of arguments."
# define ODD_MSG "I have an odd number of arguments."

t_bool	ft_is_even(int nbr);

#endif
