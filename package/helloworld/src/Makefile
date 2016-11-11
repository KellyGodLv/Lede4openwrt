# build helloworld executable when user executes "make"  
#include $(TOPDIR)/rules.mk
TARGET_LDFLAGS:=-L$(TOPDIR)/build_dir/target-mips_34kc_uClibc-0.9.33.2/opencv-2.4.11/lib
#TARGET_LDFLAGS:=-L$(TOPDIR)/build_dir/target-i386_i486_uClibc-0.9.33.2/opencv-2.4.11/lib
helloworld: helloworld.o  
	$(CXX) $(TARGET_LDFLAGS) helloworld.o -o helloworld -lopencv_highgui -lopencv_core -lopencv_video
helloworld.o: helloworld.cpp  
	$(CXX) $(TARGET_CFLAGS) -c helloworld.cpp  
# remove object files and executable when user executes "make clean"  
clean:  
	rm *.o  
# -lstdc++ -Xlinker -fno-stack-protector  -lopencv_core -lopencv_highgui $(TARGET_LDFLAGS)
