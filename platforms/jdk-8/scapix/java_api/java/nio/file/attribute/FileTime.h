// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_FILETIME_FWD
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_FILETIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::nio::file::attribute { class FileTime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::nio::file::attribute::FileTime>
{
	static constexpr fixed_string class_name = "java/nio/file/attribute/FileTime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_FILETIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_FILETIME)
#define SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_FILETIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/time/Instant.h>
#include <scapix/java_api/java/util/concurrent/TimeUnit.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::nio::file::attribute::FileTime : public jni::object_base<"java/nio/file/attribute/FileTime",
	java::lang::Object,
	java::lang::Comparable>
{
public:

	static jni::ref<java::nio::file::attribute::FileTime> from(jlong p1, jni::ref<java::util::concurrent::TimeUnit> p2) { return call_static_method<"from", jni::ref<java::nio::file::attribute::FileTime>>(p1, p2); }
	static jni::ref<java::nio::file::attribute::FileTime> fromMillis(jlong p1) { return call_static_method<"fromMillis", jni::ref<java::nio::file::attribute::FileTime>>(p1); }
	static jni::ref<java::nio::file::attribute::FileTime> from(jni::ref<java::time::Instant> p1) { return call_static_method<"from", jni::ref<java::nio::file::attribute::FileTime>>(p1); }
	jlong to(jni::ref<java::util::concurrent::TimeUnit> p1) { return call_method<"to", jlong>(p1); }
	jlong toMillis() { return call_method<"toMillis", jlong>(); }
	jni::ref<java::time::Instant> toInstant() { return call_method<"toInstant", jni::ref<java::time::Instant>>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jint compareTo(jni::ref<java::nio::file::attribute::FileTime> p1) { return call_method<"compareTo", jint>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	FileTime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_NIO_FILE_ATTRIBUTE_FILETIME