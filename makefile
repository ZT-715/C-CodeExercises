# makefile to compile all exercises into objects file

C_SOURCE=$(wildcard *.c)

OBJ=$(subst .c,.o,$(addprefix objects/,$(C_SOURCE)))

all: objects_directory $(OBJ)
	@echo "\033[01;37m All files compiled."

./objects/%.o: ./%.c
	@echo "\033[1;37m Compiling $(notdir $@):"
	@gcc -Wall -g $< -o $@
	@echo "\033[1;32m Success \n"

objects_directory:
	@mkdir -p "objects"

clean:
	@rm -v ./objects/*.o
	@echo "\033[1;32m All cleaning done!\n"