// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXY_KEYX_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXY_KEYX_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang::reflect { class Proxy_KeyX; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::reflect::Proxy_KeyX>
{
	static constexpr fixed_string class_name = "java/lang/reflect/Proxy$KeyX";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXY_KEYX_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXY_KEYX)
#define SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXY_KEYX

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::reflect::Proxy_KeyX : public jni::object_base<"java/lang/reflect/Proxy$KeyX",
	java::lang::Object>
{
public:

	jint hashCode() { return call_method<"hashCode", jint>(); }
	jboolean equals(jni::ref<java::lang::Object> p1) { return call_method<"equals", jboolean>(p1); }

protected:

	Proxy_KeyX(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_REFLECT_PROXY_KEYX