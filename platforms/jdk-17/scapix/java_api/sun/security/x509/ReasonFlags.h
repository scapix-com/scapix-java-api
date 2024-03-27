// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_X509_REASONFLAGS_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_REASONFLAGS_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::x509 { class ReasonFlags; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::x509::ReasonFlags>
{
	static constexpr fixed_string class_name = "sun/security/x509/ReasonFlags";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_REASONFLAGS_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_X509_REASONFLAGS)
#define SCAPIX_JAVA_API_SUN_SECURITY_X509_REASONFLAGS

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Enumeration.h>
#include <scapix/java_api/sun/security/util/BitArray.h>
#include <scapix/java_api/sun/security/util/DerInputStream.h>
#include <scapix/java_api/sun/security/util/DerOutputStream.h>
#include <scapix/java_api/sun/security/util/DerValue.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class sun::security::x509::ReasonFlags : public jni::object_base<"sun/security/x509/ReasonFlags",
	java::lang::Object>
{
public:

	static jni::ref<java::lang::String> UNUSED() { return get_static_field<"UNUSED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> KEY_COMPROMISE() { return get_static_field<"KEY_COMPROMISE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CA_COMPROMISE() { return get_static_field<"CA_COMPROMISE", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AFFILIATION_CHANGED() { return get_static_field<"AFFILIATION_CHANGED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> SUPERSEDED() { return get_static_field<"SUPERSEDED", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CESSATION_OF_OPERATION() { return get_static_field<"CESSATION_OF_OPERATION", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> CERTIFICATE_HOLD() { return get_static_field<"CERTIFICATE_HOLD", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> PRIVILEGE_WITHDRAWN() { return get_static_field<"PRIVILEGE_WITHDRAWN", jni::ref<java::lang::String>>(); }
	static jni::ref<java::lang::String> AA_COMPROMISE() { return get_static_field<"AA_COMPROMISE", jni::ref<java::lang::String>>(); }

	static jni::ref<sun::security::x509::ReasonFlags> new_object(jni::ref<jni::array<jbyte>> reasons) { return base_::new_object(reasons); }
	static jni::ref<sun::security::x509::ReasonFlags> new_object(jni::ref<jni::array<jboolean>> reasons) { return base_::new_object(reasons); }
	static jni::ref<sun::security::x509::ReasonFlags> new_object(jni::ref<sun::security::util::BitArray> reasons) { return base_::new_object(reasons); }
	static jni::ref<sun::security::x509::ReasonFlags> new_object(jni::ref<sun::security::util::DerInputStream> in) { return base_::new_object(in); }
	static jni::ref<sun::security::x509::ReasonFlags> new_object(jni::ref<sun::security::util::DerValue> derVal) { return base_::new_object(derVal); }
	jni::ref<jni::array<jboolean>> getFlags() { return call_method<"getFlags", jni::ref<jni::array<jboolean>>>(); }
	void set(jni::ref<java::lang::String> name, jni::ref<java::lang::Object> obj) { return call_method<"set", void>(name, obj); }
	jni::ref<java::lang::Object> get(jni::ref<java::lang::String> name) { return call_method<"get", jni::ref<java::lang::Object>>(name); }
	void delete_(jni::ref<java::lang::String> name) { return call_method<"delete", void>(name); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	void encode(jni::ref<sun::security::util::DerOutputStream> out) { return call_method<"encode", void>(out); }
	jni::ref<java::util::Enumeration> getElements() { return call_method<"getElements", jni::ref<java::util::Enumeration>>(); }

protected:

	ReasonFlags(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_X509_REASONFLAGS