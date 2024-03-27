// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLExtension_SSLExtensionSpec.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSPEC_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSPEC_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SupportedGroupsExtension_SupportedGroupsSpec; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SupportedGroupsExtension_SupportedGroupsSpec>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SupportedGroupsExtension$SupportedGroupsSpec";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLExtension_SSLExtensionSpec>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSPEC_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSPEC)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSPEC

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SupportedGroupsExtension_SupportedGroupsSpec : public jni::object_base<"sun/security/ssl/SupportedGroupsExtension$SupportedGroupsSpec",
	java::lang::Object,
	sun::security::ssl::SSLExtension_SSLExtensionSpec>
{
public:

	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	SupportedGroupsExtension_SupportedGroupsSpec(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSPEC
