// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/MessageDigestSpi.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class MessageDigest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::MessageDigest>
{
	static constexpr fixed_string class_name = "java/security/MessageDigest";
	using base_classes = std::tuple<scapix::java_api::java::security::MessageDigestSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST)
#define SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#include <scapix/java_api/java/security/Provider.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::MessageDigest : public jni::object_base<"java/security/MessageDigest",
	java::security::MessageDigestSpi>
{
public:

	static jni::ref<java::security::MessageDigest> getInstance(jni::ref<java::lang::String> algorithm) { return call_static_method<"getInstance", jni::ref<java::security::MessageDigest>>(algorithm); }
	static jni::ref<java::security::MessageDigest> getInstance(jni::ref<java::lang::String> algorithm, jni::ref<java::lang::String> provider) { return call_static_method<"getInstance", jni::ref<java::security::MessageDigest>>(algorithm, provider); }
	static jni::ref<java::security::MessageDigest> getInstance(jni::ref<java::lang::String> algorithm, jni::ref<java::security::Provider> provider) { return call_static_method<"getInstance", jni::ref<java::security::MessageDigest>>(algorithm, provider); }
	void reset() { return call_method<"reset", void>(); }
	void update(jbyte arg0) { return call_method<"update", void>(arg0); }
	void update(jni::ref<jni::array<jbyte>> input, jint offset, jint len) { return call_method<"update", void>(input, offset, len); }
	void update(jni::ref<jni::array<jbyte>> input) { return call_method<"update", void>(input); }
	jni::ref<jni::array<jbyte>> digest() { return call_method<"digest", jni::ref<jni::array<jbyte>>>(); }
	jint digest(jni::ref<jni::array<jbyte>> buf, jint offset, jint len) { return call_method<"digest", jint>(buf, offset, len); }
	jni::ref<jni::array<jbyte>> digest(jni::ref<jni::array<jbyte>> input) { return call_method<"digest", jni::ref<jni::array<jbyte>>>(input); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jboolean isEqual(jni::ref<jni::array<jbyte>> digesta, jni::ref<jni::array<jbyte>> digestb) { return call_static_method<"isEqual", jboolean>(digesta, digestb); }
	jni::ref<java::lang::String> getAlgorithm() { return call_method<"getAlgorithm", jni::ref<java::lang::String>>(); }
	jni::ref<java::security::Provider> getProvider() { return call_method<"getProvider", jni::ref<java::security::Provider>>(); }
	jint getDigestLength() { return call_method<"getDigestLength", jint>(); }
	void update(jni::ref<java::nio::ByteBuffer> input) { return call_method<"update", void>(input); }

protected:

	MessageDigest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_MESSAGEDIGEST
