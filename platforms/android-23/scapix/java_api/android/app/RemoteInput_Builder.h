// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_BUILDER_FWD
#define SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_BUILDER_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::app { class RemoteInput_Builder; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::app::RemoteInput_Builder>
{
	static constexpr fixed_string class_name = "android/app/RemoteInput$Builder";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_BUILDER_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_BUILDER)
#define SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_BUILDER

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/app/RemoteInput.h>
#include <scapix/java_api/android/os/Bundle.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::app::RemoteInput_Builder : public jni::object_base<"android/app/RemoteInput$Builder",
	java::lang::Object>
{
public:

	static jni::ref<android::app::RemoteInput_Builder> new_object(jni::ref<java::lang::String> resultKey) { return base_::new_object(resultKey); }
	jni::ref<android::app::RemoteInput_Builder> setLabel(jni::ref<java::lang::CharSequence> label) { return call_method<"setLabel", jni::ref<android::app::RemoteInput_Builder>>(label); }
	jni::ref<android::app::RemoteInput_Builder> setChoices(jni::ref<jni::array<java::lang::CharSequence>> choices) { return call_method<"setChoices", jni::ref<android::app::RemoteInput_Builder>>(choices); }
	jni::ref<android::app::RemoteInput_Builder> setAllowFreeFormInput(jboolean allowFreeFormInput) { return call_method<"setAllowFreeFormInput", jni::ref<android::app::RemoteInput_Builder>>(allowFreeFormInput); }
	jni::ref<android::app::RemoteInput_Builder> addExtras(jni::ref<android::os::Bundle> extras) { return call_method<"addExtras", jni::ref<android::app::RemoteInput_Builder>>(extras); }
	jni::ref<android::os::Bundle> getExtras() { return call_method<"getExtras", jni::ref<android::os::Bundle>>(); }
	jni::ref<android::app::RemoteInput> build() { return call_method<"build", jni::ref<android::app::RemoteInput>>(); }

protected:

	RemoteInput_Builder(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_APP_REMOTEINPUT_BUILDER
