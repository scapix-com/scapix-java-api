// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_SQL_BLOB_FWD
#define SCAPIX_JAVA_API_JAVA_SQL_BLOB_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::sql { class Blob; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::sql::Blob>
{
	static constexpr fixed_string class_name = "java/sql/Blob";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_BLOB_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SQL_BLOB)
#define SCAPIX_JAVA_API_JAVA_SQL_BLOB

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::sql::Blob : public jni::object_base<"java/sql/Blob",
	java::lang::Object>
{
public:

	jlong length() { return call_method<"length", jlong>(); }
	jni::ref<jni::array<jbyte>> getBytes(jlong p1, jint p2) { return call_method<"getBytes", jni::ref<jni::array<jbyte>>>(p1, p2); }
	jni::ref<java::io::InputStream> getBinaryStream() { return call_method<"getBinaryStream", jni::ref<java::io::InputStream>>(); }
	jlong position(jni::ref<jni::array<jbyte>> p1, jlong p2) { return call_method<"position", jlong>(p1, p2); }
	jlong position(jni::ref<java::sql::Blob> p1, jlong p2) { return call_method<"position", jlong>(p1, p2); }
	jint setBytes(jlong p1, jni::ref<jni::array<jbyte>> p2) { return call_method<"setBytes", jint>(p1, p2); }
	jint setBytes(jlong p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4) { return call_method<"setBytes", jint>(p1, p2, p3, p4); }
	jni::ref<java::io::OutputStream> setBinaryStream(jlong p1) { return call_method<"setBinaryStream", jni::ref<java::io::OutputStream>>(p1); }
	void truncate(jlong p1) { return call_method<"truncate", void>(p1); }
	void free() { return call_method<"free", void>(); }
	jni::ref<java::io::InputStream> getBinaryStream(jlong p1, jlong p2) { return call_method<"getBinaryStream", jni::ref<java::io::InputStream>>(p1, p2); }

protected:

	Blob(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SQL_BLOB
