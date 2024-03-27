// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_PROPERTYNAMES_FWD
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_PROPERTYNAMES_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::management::jmxremote { class ConnectorBootstrap_PropertyNames; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::management::jmxremote::ConnectorBootstrap_PropertyNames>
{
	static constexpr fixed_string class_name = "sun/management/jmxremote/ConnectorBootstrap$PropertyNames";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_PROPERTYNAMES_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_PROPERTYNAMES)
#define SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_PROPERTYNAMES

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::management::jmxremote::ConnectorBootstrap_PropertyNames : public jni::object_base<"sun/management/jmxremote/ConnectorBootstrap$PropertyNames",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> PORT() { return get_static_field<"PORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> HOST() { return get_static_field<"HOST", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> RMI_PORT() { return get_static_field<"RMI_PORT", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CONFIG_FILE_NAME() { return get_static_field<"CONFIG_FILE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_LOCAL_ONLY() { return get_static_field<"USE_LOCAL_ONLY", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_SSL() { return get_static_field<"USE_SSL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_REGISTRY_SSL() { return get_static_field<"USE_REGISTRY_SSL", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> USE_AUTHENTICATION() { return get_static_field<"USE_AUTHENTICATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PASSWORD_FILE_NAME() { return get_static_field<"PASSWORD_FILE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> ACCESS_FILE_NAME() { return get_static_field<"ACCESS_FILE_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> LOGIN_CONFIG_NAME() { return get_static_field<"LOGIN_CONFIG_NAME", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SSL_ENABLED_CIPHER_SUITES() { return get_static_field<"SSL_ENABLED_CIPHER_SUITES", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SSL_ENABLED_PROTOCOLS() { return get_static_field<"SSL_ENABLED_PROTOCOLS", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SSL_NEED_CLIENT_AUTH() { return get_static_field<"SSL_NEED_CLIENT_AUTH", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SSL_CONFIG_FILE_NAME() { return get_static_field<"SSL_CONFIG_FILE_NAME", jni::ref<java::lang::String>>(); }


protected:

	ConnectorBootstrap_PropertyNames(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_MANAGEMENT_JMXREMOTE_CONNECTORBOOTSTRAP_PROPERTYNAMES
