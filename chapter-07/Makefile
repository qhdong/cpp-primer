OBJECTS = count_sales.out myperson.out

include ../GNU_makefile_template

count_sales.o Sales_data.o: Sales_data.h

myperson.o Person.o: Person.h

count_sales.out: count_sales.o Sales_data.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) count_sales.o Sales_data.o -o count_sales.out

myperson.out: myperson.o Person.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) $^ -o $@

