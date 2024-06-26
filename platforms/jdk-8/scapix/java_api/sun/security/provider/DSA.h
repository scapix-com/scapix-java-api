// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/SignatureSpi.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider { class DSA; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::DSA>
{
	static constexpr fixed_string class_name = "sun/security/provider/DSA";
	using base_classes = std::tuple<scapix::java_api::java::security::SignatureSpi>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/provider/DSA_SHA224withDSA.h>
#include <scapix/java_api/sun/security/provider/DSA_SHA256withDSA.h>
#include <scapix/java_api/sun/security/provider/DSA_SHA1withDSA.h>
#include <scapix/java_api/sun/security/provider/DSA_RawDSA.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::DSA : public jni::object_base<"sun/security/provider/DSA",
	java::security::SignatureSpi>
{
public:

	using SHA224withDSA = DSA_SHA224withDSA;
	using SHA256withDSA = DSA_SHA256withDSA;
	using SHA1withDSA = DSA_SHA1withDSA;
	using RawDSA = DSA_RawDSA;

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	DSA(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_DSA
