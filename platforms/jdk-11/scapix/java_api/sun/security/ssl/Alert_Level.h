// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_LEVEL_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_LEVEL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::ssl { class Alert_Level; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::ssl::Alert_Level>
{
	static constexpr fixed_string class_name = "sun/security/ssl/Alert$Level";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_LEVEL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_LEVEL)
#define SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_LEVEL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::ssl::Alert_Level : public jni::object_base<"sun/security/ssl/Alert$Level",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::ssl::Alert_Level> WARNING() { return get_static_field<"WARNING", jni::ref<sun::security::ssl::Alert_Level>>(); }
	static jni::ref<sun::security::ssl::Alert_Level> FATAL() { return get_static_field<"FATAL", jni::ref<sun::security::ssl::Alert_Level>>(); }

	static jni::ref<jni::array<sun::security::ssl::Alert_Level>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::ssl::Alert_Level>>>(); }
	static jni::ref<sun::security::ssl::Alert_Level> valueOf(jni::ref<java::lang::String> name) { return call_static_method<"valueOf", jni::ref<sun::security::ssl::Alert_Level>>(name); }

protected:

	Alert_Level(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_SSL_ALERT_LEVEL
