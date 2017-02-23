OBJECTS = shared_ptr.out test_strblob.out test_screen.out new.out \
		  exp126.out exp127.out exp.out unique_ptr.out exp1223.out \
		  exp1224.out allocator.out usequery.out

include ../GNU_makefile_template

test_strblob.out: StrBlob.h

test_screen.out: Screen.h Window_mgr.h

usequery.out: usequery.o TextQuery.o
	$(CC) $(CCFLAGS) $(LOCFLAGS) usequery.o TextQuery.o -o usequery.out
