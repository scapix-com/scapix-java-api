// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/cert/CertStoreParameters.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_URICERTSTORE_URICERTSTOREPARAMETERS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_URICERTSTORE_URICERTSTOREPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class URICertStore_URICertStoreParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::URICertStore_URICertStoreParameters>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/URICertStore$URICertStoreParameters";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::cert::CertStoreParameters>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_URICERTSTORE_URICERTSTOREPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_URICERTSTORE_URICERTSTOREPARAMETERS)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_URICERTSTORE_URICERTSTOREPARAMETERS

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::URICertStore_URICertStoreParameters : public jni::object_base<"sun/security/provider/certpath/URICertStore$URICertStoreParameters",
	java::lang::Object,
	java::security::cert::CertStoreParameters>
{
public:

	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	URICertStore_URICertStoreParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_URICERTSTORE_URICERTSTOREPARAMETERS