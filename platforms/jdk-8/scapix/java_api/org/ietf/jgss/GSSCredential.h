// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSCREDENTIAL_FWD
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSCREDENTIAL_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::ietf::jgss { class GSSCredential; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::ietf::jgss::GSSCredential>
{
	static constexpr fixed_string class_name = "org/ietf/jgss/GSSCredential";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSCREDENTIAL_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSCREDENTIAL)
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSCREDENTIAL

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/org/ietf/jgss/GSSName.h>
#include <scapix/java_api/org/ietf/jgss/Oid.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::ietf::jgss::GSSCredential : public jni::object_base<"org/ietf/jgss/GSSCredential",
	java::lang::Object,
	java::lang::Cloneable>
{
public:

	static jint INITIATE_AND_ACCEPT() { return get_static_field<"INITIATE_AND_ACCEPT", jint>(); }
	static jint INITIATE_ONLY() { return get_static_field<"INITIATE_ONLY", jint>(); }
	static jint ACCEPT_ONLY() { return get_static_field<"ACCEPT_ONLY", jint>(); }
	static jint DEFAULT_LIFETIME() { return get_static_field<"DEFAULT_LIFETIME", jint>(); }
	static jint INDEFINITE_LIFETIME() { return get_static_field<"INDEFINITE_LIFETIME", jint>(); }

	void dispose() { return call_method<"dispose", void>(); }
	jni::ref<org::ietf::jgss::GSSName> getName() { return call_method<"getName", jni::ref<org::ietf::jgss::GSSName>>(); }
	jni::ref<org::ietf::jgss::GSSName> getName(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getName", jni::ref<org::ietf::jgss::GSSName>>(p1); }
	jint getRemainingLifetime() { return call_method<"getRemainingLifetime", jint>(); }
	jint getRemainingInitLifetime(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getRemainingInitLifetime", jint>(p1); }
	jint getRemainingAcceptLifetime(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getRemainingAcceptLifetime", jint>(p1); }
	jint getUsage() { return call_method<"getUsage", jint>(); }
	jint getUsage(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"getUsage", jint>(p1); }
	jni::ref<jni::array<org::ietf::jgss::Oid>> getMechs() { return call_method<"getMechs", jni::ref<jni::array<org::ietf::jgss::Oid>>>(); }
	void add(jni::ref<org::ietf::jgss::GSSName> p1, jint p2, jint p3, jni::ref<org::ietf::jgss::Oid> p4, jint p5) { return call_method<"add", void>(p1, p2, p3, p4, p5); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	GSSCredential(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSCREDENTIAL
