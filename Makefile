CC:=g++
CFLAGS:=-Wall -O3

INCDIR:=include
SRCDIR:=src
OBJDIR:=obj
BINDIR:=bin

TESTSRC:=testsrc
TESTBIN:=$(TESTSRC)/bin

# Make all

all: tests

# Make tests

tests: $(TESTBIN)/math_test

$(TESTBIN)/math_test: $(OBJDIR)/math_test.o $(OBJDIR)/math.o
	$(CC) $(CFLAGS) -o $@ $^ -I$(INCDIR)

# General rules

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp $(INCDIR)/%.hpp
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

$(OBJDIR)/%.o: $(TESTSRC)/%.cpp
	$(CC) $(CFLAGS) -c $< -o $@ -I$(INCDIR)

# Upload to git

upload: clean
	git add --all
	git commit
	git push

# Clean binaries

clean:
	rm -f $(OBJDIR)/*.o
	rm -f $(BINDIR)/*
	rm -f $(TESTBIN)/*

# Configure folder structure

configure:
	mkdir -p $(INCDIR)
	mkdir -p $(SRCDIR)
	mkdir -p $(OBJDIR)
	mkdir -p $(BINDIR)
	mkdir -p $(TESTSRC)
	mkdir -p $(TESTBIN)
