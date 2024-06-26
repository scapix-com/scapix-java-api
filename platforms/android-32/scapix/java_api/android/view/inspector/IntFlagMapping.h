// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::inspector { class IntFlagMapping; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::inspector::IntFlagMapping>
{
	static constexpr fixed_string class_name = "android/view/inspector/IntFlagMapping";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING)
#define SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/util/Set.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::inspector::IntFlagMapping : public jni::object_base<"android/view/inspector/IntFlagMapping",
	java::lang::Object>
{
public:

	static jni::ref<android::view::inspector::IntFlagMapping> new_object() { return base_::new_object(); }
	jni::ref<java::util::Set> get(jint value) { return call_method<"get", jni::ref<java::util::Set>>(value); }
	void add(jint mask, jint target, jni::ref<java::lang::String> name) { return call_method<"add", void>(mask, target, name); }

protected:

	IntFlagMapping(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_INSPECTOR_INTFLAGMAPPING
