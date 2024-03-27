// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>
#include <scapix/java_api/java/util/Iterator.h>

#ifndef SCAPIX_JAVA_API_JAVA_UTIL_ARRAYS_ARRAYITR_FWD
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYS_ARRAYITR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::util { class Arrays_ArrayItr; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::util::Arrays_ArrayItr>
{
	static constexpr fixed_string class_name = "java/util/Arrays$ArrayItr";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object, scapix::java_api::java::util::Iterator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYS_ARRAYITR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_UTIL_ARRAYS_ARRAYITR)
#define SCAPIX_JAVA_API_JAVA_UTIL_ARRAYS_ARRAYITR

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

// private
class java::util::Arrays_ArrayItr : public jni::object_base<"java/util/Arrays$ArrayItr",
	java::lang::Object,
	java::util::Iterator>
{
public:

	jboolean hasNext() { return call_method<"hasNext", jboolean>(); }
	jni::ref<java::lang::Object> next() { return call_method<"next", jni::ref<java::lang::Object>>(); }

protected:

	Arrays_ArrayItr(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_UTIL_ARRAYS_ARRAYITR
