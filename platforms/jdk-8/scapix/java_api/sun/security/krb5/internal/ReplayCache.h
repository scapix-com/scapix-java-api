// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_REPLAYCACHE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_REPLAYCACHE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class ReplayCache; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::ReplayCache>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/ReplayCache";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_REPLAYCACHE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_REPLAYCACHE)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_REPLAYCACHE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/sun/security/krb5/internal/KerberosTime.h>
#include <scapix/java_api/sun/security/krb5/internal/rcache/AuthTimeWithHash.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::krb5::internal::ReplayCache : public jni::object_base<"sun/security/krb5/internal/ReplayCache",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::krb5::internal::ReplayCache> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::krb5::internal::ReplayCache> getInstance(jni::ref<java::lang::String> p1) { return call_static_method<"getInstance", jni::ref<sun::security::krb5::internal::ReplayCache>>(p1); }
	static jni::ref<sun::security::krb5::internal::ReplayCache> getInstance() { return call_static_method<"getInstance", jni::ref<sun::security::krb5::internal::ReplayCache>>(); }
	void checkAndStore(jni::ref<sun::security::krb5::internal::KerberosTime> p1, jni::ref<sun::security::krb5::internal::rcache::AuthTimeWithHash> p2) { return call_method<"checkAndStore", void>(p1, p2); }

protected:

	ReplayCache(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_REPLAYCACHE