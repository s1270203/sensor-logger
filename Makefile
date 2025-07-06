CC = gcc
CFLAGS = -Wall

SRCS = main.c average.c minmax.c filter.c logger.c
OBJS = $(SRCS:.c=.o)

all: sensor_logger

sensor_logger: $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -f *.o sensor_logger