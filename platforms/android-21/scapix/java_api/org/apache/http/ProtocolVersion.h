// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/io/Serializable.h>
#include <scapix/java_api/java/lang/Cloneable.h>

#ifndef SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLVERSION_FWD
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLVERSION_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::org::apache::http { class ProtocolVersion; }

template<>
struct scapix::jni::object_traits<scapix::java_api::org::apache::http::ProtocolVersion>
{
	static constexpr fixed_string class_name = "org/apache/http/ProtocolVersion";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::io::Serializable, scapix::java_api::java::lang::Cloneable>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLVERSION_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLVERSION)
#define SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLVERSION

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class org::apache::http::ProtocolVersion : public jni::object_base<"org/apache/http/ProtocolVersion",
	java::lang::Object,
	java::io::Serializable,
	java::lang::Cloneable>
{
public:

	static jni::ref<org::apache::http::ProtocolVersion> new_object(jni::ref<java::lang::String> protocol, jint major, jint minor) { return base_::new_object(protocol, major, minor); }
	jni::ref<java::lang::String> getProtocol() { return call_method<"getProtocol", jni::ref<java::lang::String>>(); }
	jint getMajor() { return call_method<"getMajor", jint>(); }
	jint getMinor() { return call_method<"getMinor", jint>(); }
	jni::ref<org::apache::http::ProtocolVersion> forVersion(jint major, jint minor) { return call_method<"forVersion", jni::ref<org::apache::http::ProtocolVersion>>(major, minor); }
	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jboolean isComparable(jni::ref<org::apache::http::ProtocolVersion> that) { return call_method<"isComparable", jboolean>(that); }
	jint compareToVersion(jni::ref<org::apache::http::ProtocolVersion> that) { return call_method<"compareToVersion", jint>(that); }
	jboolean greaterEquals(jni::ref<org::apache::http::ProtocolVersion> version) { return call_method<"greaterEquals", jboolean>(version); }
	jboolean lessEquals(jni::ref<org::apache::http::ProtocolVersion> version) { return call_method<"lessEquals", jboolean>(version); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jni::ref<java::lang::Object> clone() { return call_method<"clone", jni::ref<java::lang::Object>>(); }

protected:

	ProtocolVersion(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ORG_APACHE_HTTP_PROTOCOLVERSION
