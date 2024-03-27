// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Appendable.h>
#include <scapix/java_api/java/io/Closeable.h>
#include <scapix/java_api/java/io/Flushable.h>

#ifndef SCAPIX_JAVA_API_JAVA_IO_WRITER_FWD
#define SCAPIX_JAVA_API_JAVA_IO_WRITER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::io { class Writer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::io::Writer>
{
	static constexpr fixed_string class_name = "java/io/Writer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Appendable, scapix::java_api::java::io::Closeable, scapix::java_api::java::io::Flushable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_WRITER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_IO_WRITER)
#define SCAPIX_JAVA_API_JAVA_IO_WRITER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::io::Writer : public jni::object_base<"java/io/Writer",
	java::lang::Object,
	java::lang::Appendable,
	java::io::Closeable,
	java::io::Flushable>
{
public:

	void close() { return call_method<"close", void>(); }
	void flush() { return call_method<"flush", void>(); }
	void write(jni::ref<jni::array<jchar>> buf) { return call_method<"write", void>(buf); }
	void write(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_method<"write", void>(p1, p2, p3); }
	void write(jint oneChar) { return call_method<"write", void>(oneChar); }
	void write(jni::ref<java::lang::String> str) { return call_method<"write", void>(str); }
	void write(jni::ref<java::lang::String> str, jint offset, jint count) { return call_method<"write", void>(str, offset, count); }
	jni::ref<java::io::Writer> append(jchar c) { return call_method<"append", jni::ref<java::io::Writer>>(c); }
	jni::ref<java::io::Writer> append(jni::ref<java::lang::CharSequence> csq) { return call_method<"append", jni::ref<java::io::Writer>>(csq); }
	jni::ref<java::io::Writer> append(jni::ref<java::lang::CharSequence> csq, jint start, jint end) { return call_method<"append", jni::ref<java::io::Writer>>(csq, start, end); }

protected:

	Writer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_IO_WRITER
