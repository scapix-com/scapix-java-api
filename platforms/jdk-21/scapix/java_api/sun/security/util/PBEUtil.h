// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PBEUTIL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PBEUTIL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class PBEUtil; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::PBEUtil>
{
	static constexpr fixed_string class_name = "sun/security/util/PBEUtil";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PBEUTIL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PBEUTIL)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PBEUTIL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Key.h>
#include <scapix/java_api/java/security/spec/AlgorithmParameterSpec.h>
#include <scapix/java_api/javax/crypto/spec/PBEKeySpec.h>
#include <scapix/java_api/sun/security/util/PBEUtil_PBES2Params.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::PBEUtil : public jni::object_base<"sun/security/util/PBEUtil",
	java::lang::Object>
{
public:

	using PBES2Params = PBEUtil_PBES2Params;

	static jni::ref<sun::security::util::PBEUtil> new_object() { return base_::new_object(); }
	static jni::ref<javax::crypto::spec::PBEKeySpec> getPBAKeySpec(jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params) { return call_static_method<"getPBAKeySpec", jni::ref<javax::crypto::spec::PBEKeySpec>>(key, params); }
	static void checkKeyAndParams(jni::ref<java::security::Key> key, jni::ref<java::security::spec::AlgorithmParameterSpec> params, jni::ref<java::lang::String> algorithm) { return call_static_method<"checkKeyAndParams", void>(key, params, algorithm); }

protected:

	PBEUtil(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_PBEUTIL
