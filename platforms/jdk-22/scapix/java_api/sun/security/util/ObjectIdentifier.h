// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class ObjectIdentifier; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::ObjectIdentifier>
{
	static constexpr fixed_string class_name = "sun/security/util/ObjectIdentifier";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/KnownOIDs.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::ObjectIdentifier : public jni::object_base<"sun/security/util/ObjectIdentifier",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<sun::security::util::ObjectIdentifier> new_object(jni::ref<sun::security::util::DerInputStream> in) { return base_::new_object(in); }
	static jni::ref<sun::security::util::ObjectIdentifier> of(jni::ref<java::lang::String> oidStr) { return call_static_method<"of", jni::ref<sun::security::util::ObjectIdentifier>>(oidStr); }
	static jni::ref<sun::security::util::ObjectIdentifier> of(jni::ref<sun::security::util::KnownOIDs> o) { return call_static_method<"of", jni::ref<sun::security::util::ObjectIdentifier>>(o); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	ObjectIdentifier(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_OBJECTIDENTIFIER