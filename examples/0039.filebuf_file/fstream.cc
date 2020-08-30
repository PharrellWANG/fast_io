#include"../../include/fast_io.h"
#include"../../include/fast_io_legacy_impl/cpp/filebuf_file.h"
#include<fstream>

int main()
{
	fast_io::filebuf_file fb("ofstream.txt",fast_io::open_mode::binary|fast_io::open_mode::out);
	std::ofstream out;
	*out.rdbuf()=std::move(*fb.native_handle());
	out<<"Hello world from std::ofstream\n";
	print(fb,"Hello World from fast_io\n");
	out<<"Hello world from std::ofstream again\n";
	print(fb,"Hello World from fast_io again\n");
}