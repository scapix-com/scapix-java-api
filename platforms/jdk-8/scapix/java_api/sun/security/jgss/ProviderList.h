// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_PROVIDERLIST_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_PROVIDERLIST_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss { class ProviderList; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::ProviderList>
{
	static constexpr fixed_string class_name = "sun/security/jgss/ProviderList";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_PROVIDERLIST_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_PROVIDERLIST)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_PROVIDERLIST

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/security/Provider.h>
#include <scapix/java_api/org/ietf/jgss/Oid.h>
#include <scapix/java_api/sun/security/jgss/GSSCaller.h>
#include <scapix/java_api/sun/security/jgss/spi/MechanismFactory.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::jgss::ProviderList : public jni::object_base<"sun/security/jgss/ProviderList",
	java::lang::Object>
{
public:

	static jni::ref<org::ietf::jgss::Oid> DEFAULT_MECH_OID() { return get_static_field<"DEFAULT_MECH_OID", jni::ref<org::ietf::jgss::Oid>>(); }

	static jni::ref<sun::security::jgss::ProviderList> new_object(jni::ref<sun::security::jgss::GSSCaller> p1, jboolean p2) { return base_::new_object(p1, p2); }
	jni::ref<sun::security::jgss::spi::MechanismFactory> getMechFactory(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getMechFactory", jni::ref<sun::security::jgss::spi::MechanismFactory>>(p1); }
	jni::ref<sun::security::jgss::spi::MechanismFactory> getMechFactory(jni::ref<org::ietf::jgss::Oid> p1, jni::ref<java::security::Provider> p2) { return call_method<"getMechFactory", jni::ref<sun::security::jgss::spi::MechanismFactory>>(p1, p2); }
	jni::ref<jni::array<org::ietf::jgss::Oid>> getMechs() { return call_method<"getMechs", jni::ref<jni::array<org::ietf::jgss::Oid>>>(); }
	void addProviderAtFront(jni::ref<java::security::Provider> p1, jni::ref<org::ietf::jgss::Oid> p2) { return call_method<"addProviderAtFront", void>(p1, p2); }
	void addProviderAtEnd(jni::ref<java::security::Provider> p1, jni::ref<org::ietf::jgss::Oid> p2) { return call_method<"addProviderAtEnd", void>(p1, p2); }

protected:

	ProviderList(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_PROVIDERLIST
