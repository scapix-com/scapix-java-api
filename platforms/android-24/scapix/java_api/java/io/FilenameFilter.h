// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_FILENAMEFILTER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_FILENAMEFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class FilenameFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::FilenameFilter>
{
	static constexpr fixed_string class_name = "java/io/FilenameFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILENAMEFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_FILENAMEFILTER)
#define SCAPIX_JAVA_API_JAVA_IO_FILENAMEFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/File.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::FilenameFilter : public jni::object_base<"java/io/FilenameFilter",
	java::lang::Object>
{
public:

	jboolean accept(jni::ref<java::io::File> p1, jni::ref<java::lang::String> p2) { return call_method<"accept", jboolean>(p1, p2); }

protected:

	FilenameFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_FILENAMEFILTER
