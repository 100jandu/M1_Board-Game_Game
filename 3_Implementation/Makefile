PROJ_NAME = BOARD-GAME/ SNAKE AND LADDER
SRC = dice.c\
diceout6.c

TEST_SRC = unity.c\
test.c


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

build : $(SRC) $(TEST_SRC)
	gcc $^ -o $(call FixPath,$(PROJ_NAME).$(EXEC))

run : build
	./$(call FixPath,$(PROJ_NAME).$(EXEC))

clean:
	$(RM) $(call FixPath,$(PROJ_NAME).$(EXEC))
