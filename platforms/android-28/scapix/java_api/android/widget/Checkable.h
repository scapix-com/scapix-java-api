// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_WIDGET_CHECKABLE_FWD
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CHECKABLE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::widget { class Checkable; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::widget::Checkable>
{
	static constexpr fixed_string class_name = "android/widget/Checkable";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CHECKABLE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_WIDGET_CHECKABLE)
#define SCAPIX_JAVA_API_ANDROID_WIDGET_CHECKABLE

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::widget::Checkable : public jni::object_base<"android/widget/Checkable",
	java::lang::Object>
{
public:

	void setChecked(jboolean p1) { return call_method<"setChecked", void>(p1); }
	jboolean isChecked() { return call_method<"isChecked", jboolean>(); }
	void toggle() { return call_method<"toggle", void>(); }

protected:

	Checkable(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_WIDGET_CHECKABLE
