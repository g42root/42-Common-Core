/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gude-cas <gude-cas@student.42lisboa.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 17:01:32 by gude-cas          #+#    #+#             */
/*   Updated: 2023/10/25 12:45:34 by gude-cas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

# define INT_MIN -2147483648
# define INT_MAX 2147483647

typedef struct s_node
{
	int				value;
	struct s_node	*next;
}					t_node;

/* utils */
long				ascii_to_long(char *str);
int					ft_strlen(char *str);
char				**ft_split(const char *s, char c);

/* stack_utils */
t_node				*insert_node(int n);
t_node				*find_tail(t_node *stack);
void				insert_at_tail(t_node **stack, t_node *new_node);
void				push_args(char **av, t_node **stack);
void				free_stack(t_node **stack);
void				free_args(char **nbrs);
int					stack_length(t_node **stack);

/* checks */
int					check_dup(char **av, long tmp, int i);
int					check_num(char *str);
void				check_args(char **av, t_node **stack);
int					check_sort(t_node **stack);

/* sort */
void				sort_3(t_node **stack_a);
void				sort_5(t_node **stack_a, t_node **stack_b);
void				sort_all(t_node **stack_a, t_node **stack_b);
void				push_swap(t_node **stack_a, t_node **stack_b);

/* sort_utils */
int					get_min_pos(t_node **stack);
int					get_min_value(t_node *stack);
int					get_max_pos(t_node **stack);
int					get_median_value(t_node **stack);
int					get_bf(t_node *stack, int n);
int					get_moves(t_node *stack, int n, int len);
int					get_cost(t_node *stack_a, t_node *stack_b, int n, int bf);
int					get_cheapest(t_node *stack_a, t_node *stack_b);
void				climb_stack_a(t_node **stack, int n);
void				climb_stack_b(t_node **stack, int n);

/* operations */
void				pa(t_node **stack_a, t_node **stack_b);
void				pb(t_node **stack_a, t_node **stack_b);

void				rotate(t_node **stack);
void				ra(t_node **stack_a);
void				rb(t_node **stack_b);
void				rr(t_node **stack_a, t_node **stack_b);

void				reverse_rotate(t_node **stack);
void				rra(t_node **stack_a);
void				rrb(t_node **stack_b);
void				rrr(t_node **stack_a, t_node **stack_b);

void				swap(t_node **stack);
void				sa(t_node **stack_a);
void				sb(t_node **stack_b);
void				ss(t_node **stack_a, t_node **stack_b);

#endif
