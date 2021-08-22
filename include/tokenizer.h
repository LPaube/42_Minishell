/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tokenizer.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mleblanc <mleblanc@student.42quebec.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 15:15:12 by mleblanc          #+#    #+#             */
/*   Updated: 2021/08/22 17:57:35 by mleblanc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TOKENIZER_H
# define TOKENIZER_H

# include "libft.h"

typedef enum e_token_type
{
	STRING,
	OPERATOR,
}	t_token_type;

typedef struct s_token
{
	char			*value;
	t_token_type	type;
}	t_token;

typedef struct s_tokenizer
{
	char			*str;
	unsigned int	cursor;
	t_token			*next_token;
}	t_tokenizer;

t_list	*tokenize(t_tokenizer *tok);

#endif
