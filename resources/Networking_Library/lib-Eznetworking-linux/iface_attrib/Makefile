.PHONY : clean

CFLAGS= -fPIC -g
LDFLAGS= -shared

SOURCES = $(shell echo *.c)
HEADERS = $(shell echo *.h)
OBJECTS=$(SOURCES:.c=.o)

TARGET_LIBDIR=../lib
TARGET_INCDIR=../include

TARGET=$(TARGET_LIBDIR)/libifaceAttrib.so

all: $(TARGET)

clean:
	rm -f $(OBJECTS) $(TARGET)

$(TARGET) : $(OBJECTS)
	@mkdir -p ../lib
	@mkdir -p ../include
	@cp public/*.h ../include
	$(CC) $(CFLAGS) $(OBJECTS) -o $@ $(LDFLAGS)
