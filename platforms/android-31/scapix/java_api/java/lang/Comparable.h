// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_LANG_COMPARABLE_FWD
#define SCAPIX_JAVA_API_JAVA_LANG_COMPARABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::lang { class Comparable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::lang::Comparable>
{
	static constexpr fixed_string class_name = "java/lang/Comparable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_COMPARABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_LANG_COMPARABLE)
#define SCAPIX_JAVA_API_JAVA_LANG_COMPARABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::lang::Comparable : public jni::object_base<"java/lang/Comparable",
	java::lang::Object>
{
public:

	jint compareTo(jni::ref<java::lang::Object> p1) { return call_method<"compareTo", jint>(p1); }

protected:

	Comparable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_LANG_COMPARABLE
