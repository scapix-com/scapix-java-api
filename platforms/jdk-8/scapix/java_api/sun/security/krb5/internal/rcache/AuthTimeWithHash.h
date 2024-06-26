// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/krb5/internal/rcache/AuthTime.h>
#include <scapix/java_api/java/lang/Comparable.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIMEWITHHASH_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIMEWITHHASH_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::rcache { class AuthTimeWithHash; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::rcache::AuthTimeWithHash>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/rcache/AuthTimeWithHash";
	using base_classes = std::tuple<scapix::java_api::sun::security::krb5::internal::rcache::AuthTime, scapix::java_api::java::lang::Comparable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIMEWITHHASH_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIMEWITHHASH)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIMEWITHHASH

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::rcache::AuthTimeWithHash : public jni::object_base<"sun/security/krb5/internal/rcache/AuthTimeWithHash",
	sun::security::krb5::internal::rcache::AuthTime,
	java::lang::Comparable>
{
public:

	static jni::ref<sun::security::krb5::internal::rcache::AuthTimeWithHash> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3, jint p4, jni::ref<java::lang::String> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint compareTo(jni::ref<sun::security::krb5::internal::rcache::AuthTimeWithHash> p1) { return call_method<"compareTo", jint>(p1); }
	jboolean isSameIgnoresHash(jni::ref<sun::security::krb5::internal::rcache::AuthTime> p1) { return call_method<"isSameIgnoresHash", jboolean>(p1); }
	jni::ref<jni::array<jbyte>> encode(jboolean p1) { return call_method<"encode", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	AuthTimeWithHash(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIMEWITHHASH
