// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/cert/PKIXParameters.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security::cert { class PKIXBuilderParameters; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::cert::PKIXBuilderParameters>
{
	static constexpr fixed_string class_name = "java/security/cert/PKIXBuilderParameters";
	using base_classes = std::tuple<scapix::java_api::java::security::cert::PKIXParameters>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS)
#define SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/KeyStore.h>
#include <scapix/java_api/java/security/cert/CertSelector.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::cert::PKIXBuilderParameters : public jni::object_base<"java/security/cert/PKIXBuilderParameters",
	java::security::cert::PKIXParameters>
{
public:

	static jni::ref<java::security::cert::PKIXBuilderParameters> new_object(jni::ref<java::util::Set> trustAnchors, jni::ref<java::security::cert::CertSelector> targetConstraints) { return base_::new_object(trustAnchors, targetConstraints); }
	static jni::ref<java::security::cert::PKIXBuilderParameters> new_object(jni::ref<java::security::KeyStore> keystore, jni::ref<java::security::cert::CertSelector> targetConstraints) { return base_::new_object(keystore, targetConstraints); }
	void setMaxPathLength(jint maxPathLength) { return call_method<"setMaxPathLength", void>(maxPathLength); }
	jint getMaxPathLength() { return call_method<"getMaxPathLength", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	PKIXBuilderParameters(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_CERT_PKIXBUILDERPARAMETERS
