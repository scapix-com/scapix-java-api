// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_OIDMAP_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_OIDMAP_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class OIDMap; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::OIDMap>
{
	static constexpr fixed_string class_name = "sun/security/x509/OIDMap";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_OIDMAP_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_OIDMAP)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_OIDMAP

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/ObjectIdentifier.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::OIDMap : public jni::object_base<"sun/security/x509/OIDMap",
	java::lang::Object>
{
public:

	static void addAttribute(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jni::ref<java::lang::Class> p3) { return call_static_method<"addAttribute", void>(p1, p2, p3); }
	static jni::ref<java::lang::String> getName(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_static_method<"getName", jni::ref<java::lang::String>>(p1); }
	static jni::ref<sun::security::util::ObjectIdentifier> getOID(jni::ref<java::lang::String> p1) { return call_static_method<"getOID", jni::ref<sun::security::util::ObjectIdentifier>>(p1); }
	static jni::ref<java::lang::Class> getClass(jni::ref<java::lang::String> p1) { return call_static_method<"getClass", jni::ref<java::lang::Class>>(p1); }
	static jni::ref<java::lang::Class> getClass(jni::ref<sun::security::util::ObjectIdentifier> p1) { return call_static_method<"getClass", jni::ref<java::lang::Class>>(p1); }

protected:

	OIDMap(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_OIDMAP
