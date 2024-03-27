// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MESSAGEDIGESTSPI2_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MESSAGEDIGESTSPI2_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::util { class MessageDigestSpi2; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::util::MessageDigestSpi2>
{
	static constexpr fixed_string class_name = "sun/security/util/MessageDigestSpi2";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MESSAGEDIGESTSPI2_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MESSAGEDIGESTSPI2)
#define SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MESSAGEDIGESTSPI2

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/javax/crypto/SecretKey.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::util::MessageDigestSpi2 : public jni::object_base<"sun/security/util/MessageDigestSpi2",
	java::lang::Object>
{
public:

	void engineUpdate(jni::ref<javax::crypto::SecretKey> p1) { return call_method<"engineUpdate", void>(p1); }

protected:

	MessageDigestSpi2(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_UTIL_MESSAGEDIGESTSPI2
