// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILE_TEMPDIRECTORY_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILE_TEMPDIRECTORY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class File_TempDirectory; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::File_TempDirectory>
{
	static constexpr fixed_string class_name = "java/io/File$TempDirectory";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILE_TEMPDIRECTORY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILE_TEMPDIRECTORY)
#define SCAPIX_JAVA_API_JAVA_IO_FILE_TEMPDIRECTORY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::io::File_TempDirectory : public jni::object_base<"java/io/File$TempDirectory",
	java::lang::Object>
{
public:


protected:

	File_TempDirectory(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILE_TEMPDIRECTORY
