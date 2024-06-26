// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_RDN_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_RDN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class RDN; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::RDN>
{
	static constexpr fixed_string class_name = "sun/security/x509/RDN";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_RDN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_RDN)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_RDN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/java/util/Map.h>
#include <scapix/java_api/sun/security/x509/AVA.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::RDN : public jni::object_base<"sun/security/x509/RDN",
	java::lang::Object>
{
public:

	static jni::ref<sun::security::x509::RDN> new_object(jni::ref<java::lang::String> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::RDN> new_object(jni::ref<java::lang::String> p1, jni::ref<java::util::Map> p2) { return base_::new_object(p1, p2); }
	static jni::ref<sun::security::x509::RDN> new_object(jni::ref<sun::security::x509::AVA> p1) { return base_::new_object(p1); }
	static jni::ref<sun::security::x509::RDN> new_object(jni::ref<jni::array<sun::security::x509::AVA>> p1) { return base_::new_object(p1); }
	jni::ref<java::util::List> avas() { return call_method<"avas", jni::ref<java::util::List>>(); }
	jint size() { return call_method<"size", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toRFC1779String() { return call_method<"toRFC1779String", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toRFC1779String(jni::ref<java::util::Map> p1) { return call_method<"toRFC1779String", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toRFC2253String() { return call_method<"toRFC2253String", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::String> toRFC2253String(jni::ref<java::util::Map> p1) { return call_method<"toRFC2253String", jni::ref<java::lang::String>>(p1); }
	jni::ref<java::lang::String> toRFC2253String(jboolean p1) { return call_method<"toRFC2253String", jni::ref<java::lang::String>>(p1); }

protected:

	RDN(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_RDN
