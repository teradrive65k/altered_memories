CC = g++
CFLAGS = -Wall -Wextra -std=c++11
DEBUG_FLAGS = -g

SRCS = main.cpp linked_list.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = my_program
DEBUG_TARGET = debug

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
$(DEBUG_TARGET): $(SRCS)
	$(CC) $(CFLAGS) -c -o $@ $<
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS) $(TARGET)

