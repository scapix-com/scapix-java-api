// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIME_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal::rcache { class AuthTime; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::rcache::AuthTime>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/rcache/AuthTime";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIME)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/nio/channels/SeekableByteChannel.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::rcache::AuthTime : public jni::object_base<"sun/security/krb5/internal/rcache/AuthTime",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::internal::rcache::AuthTime> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::String> p2, jint p3, jint p4) { return base_::new_object(p1, p2, p3, p4); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<sun::security::krb5::internal::rcache::AuthTime> readFrom(jni::ref<java::nio::channels::SeekableByteChannel> p1) { return call_static_method<"readFrom", jni::ref<sun::security::krb5::internal::rcache::AuthTime>>(p1); }
	jni::ref<jni::array<jbyte>> encode(jboolean p1) { return call_method<"encode", jni::ref<jni::array<jbyte>>>(p1); }

protected:

	AuthTime(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_RCACHE_AUTHTIME
