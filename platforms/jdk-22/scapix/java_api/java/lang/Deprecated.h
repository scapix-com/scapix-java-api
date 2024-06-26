// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/lang/annotation/Annotation.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_DEPRECATED_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_DEPRECATED_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Deprecated; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Deprecated>
{
	static constexpr fixed_string class_name = "java/lang/Deprecated";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::lang::annotation::Annotation>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_DEPRECATED_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_DEPRECATED)
#define SCAPIX_JAVA_API_JAVA_LANG_DEPRECATED

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Deprecated : public jni::object_base<"java/lang/Deprecated",
	java::lang::Object,
	java::lang::annotation::Annotation>
{
public:

	jni::ref<java::lang::String> since() { return call_method<"since", jni::ref<java::lang::String>>(); }
	jboolean forRemoval() { return call_method<"forRemoval", jboolean>(); }

protected:

	Deprecated(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_DEPRECATED
