// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStreamReader.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILEREADER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FileReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FileReader>
{
	static constexpr fixed_string class_name = "java/io/FileReader";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStreamReader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILEREADER)
#define SCAPIX_JAVA_API_JAVA_IO_FILEREADER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/io/FileDescriptor.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::FileReader : public jni::object_base<"java/io/FileReader",
	java::io::InputStreamReader>
{
public:

	static jni::ref<java::io::FileReader> new_object(jni::ref<java::io::File> file) { return base_::new_object(file); }
	static jni::ref<java::io::FileReader> new_object(jni::ref<java::io::FileDescriptor> fd) { return base_::new_object(fd); }
	static jni::ref<java::io::FileReader> new_object(jni::ref<java::lang::String> filename) { return base_::new_object(filename); }

protected:

	FileReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILEREADER
