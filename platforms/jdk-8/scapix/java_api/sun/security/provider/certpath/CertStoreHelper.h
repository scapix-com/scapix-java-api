// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_CERTSTOREHELPER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_CERTSTOREHELPER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class CertStoreHelper; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::CertStoreHelper>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/CertStoreHelper";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_CERTSTOREHELPER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_CERTSTOREHELPER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_CERTSTOREHELPER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/net/URI.h>
#include <scapix/java_api/java/security/cert/CertStore.h>
#include <scapix/java_api/java/security/cert/CertStoreException.h>
#include <scapix/java_api/java/security/cert/X509CRLSelector.h>
#include <scapix/java_api/java/security/cert/X509CertSelector.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/javax/security/auth/x500/X500Principal.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::CertStoreHelper : public jni::object_base<"sun/security/provider/certpath/CertStoreHelper",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::provider::certpath::CertStoreHelper> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::provider::certpath::CertStoreHelper> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<sun::security::provider::certpath::CertStoreHelper>>(p1); }
	jni::ref<java::security::cert::CertStore> getCertStore(jni::ref<java::net::URI> p1) { return call_method<"getCertStore", jni::ref<java::security::cert::CertStore>>(p1); }
	jni::ref<java::security::cert::X509CertSelector> wrap(jni::ref<java::security::cert::X509CertSelector> p1, jni::ref<javax::security::auth::x500::X500Principal> p2, jni::ref<java::lang::String> p3) { return call_method<"wrap", jni::ref<java::security::cert::X509CertSelector>>(p1, p2, p3); }
	jni::ref<java::security::cert::X509CRLSelector> wrap(jni::ref<java::security::cert::X509CRLSelector> p1, jni::ref<java::util::Collection> p2, jni::ref<java::lang::String> p3) { return call_method<"wrap", jni::ref<java::security::cert::X509CRLSelector>>(p1, p2, p3); }
	jboolean isCausedByNetworkIssue(jni::ref<java::security::cert::CertStoreException> p1) { return call_method<"isCausedByNetworkIssue", jboolean>(p1); }

protected:

	CertStoreHelper(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_CERTSTOREHELPER
