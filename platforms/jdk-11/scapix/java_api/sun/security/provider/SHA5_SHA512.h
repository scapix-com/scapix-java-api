// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/provider/SHA5.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA5_SHA512_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA5_SHA512_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class SHA5_SHA512; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::SHA5_SHA512>
{
	static constexpr fixed_string class_name = "sun/security/provider/SHA5$SHA512";
	using base_classes = std::tuple<scapix::java_api::sun::security::provider::SHA5>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA5_SHA512_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA5_SHA512)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA5_SHA512

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::SHA5_SHA512 : public jni::object_base<"sun/security/provider/SHA5$SHA512",
	sun::security::provider::SHA5>
{
public:

	static jni::ref<sun::security::provider::SHA5_SHA512> new_object() { return base_::new_object(); }

protected:

	SHA5_SHA512(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_SHA5_SHA512
