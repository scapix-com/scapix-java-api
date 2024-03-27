// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/security/KeyStore_LoadStoreParameter.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_DOMAINLOADSTOREPARAMETER_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_DOMAINLOADSTOREPARAMETER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class DomainLoadStoreParameter; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::DomainLoadStoreParameter>
{
	static constexpr fixed_string class_name = "java/security/DomainLoadStoreParameter";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::security::KeyStore_LoadStoreParameter>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_DOMAINLOADSTOREPARAMETER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_DOMAINLOADSTOREPARAMETER)
#define SCAPIX_JAVA_API_JAVA_SECURITY_DOMAINLOADSTOREPARAMETER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/security/KeyStore_ProtectionParameter.h>
#include <scapix/java_api/java/util/Map.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::DomainLoadStoreParameter : public jni::object_base<"java/security/DomainLoadStoreParameter",
	java::lang::Object,
	java::security::KeyStore_LoadStoreParameter>
{
public:

	static jni::ref<java::security::DomainLoadStoreParameter> new_object(jni::ref<java::net::URI> configuration, jni::ref<java::util::Map> protectionParams) { return base_::new_object(configuration, protectionParams); }
	jni::ref<java::net::URI> getConfiguration() { return call_method<"getConfiguration", jni::ref<java::net::URI>>(); }
	jni::ref<java::util::Map> getProtectionParams() { return call_method<"getProtectionParams", jni::ref<java::util::Map>>(); }
	jni::ref<java::security::KeyStore_ProtectionParameter> getProtectionParameter() { return call_method<"getProtectionParameter", jni::ref<java::security::KeyStore_ProtectionParameter>>(); }

protected:

	DomainLoadStoreParameter(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_DOMAINLOADSTOREPARAMETER
