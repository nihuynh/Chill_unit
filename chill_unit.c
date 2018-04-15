/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chill_unit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 06:03:12 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/15 06:03:17 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chill_unit.h"

/*
** Count the tests passed and succeed. Update the master declare in the main.
*/

void	cu_run(t_chill *toby, int test_out)
{
	toby->all += 1;
	toby->pass += (test_out) ? 1 : 0;
}

/*
** init the struct s_chill:
*/

t_chill	cu_init(void)
{
	t_chill toby;

	toby.all = 0;
	toby.pass = 0;
	return (toby);
}

/*
** Helper function to dump the data.
*/

void	cu_dump_int(int in, int expect, int out)
{
	printf("\tInput: %i Expected: %i Output: %i", in, expect, out);
}

/*
** string dump.
*/

void	cu_dump_str(char *in, char *expect, char *out)
{
	printf("\tInput: %s Expected: %s Output: %s", in, expect, out);
}
