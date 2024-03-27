// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLE_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Formattable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Formattable>
{
	static constexpr fixed_string class_name = "java/util/Formattable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLE)
#define SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/util/Formatter.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::util::Formattable : public jni::object_base<"java/util/Formattable",
	java::lang::Object>
{
public:

	void formatTo(jni::ref<java::util::Formatter> p1, jint p2, jint p3, jint p4) { return call_method<"formatTo", void>(p1, p2, p3, p4); }

protected:

	Formattable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_FORMATTABLE