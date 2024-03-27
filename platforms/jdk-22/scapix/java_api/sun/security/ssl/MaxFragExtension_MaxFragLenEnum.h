// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_MAXFRAGEXTENSION_MAXFRAGLENENUM_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_MAXFRAGEXTENSION_MAXFRAGLENENUM_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class MaxFragExtension_MaxFragLenEnum; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::MaxFragExtension_MaxFragLenEnum>
{
	static constexpr fixed_string class_name = "sun/security/ssl/MaxFragExtension$MaxFragLenEnum";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_MAXFRAGEXTENSION_MAXFRAGLENENUM_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_MAXFRAGEXTENSION_MAXFRAGLENENUM)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_MAXFRAGEXTENSION_MAXFRAGLENENUM

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::MaxFragExtension_MaxFragLenEnum : public jni::object_base<"sun/security/ssl/MaxFragExtension$MaxFragLenEnum",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum> MFL_512() { return get_static_field<"MFL_512", jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>>(); }
	static jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum> MFL_1024() { return get_static_field<"MFL_1024", jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>>(); }
	static jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum> MFL_2048() { return get_static_field<"MFL_2048", jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>>(); }
	static jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum> MFL_4096() { return get_static_field<"MFL_4096", jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>>(); }

	static jni::ref<jni::array<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>>>(); }
	static jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::MaxFragExtension_MaxFragLenEnum>>(name); }

protected:

	MaxFragExtension_MaxFragLenEnum(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_MAXFRAGEXTENSION_MAXFRAGLENENUM