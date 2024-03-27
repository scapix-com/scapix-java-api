// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>

#ifndef SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_EXTENDEDREQUEST_FWD
#define SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_EXTENDEDREQUEST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::naming::ldap { class ExtendedRequest; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::naming::ldap::ExtendedRequest>
{
	static constexpr fixed_string class_name = "javax/naming/ldap/ExtendedRequest";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_EXTENDEDREQUEST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_EXTENDEDREQUEST)
#define SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_EXTENDEDREQUEST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/javax/naming/ldap/ExtendedResponse.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::naming::ldap::ExtendedRequest : public jni::object_base<"javax/naming/ldap/ExtendedRequest",
	java::lang::Object,
	java::io::Serializable>
{
public:

	jni::ref<java::lang::String> getID() { return call_method<"getID", jni::ref<java::lang::String>>(); }
	jni::ref<jni::array<jbyte>> getEncodedValue() { return call_method<"getEncodedValue", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<javax::naming::ldap::ExtendedResponse> createExtendedResponse(jni::ref<java::lang::String> p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4) { return call_method<"createExtendedResponse", jni::ref<javax::naming::ldap::ExtendedResponse>>(p1, p2, p3, p4); }

protected:

	ExtendedRequest(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_NAMING_LDAP_EXTENDEDREQUEST
