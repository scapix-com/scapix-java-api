// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/SHA3.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA3_SHA224_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA3_SHA224_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class SHA3_SHA224; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::SHA3_SHA224>
{
	static constexpr fixed_string class_name = "sun/security/provider/SHA3$SHA224";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::SHA3>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA3_SHA224_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA3_SHA224)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA3_SHA224

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::SHA3_SHA224 : public jni::object_base<"sun/security/provider/SHA3$SHA224",
	sun::security::provider::SHA3>
{
public:

	static jni::ref<sun::security::provider::SHA3_SHA224> new_object() { return base_::new_object(); }

protected:

	SHA3_SHA224(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA3_SHA224