// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Closeable.h>
#include <scapix/java_api/java/io/Flushable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class OutputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::OutputStream>
{
	static constexpr fixed_string class_name = "java/io/OutputStream";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Closeable, scapix::java_api::java::io::Flushable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::OutputStream : public jni::object_base<"java/io/OutputStream",
	java::lang::Object,
	java::io::Closeable,
	java::io::Flushable>
{
public:

	static jni::ref<java::io::OutputStream> new_object() { return base_::new_object(); }
	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void write(jni::ref<jni::array<jbyte>> buffer) { return call_method<"write", void>(buffer); }
	void write(jni::ref<jni::array<jbyte>> buffer, jint offset, jint count) { return call_method<"write", void>(buffer, offset, count); }
	void write(jint p1) { return call_method<"write", void>(p1); }

protected:

	OutputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_OUTPUTSTREAM
