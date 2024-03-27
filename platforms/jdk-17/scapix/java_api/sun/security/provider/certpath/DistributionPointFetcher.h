// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_DISTRIBUTIONPOINTFETCHER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_DISTRIBUTIONPOINTFETCHER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class DistributionPointFetcher; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::DistributionPointFetcher>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/DistributionPointFetcher";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_DISTRIBUTIONPOINTFETCHER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_DISTRIBUTIONPOINTFETCHER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_DISTRIBUTIONPOINTFETCHER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/PublicKey.h>
#include <scapix/java_api/java/security/cert/TrustAnchor.h>
#include <scapix/java_api/java/security/cert/X509CRLSelector.h>
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Date.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::DistributionPointFetcher : public jni::object_base<"sun/security/provider/certpath/DistributionPointFetcher",
	java::lang::Object>
{
public:

	static jni::ref<java::util::Collection> getCRLs(jni::ref<java::security::cert::X509CRLSelector> selector, jboolean signFlag, jni::ref<java::security::PublicKey> prevKey, jni::ref<java::lang::String> provider, jni::ref<java::util::List> certStores, jni::ref<jni::array<jboolean>> reasonsMask, jni::ref<java::util::Set> trustAnchors, jni::ref<java::util::Date> validity, jni::ref<java::lang::String> variant) { return call_static_method<"getCRLs", jni::ref<java::util::Collection>>(selector, signFlag, prevKey, provider, certStores, reasonsMask, trustAnchors, validity, variant); }
	static jni::ref<java::util::Collection> getCRLs(jni::ref<java::security::cert::X509CRLSelector> selector, jboolean signFlag, jni::ref<java::security::PublicKey> prevKey, jni::ref<java::lang::String> provider, jni::ref<java::util::List> certStores, jni::ref<jni::array<jboolean>> reasonsMask, jni::ref<java::util::Set> trustAnchors, jni::ref<java::util::Date> validity) { return call_static_method<"getCRLs", jni::ref<java::util::Collection>>(selector, signFlag, prevKey, provider, certStores, reasonsMask, trustAnchors, validity); }
	static jni::ref<java::util::Collection> getCRLs(jni::ref<java::security::cert::X509CRLSelector> selector, jboolean signFlag, jni::ref<java::security::PublicKey> prevKey, jni::ref<java::security::cert::X509Certificate> prevCert, jni::ref<java::lang::String> provider, jni::ref<java::util::List> certStores, jni::ref<jni::array<jboolean>> reasonsMask, jni::ref<java::util::Set> trustAnchors, jni::ref<java::util::Date> validity, jni::ref<java::lang::String> variant, jni::ref<java::security::cert::TrustAnchor> anchor) { return call_static_method<"getCRLs", jni::ref<java::util::Collection>>(selector, signFlag, prevKey, prevCert, provider, certStores, reasonsMask, trustAnchors, validity, variant, anchor); }

protected:

	DistributionPointFetcher(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_DISTRIBUTIONPOINTFETCHER
