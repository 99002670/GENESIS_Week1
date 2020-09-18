SRC = src/perfect.c\
      src/factorial.c\
      src/prime.c\
      src/armstrong.c\
      src/magic.c\
      src/palindrome.c\
      src/neon.c\
      main.c

INC = -Iinc

PROJECT_NAME = RESULT.out

$(PROJECT_NAME): $(SRC)
	gcc $(SRC) $(INC) -o $(PROJECT_NAME)

run: $(PROJECT_NAME)
	./${PROJECT_NAME}

clean:
	rm -rf $(PROJECT_NAME)

