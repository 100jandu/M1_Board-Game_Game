PROJ_NAME = BOARD-GAme
SRC = src/SnL.c\
src/dice.c\


TEST_SRC = unity/unity.c\
test/test.c\
src/dice.c\


ifdef OS
	RM = del /q
	FixPath = $(subst /,\,$1)
	EXEC = exe
else
	ifeq ($(shell uname), Linux)
		RM = rm -rf
		FixPath = $1
	  EXEC = out
	endif
endif

INC=-Iinc\
-Iunity\
-Itest\

BUILD : 
	gcc $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) 

run: BUILD
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

BUILD_test : 
	gcc $(TEST_SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC)) 

run_test: BUILD_test
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

staticcheck:
	cppcheck --enable=all -iunity .
dynamiccheck: BUILD
	valgrind ./$(call FixPath,$(PROJ_NAME).$(EXEC))
coverage:
	gcc -fprofile-arcs -ftest-coverage $(SRC) $(INC) -o $(call FixPath,$(PROJ_NAME).$(EXEC))
	gcov -a ./$(call FixPath,$(PROJ_NAME).$(EXEC))