TARGET	:= built-in.o
OBJS	:= $(patsubst %.c, %.o, $(wildcard *.c))
CFLAGS 	:= -I../include

all: $(OBJS)
	$(LD) -r $(OBJS) -o $(TARGET)

clean:
	rm -rf *.o $(TARGET)

