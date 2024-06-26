// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/org/ietf/jgss/GSSCredential.h>

#ifndef SCAPIX_JAVA_API_COM_SUN_SECURITY_JGSS_EXTENDEDGSSCREDENTIAL_FWD
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_JGSS_EXTENDEDGSSCREDENTIAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::com::sun::security::jgss { class ExtendedGSSCredential; }

template<>
struct scapix::jni::object_traits<scapix::java_api::com::sun::security::jgss::ExtendedGSSCredential>
{
	static constexpr fixed_string class_name = "com/sun/security/jgss/ExtendedGSSCredential";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::org::ietf::jgss::GSSCredential>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_JGSS_EXTENDEDGSSCREDENTIAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_COM_SUN_SECURITY_JGSS_EXTENDEDGSSCREDENTIAL)
#define SCAPIX_JAVA_API_COM_SUN_SECURITY_JGSS_EXTENDEDGSSCREDENTIAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/ietf/jgss/GSSName.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class com::sun::security::jgss::ExtendedGSSCredential : public jni::object_base<"com/sun/security/jgss/ExtendedGSSCredential",
	java::lang::Object,
	org::ietf::jgss::GSSCredential>
{
public:

	jni::ref<org::ietf::jgss::GSSCredential> impersonate(jni::ref<org::ietf::jgss::GSSName> p1) { return call_method<"impersonate", jni::ref<org::ietf::jgss::GSSCredential>>(p1); }

protected:

	ExtendedGSSCredential(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_COM_SUN_SECURITY_JGSS_EXTENDEDGSSCREDENTIAL
