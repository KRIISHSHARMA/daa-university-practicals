# Compilers
CXX = g++
CC  = gcc

# Flags
CFLAGS  = -Wall -g
CXXFLAGS = -Wall -g

SRC_DIR = ..
BIN_DIR = ../bin

# Source files
C_SRCS   = $(wildcard $(SRC_DIR)/*.c)
CPP_SRCS = $(wildcard $(SRC_DIR)/*.cpp)

# Targets
C_TARGETS   = $(C_SRCS:$(SRC_DIR)/%.c=$(BIN_DIR)/%)
CPP_TARGETS = $(CPP_SRCS:$(SRC_DIR)/%.cpp=$(BIN_DIR)/%)

TARGETS = $(C_TARGETS) $(CPP_TARGETS)

all: $(TARGETS)

$(BIN_DIR)/%: $(SRC_DIR)/%.c
	@mkdir -p $(BIN_DIR)
	$(CC) $(CFLAGS) $< -o $@

$(BIN_DIR)/%: $(SRC_DIR)/%.cpp
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

clean:
	rm -rf $(BIN_DIR)

.PHONY: all clean

