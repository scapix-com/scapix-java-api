// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/FilterInputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTINPUTSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTINPUTSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class DigestInputStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::DigestInputStream>
{
	static constexpr fixed_string class_name = "java/security/DigestInputStream";
	using base_classes = std::tuple<scapix::java_api::java::io::FilterInputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTINPUTSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTINPUTSTREAM)
#define SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTINPUTSTREAM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/MessageDigest.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::DigestInputStream : public jni::object_base<"java/security/DigestInputStream",
	java::io::FilterInputStream>
{
public:

	static jni::ref<java::security::DigestInputStream> new_object(jni::ref<java::io::InputStream> stream, jni::ref<java::security::MessageDigest> digest) { return base_::new_object(stream, digest); }
	jni::ref<java::security::MessageDigest> getMessageDigest() { return call_method<"getMessageDigest", jni::ref<java::security::MessageDigest>>(); }
	void setMessageDigest(jni::ref<java::security::MessageDigest> digest) { return call_method<"setMessageDigest", void>(digest); }
	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> b, jint off, jint len) { return call_method<"read", jint>(b, off, len); }
	void on(jboolean on) { return call_method<"on", void>(on); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DigestInputStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTINPUTSTREAM