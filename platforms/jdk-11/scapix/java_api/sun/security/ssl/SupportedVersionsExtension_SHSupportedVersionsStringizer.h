// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/sun/security/ssl/SSLStringizer.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_SHSUPPORTEDVERSIONSSTRINGIZER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_SHSUPPORTEDVERSIONSSTRINGIZER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class SupportedVersionsExtension_SHSupportedVersionsStringizer; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::SupportedVersionsExtension_SHSupportedVersionsStringizer>
{
	static constexpr fixed_string class_name = "sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsStringizer";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::sun::security::ssl::SSLStringizer>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_SHSUPPORTEDVERSIONSSTRINGIZER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_SHSUPPORTEDVERSIONSSTRINGIZER)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_SHSUPPORTEDVERSIONSSTRINGIZER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/ByteBuffer.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::SupportedVersionsExtension_SHSupportedVersionsStringizer : public jni::object_base<"sun/security/ssl/SupportedVersionsExtension$SHSupportedVersionsStringizer",
	java::lang::Object,
	sun::security::ssl::SSLStringizer>
{
public:

	jni::ref<java::lang::String> toString(jni::ref<java::nio::ByteBuffer> buffer) { return call_method<"toString", jni::ref<java::lang::String>>(buffer); }

protected:

	SupportedVersionsExtension_SHSupportedVersionsStringizer(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_SUPPORTEDVERSIONSEXTENSION_SHSUPPORTEDVERSIONSSTRINGIZER
