SRC = src/perfect.c\
      src/factorial.c\
      src/prime.c\
      src/armstrong.c\
      src/magic.c\
      src/palindrome.c\
      src/neon.c\
      main.c

TEST_SRC = src/perfect.c\
      	   src/factorial.c\
           src/prime.c\
           src/armstrong.c\
		   src/magic.c\
		   src/palindrome.c\
           src/neon.c\
           unity/unity.c\
           test/test.c\
           test_main.c

INC = -Iinc

TEST_INC = -Itest\
		   -Iinc\
      	   -Iunity

PROJECT_NAME = BUNNIES

PROJECT_OUTPUT = $(PROJECT_NAME).out

TEST_OUTPUT = TEST_$(PROJECT_NAME).out

$(PROJECT_NAME): all

.PHONY: run clean test all

all:
	gcc $(SRC) $(INC) -o $(PROJECT_OUTPUT)

run: $(PROJECT_OUTPUT)
	./$(PROJECT_OUTPUT)

test:
	gcc $(TEST_SRC) $(TEST_INC) -o $(TEST_OUTPUT)
	./$(TEST_OUTPUT)

clean:
	rm -rf $(PROJECT_OUTPUT) $(TEST_OUTPUT)

