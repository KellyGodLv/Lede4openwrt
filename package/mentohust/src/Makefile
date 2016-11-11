# target file
#kellygod95@gmail.com

TARGET=mentohust

#src
SRCS=dlfunc.c md5.c mentohust.c mycheck.c myconfig.c myfunc.c myini.c mystate.c

OBJS = $(SRCS:.c=.o)

$(TARGET):$(OBJS)
	$(CC) -o mentohust $^ -ldl libiconv.a

clean:  
	rm -rf $(TARGET) $(OBJS)  

%.o:%.c
	$(CC) $(CFLAGS) -o $@ -c $<
