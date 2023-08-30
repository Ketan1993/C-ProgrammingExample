CC=gcc
CFLAG= -g -Wall

#target application name
TARGET ?= app.exe

#building directory
BUILD_DIR ?= ./build

#source file find
SRCS := $(shell find *.c)
OBJS := $(SRCS:%=$(BUILD_DIR)/%.o)

$(BUILD_DIR)/$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $@


# c source
$(BUILD_DIR)/%.c.o: %.c
	@ $(MKDIR_P) $(dir $@)
	$(CC) $(CFLAG) -c $< -o $@
	

.PHONY: clean

clean:
	$(RM) -r $(BUILD_DIR)

MKDIR_P ?= mkdir -p

