// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Enum.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CREDENTIALSUTIL_S4U2TYPE_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CREDENTIALSUTIL_S4U2TYPE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::krb5::internal { class CredentialsUtil_S4U2Type; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::krb5::internal::CredentialsUtil_S4U2Type>
{
	static constexpr fixed_string class_name = "sun/security/krb5/internal/CredentialsUtil$S4U2Type";
	using base_classes = std::tuple<scapix::java_api::java::lang::Enum>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CREDENTIALSUTIL_S4U2TYPE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CREDENTIALSUTIL_S4U2TYPE)
#define SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CREDENTIALSUTIL_S4U2TYPE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::krb5::internal::CredentialsUtil_S4U2Type : public jni::object_base<"sun/security/krb5/internal/CredentialsUtil$S4U2Type",
	java::lang::Enum>
{
public:

	static jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type> NONE() { return get_static_field<"NONE", jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type>>(); }
	static jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type> SELF() { return get_static_field<"SELF", jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type>>(); }
	static jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type> PROXY() { return get_static_field<"PROXY", jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type>>(); }

	static jni::ref<jni::array<sun::security::krb5::internal::CredentialsUtil_S4U2Type>> values() { return call_static_method<"values", jni::ref<jni::array<sun::security::krb5::internal::CredentialsUtil_S4U2Type>>>(); }
	static jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type> valueOf(jni::ref<java::lang::String> p1) { return call_static_method<"valueOf", jni::ref<sun::security::krb5::internal::CredentialsUtil_S4U2Type>>(p1); }

protected:

	CredentialsUtil_S4U2Type(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_KRB5_INTERNAL_CREDENTIALSUTIL_S4U2TYPE
