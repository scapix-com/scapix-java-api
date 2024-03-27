// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_RANGE_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_RANGE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class Range; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::Range>
{
	static constexpr fixed_string class_name = "android/util/Range";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_RANGE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_RANGE)
#define SCAPIX_JAVA_API_ANDROID_UTIL_RANGE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/Comparable.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::Range : public jni::object_base<"android/util/Range",
	java::lang::Object>
{
public:

	static jni::ref<android::util::Range> new_object(jni::ref<java::lang::Comparable> lower, jni::ref<java::lang::Comparable> upper) { return base_::new_object(lower, upper); }
	static jni::ref<android::util::Range> create(jni::ref<java::lang::Comparable> lower, jni::ref<java::lang::Comparable> upper) { return call_static_method<"create", jni::ref<android::util::Range>>(lower, upper); }
	jni::ref<java::lang::Comparable> getLower() { return call_method<"getLower", jni::ref<java::lang::Comparable>>(); }
	jni::ref<java::lang::Comparable> getUpper() { return call_method<"getUpper", jni::ref<java::lang::Comparable>>(); }
	jboolean contains(jni::ref<java::lang::Comparable> value) { return call_method<"contains", jboolean>(value); }
	jboolean contains(jni::ref<android::util::Range> range) { return call_method<"contains", jboolean>(range); }
	jboolean equals(jni::ref<java::lang::Object> obj) { return call_method<"equals", jboolean>(obj); }
	jni::ref<java::lang::Comparable> clamp(jni::ref<java::lang::Comparable> value) { return call_method<"clamp", jni::ref<java::lang::Comparable>>(value); }
	jni::ref<android::util::Range> intersect(jni::ref<android::util::Range> range) { return call_method<"intersect", jni::ref<android::util::Range>>(range); }
	jni::ref<android::util::Range> intersect(jni::ref<java::lang::Comparable> lower, jni::ref<java::lang::Comparable> upper) { return call_method<"intersect", jni::ref<android::util::Range>>(lower, upper); }
	jni::ref<android::util::Range> extend(jni::ref<android::util::Range> range) { return call_method<"extend", jni::ref<android::util::Range>>(range); }
	jni::ref<android::util::Range> extend(jni::ref<java::lang::Comparable> lower, jni::ref<java::lang::Comparable> upper) { return call_method<"extend", jni::ref<android::util::Range>>(lower, upper); }
	jni::ref<android::util::Range> extend(jni::ref<java::lang::Comparable> value) { return call_method<"extend", jni::ref<android::util::Range>>(value); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }
	jint hashCode() { return call_method<"hashCode", jint>(); }

protected:

	Range(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_RANGE
