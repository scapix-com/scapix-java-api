// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/InputStream.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERSTREAM_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERSTREAM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::jar { class JarVerifier_VerifierStream; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::jar::JarVerifier_VerifierStream>
{
	static constexpr fixed_string class_name = "java/util/jar/JarVerifier$VerifierStream";
	using base_classes = std::tuple<scapix::java_api::java::io::InputStream>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERSTREAM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERSTREAM)
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERSTREAM

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::jar::JarVerifier_VerifierStream : public jni::object_base<"java/util/jar/JarVerifier$VerifierStream",
	java::io::InputStream>
{
public:

	jint read() { return call_method<"read", jint>(); }
	jint read(jni::ref<jni::array<jbyte>> p1, jint p2, jint p3) { return call_method<"read", jint>(p1, p2, p3); }
	void close() { return call_method<"close", void>(); }
	jint available() { return call_method<"available", jint>(); }

protected:

	JarVerifier_VerifierStream(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERSTREAM
