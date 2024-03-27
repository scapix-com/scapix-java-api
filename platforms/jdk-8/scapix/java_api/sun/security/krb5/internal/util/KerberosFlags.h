// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KERBEROSFLAGS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KERBEROSFLAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::util { class KerberosFlags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::util::KerberosFlags>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/util/KerberosFlags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KERBEROSFLAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KERBEROSFLAGS)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KERBEROSFLAGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::util::KerberosFlags : public jni::object_base<"sun/security/krb5/internal/util/KerberosFlags",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::internal::util::KerberosFlags> new_object(jint p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::krb5::internal::util::KerberosFlags> new_object(jint p1, jni::ref<jni::array<jbyte>> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::krb5::internal::util::KerberosFlags> new_object(jni::ref<jni::array<jboolean>> p1) { return base_::new_object(p1); }
	void set(jint p1, jboolean p2) { return call_method<"set", void>(p1, p2); }
	jboolean get(jint p1) { return call_method<"get", jboolean>(p1); }
	jni::ref<jni::array<jboolean>> toBooleanArray() { return call_method<"toBooleanArray", jni::ref<jni::array<jboolean>>>(); }
	jni::ref<jni::array<jbyte>> asn1Encode() { return call_method<"asn1Encode", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	KerberosFlags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_UTIL_KERBEROSFLAGS