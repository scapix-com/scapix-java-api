// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class KeyUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::KeyUtil>
{
	static constexpr fixed_string class_name = "sun/security/util/KeyUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AlgorithmParameters.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/SecureRandom.h>
#include <scapix/java_api/java/security/spec/KeySpec.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::KeyUtil : public jni::object_base<"sun/security/util/KeyUtil",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::util::KeyUtil> new_object() { return base_::new_object(); }
	static jint getKeySize(jni::ref<java::security::Key> p1) { return call_static_method<"getKeySize", jint>(p1); }
	static jint getKeySize(jni::ref<java::security::AlgorithmParameters> p1) { return call_static_method<"getKeySize", jint>(p1); }
	static void validate(jni::ref<java::security::Key> p1) { return call_static_method<"validate", void>(p1); }
	static void validate(jni::ref<java::security::spec::KeySpec> p1) { return call_static_method<"validate", void>(p1); }
	static jboolean isOracleJCEProvider(jni::ref<java::lang::String> p1) { return call_static_method<"isOracleJCEProvider", jboolean>(p1); }
	static jni::ref<jni::array<jbyte>> checkTlsPreMasterSecretKey(jint p1, jint p2, jni::ref<java::security::SecureRandom> p3, jni::ref<jni::array<jbyte>> p4, jboolean p5) { return call_static_method<"checkTlsPreMasterSecretKey", jni::ref<jni::array<jbyte>>>(p1, p2, p3, p4, p5); }
	static jni::ref<jni::array<jbyte>> trimZeroes(jni::ref<jni::array<jbyte>> p1) { return call_static_method<"trimZeroes", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	KeyUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_KEYUTIL
