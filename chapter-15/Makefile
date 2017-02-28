OBJECTS = usequote.out final.out override.out vector.out  \
		  wordQueryTest.out

include ../GNU_makefile_template

get_print.o wordQueryTest.o Query.o: Query.h TextQuery.h

wordQueryTest.out: Query.o wordQueryTest.o TextQuery.o get_print.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) Query.o wordQueryTest.o \
				TextQuery.o get_print.o -o wordQueryTest.out
