// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFIG_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFIG_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5 { class Config; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::Config>
{
	static constexpr fixed_string class_name = "sun/security/krb5/Config";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFIG_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFIG)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFIG

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Boolean.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::Config : public jni::object_base<"sun/security/krb5/Config",
	java::lang::Object>
{
public:

	static jboolean DISABLE_REFERRALS() { return get_static_field<"DISABLE_REFERRALS", jboolean>(); }
	static jint MAX_REFERRALS() { return get_static_field<"MAX_REFERRALS", jint>(); }

	static jni::ref<sun::security::krb5::Config> getInstance() { return call_static_method<"getInstance", jni::ref<sun::security::krb5::Config>>(); }
	static void refresh() { return call_static_method<"refresh", void>(); }
	jni::ref<java::lang::String> get(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"get", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::Boolean> getBooleanObject(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getBooleanObject", jni::ref<java::lang::Boolean>>(p1); }
	jni::ref<java::lang::String> getAll(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getAll", jni::ref<java::lang::String>>(p1); }
	jboolean exists(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"exists", jboolean>(p1); }
	jint getIntValue(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getIntValue", jint>(p1); }
	jboolean getBooleanValue(jni::ref<jni::array<java::lang::String>> p1) { return call_method<"getBooleanValue", jboolean>(p1); }
	void listTable() { return call_method<"listTable", void>(); }
	jni::ref<jni::array<jint>> defaultEtype(jni::ref<java::lang::String> p1) { return call_method<"defaultEtype", jni::ref<jni::array<jint>>>(p1); }
	static jint getType(jni::ref<java::lang::String> p1) { return call_static_method<"getType", jint>(p1); }
	void resetDefaultRealm(jni::ref<java::lang::String> p1) { return call_method<"resetDefaultRealm", void>(p1); }
	jboolean useAddresses() { return call_method<"useAddresses", jboolean>(); }
	jni::ref<java::lang::String> getDefaultRealm() { return call_method<"getDefaultRealm", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> getKDCList(jni::ref<java::lang::String> p1) { return call_method<"getKDCList", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Config(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_CONFIG