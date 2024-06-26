// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/PKIXRevocationChecker.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class RevocationChecker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::RevocationChecker>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/RevocationChecker";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::PKIXRevocationChecker>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::provider::certpath::RevocationChecker : public jni::object_base<"sun/security/provider/certpath/RevocationChecker",
	java::security::cert::PKIXRevocationChecker>
{
public:

	void init(jboolean forward) { return call_method<"init", void>(forward); }
	jboolean isForwardCheckingSupported() { return call_method<"isForwardCheckingSupported", jboolean>(); }
	jni::ref<java::util::Set> getSupportedExtensions() { return call_method<"getSupportedExtensions", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::List> getSoftFailExceptions() { return call_method<"getSoftFailExceptions", jni::ref<java::util::List>>(); }
	void check(jni::ref<java::security::cert::Certificate> cert, jni::ref<java::util::Collection> unresolvedCritExts) { return call_method<"check", void>(cert, unresolvedCritExts); }

protected:

	RevocationChecker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_REVOCATIONCHECKER
