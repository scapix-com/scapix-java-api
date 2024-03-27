// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/android/view/animation/BaseInterpolator.h>

#ifndef SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR_FWD
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::view::animation { class AnticipateInterpolator; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::view::animation::AnticipateInterpolator>
{
	static constexpr fixed_string class_name = "android/view/animation/AnticipateInterpolator";
	using base_classes = std::tuple<scapix::java_api::android::view::animation::BaseInterpolator>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR)
#define SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/android/util/AttributeSet.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::view::animation::AnticipateInterpolator : public jni::object_base<"android/view/animation/AnticipateInterpolator",
	android::view::animation::BaseInterpolator>
{
public:

	static jni::ref<android::view::animation::AnticipateInterpolator> new_object() { return base_::new_object(); }
	static jni::ref<android::view::animation::AnticipateInterpolator> new_object(jfloat tension) { return base_::new_object(tension); }
	static jni::ref<android::view::animation::AnticipateInterpolator> new_object(jni::ref<android::content::Context> context, jni::ref<android::util::AttributeSet> attrs) { return base_::new_object(context, attrs); }
	jfloat getInterpolation(jfloat t) { return call_method<"getInterpolation", jfloat>(t); }

protected:

	AnticipateInterpolator(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_VIEW_ANIMATION_ANTICIPATEINTERPOLATOR
