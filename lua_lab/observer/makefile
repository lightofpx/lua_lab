###makefile###
EXEC=observer_test
DESIGN_PATTERN_HOME=/home/sxj/design_pattern
PROJECT_HOME=${DESIGN_PATTERN_HOME}/observer
##complier
CC=g++
###flag
CFLAGS = -O2 -fPIC #-D_TRACE
##include
INCLUDES=-I${DESIGN_PATTERN_HOME}
SRC_PRDFIX =  $(shell echo $(DESIGN_PATTERN_HOME)|sed 's|\/|\\\/|g')

#######################
OBSERVEROBJ = \
    $(PROJECT_HOME)/main.o \
    $(PROJECT_HOME)/Blog.o \
    $(PROJECT_HOME)/Observer.o \
    $(PROJECT_HOME)/ObserverBlog.o \
    $(PROJECT_HOME)/BlogCsdn.o

#############
observer_test: $(OBSERVEROBJ)
	$(CC) -o $@ $+ -ldl -lpthread

#############
.SUFFIXES: .c .o .cpp .pc

%.o : %.cpp
	$(CC) -MM -E $(CFLAGS) $(INCLUDES)  $< > $*.d
	sed -i  -e 's|.*:|$*.o:|' -e '/$(SRC_PRDFIX)/!d' $*.d
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

%.o : %.c
	$(CC) -MM -E $(CFLAGS) $(INCLUDES)  $< > $*.d
	sed -i  -e 's|.*:|$*.o:|' -e '/$(SRC_PRDFIX)/!d' $*.d
	$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@
clean:
	find $(PROJECT_HOME)/ -name "*.o" -o -name -"*.lis" -o -name "*.d" -o -name "*.gcno" -o -name "*.gcda" | xargs rm -rf {} \;
	rm -rf $(EXEC)
