// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/io/IOException.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PARSINGEXCEPTION_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PARSINGEXCEPTION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::pkcs { class ParsingException; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::pkcs::ParsingException>
{
	static constexpr fixed_string class_name = "sun/security/pkcs/ParsingException";
	using base_classes = std::tuple<scapix::java_api::java::io::IOException>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PARSINGEXCEPTION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PARSINGEXCEPTION)
#define SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PARSINGEXCEPTION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::pkcs::ParsingException : public jni::object_base<"sun/security/pkcs/ParsingException",
	java::io::IOException>
{
public:

	static jni::ref<sun::security::pkcs::ParsingException> new_object() { return base_::new_object(); }
	static jni::ref<sun::security::pkcs::ParsingException> new_object(jni::ref<java::lang::String> s) { return base_::new_object(s); }

protected:

	ParsingException(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_PKCS_PARSINGEXCEPTION
