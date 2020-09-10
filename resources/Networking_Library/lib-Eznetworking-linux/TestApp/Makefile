.PHONY : clean

CFLAGS = -g -I ../include -Wall
LDFLAGS=-Wl,-rpath,../lib/ 

SOURCES = $(shell echo *.c)
HEADERS = $(shell echo *.h)
OBJECTS=$(SOURCES:.c=.o)

LIBNAME = ifaceAttrib

TARGET_LIBDIR= $(shell cd ../lib && pwd)

TARGET=$(pwd)/iface.exe

all: $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

$(TARGET) : $(SOURCES)
	$(CC) $(CFLAGS) $(LDFLAGS) -L$(TARGET_LIBDIR) $< -l$(LIBNAME) -o iface.exe

