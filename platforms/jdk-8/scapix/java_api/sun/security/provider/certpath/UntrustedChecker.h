// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/PKIXCertPathChecker.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_UNTRUSTEDCHECKER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_UNTRUSTEDCHECKER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::provider::certpath { class UntrustedChecker; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::provider::certpath::UntrustedChecker>
{
	static constexpr fixed_string class_name = "sun/security/provider/certpath/UntrustedChecker";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::PKIXCertPathChecker>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_UNTRUSTEDCHECKER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_UNTRUSTEDCHECKER)
#define SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_UNTRUSTEDCHECKER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/Certificate.h>
#include <scapix/java_api/java/util/Collection.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::provider::certpath::UntrustedChecker : public jni::object_base<"sun/security/provider/certpath/UntrustedChecker",
	java::security::cert::PKIXCertPathChecker>
{
public:

	static jni::ref<sun::security::provider::certpath::UntrustedChecker> new_object() { return base_::new_object(); }
	void init(jboolean p1) { return call_method<"init", void>(p1); }
	jboolean isForwardCheckingSupported() { return call_method<"isForwardCheckingSupported", jboolean>(); }
	jni::ref<java::util::Set> getSupportedExtensions() { return call_method<"getSupportedExtensions", jni::ref<java::util::Set>>(); }
	void check(jni::ref<java::security::cert::Certificate> p1, jni::ref<java::util::Collection> p2) { return call_method<"check", void>(p1, p2); }

protected:

	UntrustedChecker(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PROVIDER_CERTPATH_UNTRUSTEDCHECKER
