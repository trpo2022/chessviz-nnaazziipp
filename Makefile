all: chess

chess: chess.c
	gcc -Wall -Werror -o chess chess.c
