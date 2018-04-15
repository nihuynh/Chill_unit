/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chill_unit.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nihuynh <nihuynh@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/15 06:03:21 by nihuynh           #+#    #+#             */
/*   Updated: 2018/04/15 06:50:29 by nihuynh          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHILL_UNIT_H
# define CHILL_UNIT_H
# include <stdio.h>

/*
** Define the test frame and various messages.
*/

# define FAILMSG "\nFail =>\t%s() has failed at line %d docs : %s\t"
# define FAIL(msg) printf(FAILMSG, __func__, __LINE__, msg)
# define PASS() printf("\nPass => \t%s() has succeed\t", __func__)
# define VERIFY(test, msg) (test) ? PASS() : FAIL(msg)
# define EXIT_TEST(test) (test) ? 1 : 0
# define ENDS_MSG "\nREPORT : %s (Test Pass:%i/All:%i/Fail:%i\t"
# define ENDSUITE(t) printf(ENDS_MSG, __func__, t.pass, t.all, t.all - t.pass)

/*
** Counter for the test during a suite.
*/

typedef struct	s_chill
{
	int			all;
	int			pass;
}				t_chill;

/*
** Prototypes :
*/

void			cu_dump_int(int in, int expect, int out);
void			cu_dump_str(char *in, char *expect, char *out);
void			cu_run(t_chill *toby, int test_out);
t_chill			cu_init();

#endif
