CC = gcc
OBJS = obj/arithmetic.o obj/condition.o obj/interpreter.o obj/print.o obj/variable.o obj/main.o

c_minus_minus: $(OBJS)	#run c-- to compile all objs files
	$(CC) $^ -o $@

unit_test_%: obj/%.o	#to compile a particular unit_test
	$(CC) test/$@.c $^ -o $@

obj/%.o: src/%.c	#to compile  files under src, ie all .c file
	$(CC) -c $< -o $@



clean:
	del $(subst /,\,$(OBJS))
