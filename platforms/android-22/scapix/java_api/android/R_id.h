// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_R_ID_FWD
#define SCAPIX_JAVA_API_ANDROID_R_ID_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android { class R_id; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::R_id>
{
	static constexpr fixed_string class_name = "android/R$id";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_R_ID_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_R_ID)
#define SCAPIX_JAVA_API_ANDROID_R_ID

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::R_id : public jni::object_base<"android/R$id",
	java::lang::Object>
{
public:

	static jint addToDictionary() { return get_static_field<"addToDictionary", jint>(); }
	static jint background() { return get_static_field<"background", jint>(); }
	static jint button1() { return get_static_field<"button1", jint>(); }
	static jint button2() { return get_static_field<"button2", jint>(); }
	static jint button3() { return get_static_field<"button3", jint>(); }
	static jint candidatesArea() { return get_static_field<"candidatesArea", jint>(); }
	static jint checkbox() { return get_static_field<"checkbox", jint>(); }
	static jint closeButton() { return get_static_field<"closeButton", jint>(); }
	static jint content() { return get_static_field<"content", jint>(); }
	static jint copy() { return get_static_field<"copy", jint>(); }
	static jint copyUrl() { return get_static_field<"copyUrl", jint>(); }
	static jint custom() { return get_static_field<"custom", jint>(); }
	static jint cut() { return get_static_field<"cut", jint>(); }
	static jint edit() { return get_static_field<"edit", jint>(); }
	static jint empty() { return get_static_field<"empty", jint>(); }
	static jint extractArea() { return get_static_field<"extractArea", jint>(); }
	static jint hint() { return get_static_field<"hint", jint>(); }
	static jint home() { return get_static_field<"home", jint>(); }
	static jint icon() { return get_static_field<"icon", jint>(); }
	static jint icon1() { return get_static_field<"icon1", jint>(); }
	static jint icon2() { return get_static_field<"icon2", jint>(); }
	static jint input() { return get_static_field<"input", jint>(); }
	static jint inputArea() { return get_static_field<"inputArea", jint>(); }
	static jint inputExtractEditText() { return get_static_field<"inputExtractEditText", jint>(); }
	static jint keyboardView() { return get_static_field<"keyboardView", jint>(); }
	static jint list() { return get_static_field<"list", jint>(); }
	static jint mask() { return get_static_field<"mask", jint>(); }
	static jint message() { return get_static_field<"message", jint>(); }
	static jint navigationBarBackground() { return get_static_field<"navigationBarBackground", jint>(); }
	static jint paste() { return get_static_field<"paste", jint>(); }
	static jint primary() { return get_static_field<"primary", jint>(); }
	static jint progress() { return get_static_field<"progress", jint>(); }
	static jint secondaryProgress() { return get_static_field<"secondaryProgress", jint>(); }
	static jint selectAll() { return get_static_field<"selectAll", jint>(); }
	static jint selectTextMode() { return get_static_field<"selectTextMode", jint>(); }
	static jint selectedIcon() { return get_static_field<"selectedIcon", jint>(); }
	static jint startSelectingText() { return get_static_field<"startSelectingText", jint>(); }
	static jint statusBarBackground() { return get_static_field<"statusBarBackground", jint>(); }
	static jint stopSelectingText() { return get_static_field<"stopSelectingText", jint>(); }
	static jint summary() { return get_static_field<"summary", jint>(); }
	static jint switchInputMethod() { return get_static_field<"switchInputMethod", jint>(); }
	static jint tabcontent() { return get_static_field<"tabcontent", jint>(); }
	static jint tabhost() { return get_static_field<"tabhost", jint>(); }
	static jint tabs() { return get_static_field<"tabs", jint>(); }
	static jint text1() { return get_static_field<"text1", jint>(); }
	static jint text2() { return get_static_field<"text2", jint>(); }
	static jint title() { return get_static_field<"title", jint>(); }
	static jint toggle() { return get_static_field<"toggle", jint>(); }
	static jint widget_frame() { return get_static_field<"widget_frame", jint>(); }

	static jni::ref<android::R_id> new_object() { return base_::new_object(); }

protected:

	R_id(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_R_ID
