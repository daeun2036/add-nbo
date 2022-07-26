TARGET = add-nbo
CC = gcc
OPT = -o

add-nbo : add-nbo.o
	$(CC) $(OPT) $(TARGET) add-nbo.c

clean:
	rm -f *.o $(TARGET)
