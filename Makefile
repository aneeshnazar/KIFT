# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anazar <anazar@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/08 12:43:34 by anazar            #+#    #+#              #
#    Updated: 2017/11/11 14:42:42 by anazar           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = server
FILES = main get_output get_curr_time get_curr_date tell_joke sing_for_me \
		steal_soul change_lights check_stuff play_music whose_connected \
		set_alarm send_email check_history search_web
FLAGS = -Wall -Werror -Wextra -Ilibft/includes -Iincludes
LFLAG = -L libft -lft
SRC_DIR = src/
LIB_DIR = libft/
SRC = $(addprefix $(SRC_DIR), $(patsubst %, %.c, $(FILES)))
OBJ = $(addprefix ./obj/, $(patsubst %, %.o, $(FILES)))
VOICE = voice_interface

all: $(NAME)

lib:
	@make -C $(LIB_DIR) re

$(VOICE):
	@gcc $(FLAGS) voice_input/main.c -o $(VOICE)

$(NAME): $(OBJ) $(VOICE)
	@$(MAKE) lib
	@gcc $(OBJ) $(LFLAG) -o $(NAME)
	@printf '\033[32m[ ✔ ] %s\n\033[0m' "Created KIFT & Good Boye"

./obj/%.o: ./src/%.c
	@gcc $(FLAGS) -c $< -o $@

clean:
	@make -C libft/ clean
	@rm -rf ./obj/*.o
	@printf '\033[32m[ ✔ ] %s\n\033[0m' "Cleaned KIFT, Good Bye Good Boye :("

fclean:
	@make -C libft/ fclean
	@$(MAKE) clean
	@rm -rf $(NAME)
	@rm -rf $(VOICE)
	@printf '\033[32m[ ✔ ] %s\n\033[0m' "Fcleaned KIFT, Good Bye Forever Good Boye :("

re:
	@$(MAKE) fclean
	@$(MAKE) all
