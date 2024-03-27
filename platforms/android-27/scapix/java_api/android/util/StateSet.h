// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_UTIL_STATESET_FWD
#define SCAPIX_JAVA_API_ANDROID_UTIL_STATESET_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::util { class StateSet; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::util::StateSet>
{
	static constexpr fixed_string class_name = "android/util/StateSet";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_STATESET_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_UTIL_STATESET)
#define SCAPIX_JAVA_API_ANDROID_UTIL_STATESET

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::util::StateSet : public jni::object_base<"android/util/StateSet",
	java::lang::Object>
{
public:

	static jni::ref<jni::array<jint>> NOTHING() { return get_static_field<"NOTHING", jni::ref<jni::array<jint>>>(); }
	static jni::ref<jni::array<jint>> WILD_CARD() { return get_static_field<"WILD_CARD", jni::ref<jni::array<jint>>>(); }

	static jboolean isWildCard(jni::ref<jni::array<jint>> stateSetOrSpec) { return call_static_method<"isWildCard", jboolean>(stateSetOrSpec); }
	static jboolean stateSetMatches(jni::ref<jni::array<jint>> stateSpec, jni::ref<jni::array<jint>> stateSet) { return call_static_method<"stateSetMatches", jboolean>(stateSpec, stateSet); }
	static jboolean stateSetMatches(jni::ref<jni::array<jint>> stateSpec, jint state) { return call_static_method<"stateSetMatches", jboolean>(stateSpec, state); }
	static jni::ref<jni::array<jint>> trimStateSet(jni::ref<jni::array<jint>> states, jint newSize) { return call_static_method<"trimStateSet", jni::ref<jni::array<jint>>>(states, newSize); }
	static jni::ref<java::lang::String> dump(jni::ref<jni::array<jint>> states) { return call_static_method<"dump", jni::ref<java::lang::String>>(states); }

protected:

	StateSet(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_UTIL_STATESET
