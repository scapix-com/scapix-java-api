// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSNAME_FWD
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSNAME_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::ietf::jgss { class GSSName; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::ietf::jgss::GSSName>
{
	static constexpr fixed_string class_name = "org/ietf/jgss/GSSName";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSNAME_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSNAME)
#define SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSNAME

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/org/ietf/jgss/Oid.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::ietf::jgss::GSSName : public jni::object_base<"org/ietf/jgss/GSSName",
	java::lang::Object>
{
public:

	static jni::ref<org::ietf::jgss::Oid> NT_HOSTBASED_SERVICE() { return get_static_field<"NT_HOSTBASED_SERVICE", jni::ref<org::ietf::jgss::Oid>>(); }
	static jni::ref<org::ietf::jgss::Oid> NT_USER_NAME() { return get_static_field<"NT_USER_NAME", jni::ref<org::ietf::jgss::Oid>>(); }
	static jni::ref<org::ietf::jgss::Oid> NT_MACHINE_UID_NAME() { return get_static_field<"NT_MACHINE_UID_NAME", jni::ref<org::ietf::jgss::Oid>>(); }
	static jni::ref<org::ietf::jgss::Oid> NT_STRING_UID_NAME() { return get_static_field<"NT_STRING_UID_NAME", jni::ref<org::ietf::jgss::Oid>>(); }
	static jni::ref<org::ietf::jgss::Oid> NT_ANONYMOUS() { return get_static_field<"NT_ANONYMOUS", jni::ref<org::ietf::jgss::Oid>>(); }
	static jni::ref<org::ietf::jgss::Oid> NT_EXPORT_NAME() { return get_static_field<"NT_EXPORT_NAME", jni::ref<org::ietf::jgss::Oid>>(); }

	jboolean equals(jni::ref<org::ietf::jgss::GSSName> p1) { return call_method<"equals", jboolean>(p1); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jni::ref<org::ietf::jgss::GSSName> canonicalize(jni::ref<org::ietf::jgss::Oid> p1) { return call_method<"canonicalize", jni::ref<org::ietf::jgss::GSSName>>(p1); }
	jni::ref<jni::array<jbyte>> export_() { return call_method<"export", jni::ref<jni::array<jbyte>>>(); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<org::ietf::jgss::Oid> getStringNameType() { return call_method<"getStringNameType", jni::ref<org::ietf::jgss::Oid>>(); }
	jboolean isAnonymous() { return call_method<"isAnonymous", jboolean>(); }
	jboolean isMN() { return call_method<"isMN", jboolean>(); }

protected:

	GSSName(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_IETF_JGSS_GSSNAME
