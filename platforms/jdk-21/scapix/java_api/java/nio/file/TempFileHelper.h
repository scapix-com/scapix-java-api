// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_TEMPFILEHELPER_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_TEMPFILEHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file { class TempFileHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::TempFileHelper>
{
	static constexpr fixed_string class_name = "java/nio/file/TempFileHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_TEMPFILEHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_TEMPFILEHELPER)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_TEMPFILEHELPER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::nio::file::TempFileHelper : public jni::object_base<"java/nio/file/TempFileHelper",
	java::lang::Object>
{
public:


protected:

	TempFileHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_TEMPFILEHELPER
