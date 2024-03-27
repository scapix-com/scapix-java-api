// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ANCHORCERTIFICATES_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ANCHORCERTIFICATES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class AnchorCertificates; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::AnchorCertificates>
{
	static constexpr fixed_string class_name = "sun/security/util/AnchorCertificates";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ANCHORCERTIFICATES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ANCHORCERTIFICATES)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ANCHORCERTIFICATES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/cert/X509Certificate.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::AnchorCertificates : public jni::object_base<"sun/security/util/AnchorCertificates",
	java::lang::Object>
{
public:

	static jboolean contains(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"contains", jboolean>(p1); }
	static jboolean issuerOf(jni::ref<java::security::cert::X509Certificate> p1) { return call_static_method<"issuerOf", jboolean>(p1); }

protected:

	AnchorCertificates(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_ANCHORCERTIFICATES
