// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSMANAGER_FWD
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSMANAGER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::ietf::jgss { class GSSManager; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::ietf::jgss::GSSManager>
{
	static constexpr fixed_string class_name = "org/ietf/jgss/GSSManager";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSMANAGER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSMANAGER)
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSMANAGER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/org/ietf/jgss/GSSContext.h>
#include <scapix/java_api/org/ietf/jgss/GSSCredential.h>
#include <scapix/java_api/org/ietf/jgss/GSSName.h>
#include <scapix/java_api/org/ietf/jgss/Oid.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::ietf::jgss::GSSManager : public jni::object_base<"org/ietf/jgss/GSSManager",
	java::lang::Object>
{
public:

	static jni::ref<org::ietf::jgss::GSSManager> new_object() { return base_::new_object(); }
	static jni::ref<org::ietf::jgss::GSSManager> getInstance() { return call_static_method<"getInstance", jni::ref<org::ietf::jgss::GSSManager>>(); }
	jni::ref<jni::array<org::ietf::jgss::Oid>> getMechs() { return call_method<"getMechs", jni::ref<jni::array<org::ietf::jgss::Oid>>>(); }
	jni::ref<jni::array<org::ietf::jgss::Oid>> getNamesForMech(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getNamesForMech", jni::ref<jni::array<org::ietf::jgss::Oid>>>(p1); }
	jni::ref<jni::array<org::ietf::jgss::Oid>> getMechsForName(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getMechsForName", jni::ref<jni::array<org::ietf::jgss::Oid>>>(p1); }
	jni::ref<org::ietf::jgss::GSSName> createName(jni::ref<java::lang::String> p1, jni::ref<org::ietf::jgss::Oid> p2) { return call_method<"createName", jni::ref<org::ietf::jgss::GSSName>>(p1, p2); }
	jni::ref<org::ietf::jgss::GSSName> createName(jni::ref<jni::array<jbyte>> p1, jni::ref<org::ietf::jgss::Oid> p2) { return call_method<"createName", jni::ref<org::ietf::jgss::GSSName>>(p1, p2); }
	jni::ref<org::ietf::jgss::GSSName> createName(jni::ref<java::lang::String> p1, jni::ref<org::ietf::jgss::Oid> p2, jni::ref<org::ietf::jgss::Oid> p3) { return call_method<"createName", jni::ref<org::ietf::jgss::GSSName>>(p1, p2, p3); }
	jni::ref<org::ietf::jgss::GSSName> createName(jni::ref<jni::array<jbyte>> p1, jni::ref<org::ietf::jgss::Oid> p2, jni::ref<org::ietf::jgss::Oid> p3) { return call_method<"createName", jni::ref<org::ietf::jgss::GSSName>>(p1, p2, p3); }
	jni::ref<org::ietf::jgss::GSSCredential> createCredential(jint p1) { return call_method<"createCredential", jni::ref<org::ietf::jgss::GSSCredential>>(p1); }
	jni::ref<org::ietf::jgss::GSSCredential> createCredential(jni::ref<org::ietf::jgss::GSSName> p1, jint p2, jni::ref<org::ietf::jgss::Oid> p3, jint p4) { return call_method<"createCredential", jni::ref<org::ietf::jgss::GSSCredential>>(p1, p2, p3, p4); }
	jni::ref<org::ietf::jgss::GSSCredential> createCredential(jni::ref<org::ietf::jgss::GSSName> p1, jint p2, jni::ref<jni::array<org::ietf::jgss::Oid>> p3, jint p4) { return call_method<"createCredential", jni::ref<org::ietf::jgss::GSSCredential>>(p1, p2, p3, p4); }
	jni::ref<org::ietf::jgss::GSSContext> createContext(jni::ref<org::ietf::jgss::GSSName> p1, jni::ref<org::ietf::jgss::Oid> p2, jni::ref<org::ietf::jgss::GSSCredential> p3, jint p4) { return call_method<"createContext", jni::ref<org::ietf::jgss::GSSContext>>(p1, p2, p3, p4); }
	jni::ref<org::ietf::jgss::GSSContext> createContext(jni::ref<org::ietf::jgss::GSSCredential> p1) { return call_method<"createContext", jni::ref<org::ietf::jgss::GSSContext>>(p1); }
	jni::ref<org::ietf::jgss::GSSContext> createContext(jni::ref<jni::array<jbyte>> p1) { return call_method<"createContext", jni::ref<org::ietf::jgss::GSSContext>>(p1); }
	void addProviderAtFront(jni::ref<java::security::Provider> p1, jni::ref<org::ietf::jgss::Oid> p2) { return call_method<"addProviderAtFront", void>(p1, p2); }
	void addProviderAtEnd(jni::ref<java::security::Provider> p1, jni::ref<org::ietf::jgss::Oid> p2) { return call_method<"addProviderAtEnd", void>(p1, p2); }

protected:

	GSSManager(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSMANAGER