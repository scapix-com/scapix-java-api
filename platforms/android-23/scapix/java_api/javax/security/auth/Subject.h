// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_FWD
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::security::auth { class Subject; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::security::auth::Subject>
{
	static constexpr fixed_string class_name = "javax/security/auth/Subject";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT)
#define SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Class.h>
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/AccessControlContext.h>
#include <scapix/java_api/java/security/PrivilegedAction.h>
#include <scapix/java_api/java/security/PrivilegedExceptionAction.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::security::auth::Subject : public jni::object_base<"javax/security/auth/Subject",
	java::lang::Object,
	java::io::Serializable>
{
public:

	static jni::ref<javax::security::auth::Subject> new_object() { return base_::new_object(); }
	static jni::ref<javax::security::auth::Subject> new_object(jboolean readOnly, jni::ref<java::util::Set> subjPrincipals, jni::ref<java::util::Set> pubCredentials, jni::ref<java::util::Set> privCredentials) { return base_::new_object(readOnly, subjPrincipals, pubCredentials, privCredentials); }
	static jni::ref<java::lang::Object> doAs(jni::ref<javax::security::auth::Subject> subject, jni::ref<java::security::PrivilegedAction> action) { return call_static_method<"doAs", jni::ref<java::lang::Object>>(subject, action); }
	static jni::ref<java::lang::Object> doAsPrivileged(jni::ref<javax::security::auth::Subject> subject, jni::ref<java::security::PrivilegedAction> action, jni::ref<java::security::AccessControlContext> context) { return call_static_method<"doAsPrivileged", jni::ref<java::lang::Object>>(subject, action, context); }
	static jni::ref<java::lang::Object> doAs(jni::ref<javax::security::auth::Subject> subject, jni::ref<java::security::PrivilegedExceptionAction> action) { return call_static_method<"doAs", jni::ref<java::lang::Object>>(subject, action); }
	static jni::ref<java::lang::Object> doAsPrivileged(jni::ref<javax::security::auth::Subject> subject, jni::ref<java::security::PrivilegedExceptionAction> action, jni::ref<java::security::AccessControlContext> context) { return call_static_method<"doAsPrivileged", jni::ref<java::lang::Object>>(subject, action, context); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::util::Set> getPrincipals() { return call_method<"getPrincipals", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getPrincipals(jni::ref<java::lang::Class> c) { return call_method<"getPrincipals", jni::ref<java::util::Set>>(c); }
	jni::ref<java::util::Set> getPrivateCredentials() { return call_method<"getPrivateCredentials", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getPrivateCredentials(jni::ref<java::lang::Class> c) { return call_method<"getPrivateCredentials", jni::ref<java::util::Set>>(c); }
	jni::ref<java::util::Set> getPublicCredentials() { return call_method<"getPublicCredentials", jni::ref<java::util::Set>>(); }
	jni::ref<java::util::Set> getPublicCredentials(jni::ref<java::lang::Class> c) { return call_method<"getPublicCredentials", jni::ref<java::util::Set>>(c); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	void setReadOnly() { return call_method<"setReadOnly", void>(); }
	jboolean isReadOnly() { return call_method<"isReadOnly", jboolean>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	static jni::ref<javax::security::auth::Subject> getSubject(jni::ref<java::security::AccessControlContext> context) { return call_static_method<"getSubject", jni::ref<javax::security::auth::Subject>>(context); }

protected:

	Subject(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SECURITY_AUTH_SUBJECT
