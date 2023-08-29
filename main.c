#include "rpc.h"

int	main(void)
{
	enum	choice	player1;
	enum	choice	player2;
	int				score_p1;
	int				score_p2;

	score_p1 = 0;
	score_p2 = 0;
}

enum	choice	ft_rng(void)
{
	enum	choice	rng_choice;

	rng_choice = (rand() % 3);
	return (rng_choice);
}
