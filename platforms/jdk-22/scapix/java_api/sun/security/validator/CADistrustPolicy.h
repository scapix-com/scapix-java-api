// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_CADISTRUSTPOLICY_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_CADISTRUSTPOLICY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::validator { class CADistrustPolicy; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::validator::CADistrustPolicy>
{
	static constexpr fixed_string class_name = "sun/security/validator/CADistrustPolicy";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_CADISTRUSTPOLICY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_CADISTRUSTPOLICY)
#define SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_CADISTRUSTPOLICY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::validator::CADistrustPolicy : public jni::object_base<"sun/security/validator/CADistrustPolicy",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::validator::CADistrustPolicy> SYMANTEC_TLS() { return get_static_field<"SYMANTEC_TLS", jni::ref<sun::security::validator::CADistrustPolicy>>(); }

	static jni::ref<jni::array<sun::security::validator::CADistrustPolicy>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::validator::CADistrustPolicy>>>(); }
	static jni::ref<sun::security::validator::CADistrustPolicy> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::validator::CADistrustPolicy>>(name); }

protected:

	CADistrustPolicy(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_VALIDATOR_CADISTRUSTPOLICY