OBJECTS = querymain

include ../../GNU_makefile_template

querymain: querymain.o text_query.o query_result.o text_query.h query_result.h
	$(CC) $(CCFLAGS) $(LOCFLAGS) querymain.o text_query.o query_result.o -o querymain
