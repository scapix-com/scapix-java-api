// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/nio/file/DirectoryStream_Filter.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_ACCEPTALLFILTER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_ACCEPTALLFILTER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class Files_AcceptAllFilter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::Files_AcceptAllFilter>
{
	static constexpr fixed_string class_name = "java/nio/file/Files$AcceptAllFilter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::nio::file::DirectoryStream_Filter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_ACCEPTALLFILTER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_ACCEPTALLFILTER)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_ACCEPTALLFILTER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/nio/file/Path.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::file::Files_AcceptAllFilter : public jni::object_base<"java/nio/file/Files$AcceptAllFilter",
	java::lang::Object,
	java::nio::file::DirectoryStream_Filter>
{
public:

	jboolean accept(jni::ref<java::nio::file::Path> entry) { return call_method<"accept", jboolean>(entry); }

protected:

	Files_AcceptAllFilter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_FILES_ACCEPTALLFILTER
