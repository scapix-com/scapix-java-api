// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/Reader.h>

#ifndef SCAPIX_JAVA_API_JDK_INTERNAL_IO_JDKCONSOLEIMPL_LINEREADER_FWD
#define SCAPIX_JAVA_API_JDK_INTERNAL_IO_JDKCONSOLEIMPL_LINEREADER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::jdk::internal::io { class JdkConsoleImpl_LineReader; }

template<>
struct scapix::jni::object_traits<scapix::java_api::jdk::internal::io::JdkConsoleImpl_LineReader>
{
	static constexpr fixed_string class_name = "jdk/internal/io/JdkConsoleImpl$LineReader";
	using base_classes = std::tuple<scapix::java_api::java::io::Reader>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_IO_JDKCONSOLEIMPL_LINEREADER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JDK_INTERNAL_IO_JDKCONSOLEIMPL_LINEREADER)
#define SCAPIX_JAVA_API_JDK_INTERNAL_IO_JDKCONSOLEIMPL_LINEREADER

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class jdk::internal::io::JdkConsoleImpl_LineReader : public jni::object_base<"jdk/internal/io/JdkConsoleImpl$LineReader",
	java::io::Reader>
{
public:

	void close() { return call_method<"close", void>(); }
	jboolean ready() { return call_method<"ready", jboolean>(); }
	jint read(jni::ref<jni::array<jchar>> cbuf, jint offset, jint length) { return call_method<"read", jint>(cbuf, offset, length); }

protected:

	JdkConsoleImpl_LineReader(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JDK_INTERNAL_IO_JDKCONSOLEIMPL_LINEREADER