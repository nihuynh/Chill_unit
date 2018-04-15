/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 06:51:53 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/15 06:52:02 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chill_unit.h"

#define DEBUG 0

/*
** The function i want to test.
*/

int		ft_isodd(int value)
{
	return (value % 2) ? 1 : 0;
}

/*
** Runner.
*/

int		test_isodd(char *msg, int var, int expect_out)
{
	int carry;

	carry = ft_isodd(var);
	if (DEBUG)
		cu_dump_int(var, expect_out, carry);
	VERIFY(carry == expect_out, msg);
	return (EXIT_TEST(carry == expect_out));
}

/*
** Wrapper. Toby is the test counter where item 1 is the test pass.
*/

void	test_isodd_suite(void)
{
	t_chill counter;

	counter = cu_init();
	cu_run(&counter, test_isodd("Basic test", 10, 0));
	cu_run(&counter, test_isodd("Basic test 2", 11, 1));
	ENDSUITE(counter);
}

int		main(void)
{
	test_isodd_suite();
	return (0);
}
