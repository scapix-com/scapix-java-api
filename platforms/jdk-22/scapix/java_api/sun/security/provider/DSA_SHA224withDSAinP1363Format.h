// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/DSA.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_SHA224WITHDSAINP1363FORMAT_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_SHA224WITHDSAINP1363FORMAT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class DSA_SHA224withDSAinP1363Format; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::DSA_SHA224withDSAinP1363Format>
{
	static constexpr fixed_string class_name = "sun/security/provider/DSA$SHA224withDSAinP1363Format";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::DSA>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_SHA224WITHDSAINP1363FORMAT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_SHA224WITHDSAINP1363FORMAT)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_SHA224WITHDSAINP1363FORMAT

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::DSA_SHA224withDSAinP1363Format : public jni::object_base<"sun/security/provider/DSA$SHA224withDSAinP1363Format",
	sun::security::provider::DSA>
{
public:

	static jni::ref<sun::security::provider::DSA_SHA224withDSAinP1363Format> new_object() { return base_::new_object(); }

protected:

	DSA_SHA224withDSAinP1363Format(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_SHA224WITHDSAINP1363FORMAT
