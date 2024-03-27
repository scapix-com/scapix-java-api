// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/security/GeneralSecurityException.h>

#ifndef SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTEXCEPTION_FWD
#define SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::security { class DigestException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::security::DigestException>
{
	static constexpr fixed_string class_name = "java/security/DigestException";
	using base_classes = std::tuple<scapix::java_api::java::security::GeneralSecurityException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTEXCEPTION)
#define SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/lang/Throwable.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::security::DigestException : public jni::object_base<"java/security/DigestException",
	java::security::GeneralSecurityException>
{
public:

	static jni::ref<java::security::DigestException> new_object() { return base_::new_object(); }
	static jni::ref<java::security::DigestException> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<java::security::DigestException> new_object(jni::ref<java::lang::String> p1, jni::ref<java::lang::Throwable> p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::security::DigestException> new_object(jni::ref<java::lang::Throwable> p1) { return base_::new_object(p1); }

protected:

	DigestException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_SECURITY_DIGESTEXCEPTION