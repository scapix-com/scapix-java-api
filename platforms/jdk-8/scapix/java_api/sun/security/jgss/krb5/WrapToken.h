// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/sun/security/jgss/krb5/MessageToken.h>

#ifndef SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_WRAPTOKEN_FWD
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_WRAPTOKEN_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::sun::security::jgss::krb5 { class WrapToken; }

template<>
struct scapix::jni::object_traits<scapix::java_api::sun::security::jgss::krb5::WrapToken>
{
	static constexpr fixed_string class_name = "sun/security/jgss/krb5/WrapToken";
	using base_classes = std::tuple<scapix::java_api::sun::security::jgss::krb5::MessageToken>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_WRAPTOKEN_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_WRAPTOKEN)
#define SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_WRAPTOKEN

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/io/InputStream.h>
#include <scapix/java_api/java/io/OutputStream.h>
#include <scapix/java_api/org/ietf/jgss/MessageProp.h>
#include <scapix/java_api/sun/security/jgss/krb5/Krb5Context.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class sun::security::jgss::krb5::WrapToken : public jni::object_base<"sun/security/jgss/krb5/WrapToken",
	sun::security::jgss::krb5::MessageToken>
{
public:

	static jni::ref<sun::security::jgss::krb5::WrapToken> new_object(jni::ref<sun::security::jgss::krb5::Krb5Context> p1, jni::ref<jni::array<jbyte>> p2, jint p3, jint p4, jni::ref<org::ietf::jgss::MessageProp> p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	static jni::ref<sun::security::jgss::krb5::WrapToken> new_object(jni::ref<sun::security::jgss::krb5::Krb5Context> p1, jni::ref<java::io::InputStream> p2, jni::ref<org::ietf::jgss::MessageProp> p3) { return base_::new_object(p1, p2, p3); }
	jni::ref<jni::array<jbyte>> getData() { return call_method<"getData", jni::ref<jni::array<jbyte>>>(); }
	jint getData(jni::ref<jni::array<jbyte>> p1, jint p2) { return call_method<"getData", jint>(p1, p2); }
	static jni::ref<sun::security::jgss::krb5::WrapToken> new_object(jni::ref<sun::security::jgss::krb5::Krb5Context> p1, jni::ref<org::ietf::jgss::MessageProp> p2, jni::ref<jni::array<jbyte>> p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	void encode(jni::ref<java::io::OutputStream> p1) { return call_method<"encode", void>(p1); }
	jni::ref<jni::array<jbyte>> encode() { return call_method<"encode", jni::ref<jni::array<jbyte>>>(); }
	jint encode(jni::ref<jni::array<jbyte>> p1, jint p2) { return call_method<"encode", jint>(p1, p2); }

protected:

	WrapToken(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_SUN_SECURITY_JGSS_KRB5_WRAPTOKEN
