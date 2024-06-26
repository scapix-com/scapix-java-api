// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/CodeSource.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERCODESOURCE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERCODESOURCE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util::jar { class JarVerifier_VerifierCodeSource; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::jar::JarVerifier_VerifierCodeSource>
{
	static constexpr fixed_string class_name = "java/util/jar/JarVerifier$VerifierCodeSource";
	using base_classes = std::tuple<scapix::java_api::java::security::CodeSource>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERCODESOURCE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERCODESOURCE)
#define SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERCODESOURCE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::jar::JarVerifier_VerifierCodeSource : public jni::object_base<"java/util/jar/JarVerifier$VerifierCodeSource",
	java::security::CodeSource>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	JarVerifier_VerifierCodeSource(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_JAR_JARVERIFIER_VERIFIERCODESOURCE
