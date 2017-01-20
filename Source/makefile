CC=g++
FLAGS=-Wall -Wextra -g -std=c++11 -pthread
CFLAGS=-c -DDEBUG -I ../Includes $(FLAGS)
LDFLAGS=$(FLAGS)
COMMUNICATION_SOURCES=Communication/client.cpp
SOURCES=main.cpp $(COMMUNICATION_SOURCES)
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=../Build/framboos

.PHONY: all clean rebuild

all: $(SOURCES) $(EXECUTABLE)

run:
	$(EXECUTABLE)

gdb:
	gdb $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@ $(LINK)

.cpp.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(EXECUTABLE) $(OBJECTS)

rebuild: clean all
