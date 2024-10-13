SOURCE  := $(shell find csrc -name "k.c")
SOURCE2 := $(shell find vsrc -name "p.v")

all: 
	verilator --cc --exe --trace --build -Wall ./csrc/k.c  ./vsrc/p.v
	@echo "Write this makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile
