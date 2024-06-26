// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_KEY_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_KEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class PublicMethods_Key; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::PublicMethods_Key>
{
	static constexpr fixed_string class_name = "java/lang/PublicMethods$Key";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_KEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_KEY)
#define SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_KEY

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::lang::PublicMethods_Key : public jni::object_base<"java/lang/PublicMethods$Key",
	java::lang::Object>
{
public:

	jboolean equals(jni::ref<java::lang::Object> o) { return call_method<"equals", jboolean>(o); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	PublicMethods_Key(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_PUBLICMETHODS_KEY
