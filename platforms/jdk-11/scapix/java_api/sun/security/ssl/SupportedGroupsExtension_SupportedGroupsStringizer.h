// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLStringizer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SupportedGroupsExtension_SupportedGroupsStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SupportedGroupsExtension_SupportedGroupsStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SupportedGroupsExtension$SupportedGroupsStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLStringizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SupportedGroupsExtension_SupportedGroupsStringizer : public jni::object_base<"sun/security/ssl/SupportedGroupsExtension$SupportedGroupsStringizer",
	java::lang::Object,
	sun::security::ssl::SSLStringizer>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"toString", jni::ref<java::lang::String>>(buffer); }

protected:

	SupportedGroupsExtension_SupportedGroupsStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDGROUPSEXTENSION_SUPPORTEDGROUPSSTRINGIZER
