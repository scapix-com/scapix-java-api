// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_FWD
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::inputmethodservice { class Keyboard; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::inputmethodservice::Keyboard>
{
	static constexpr fixed_string class_name = "android/inputmethodservice/Keyboard";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD)
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/Context.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#include <scapix/java_api/java/util/List.h>
#include <scapix/java_api/android/inputmethodservice/Keyboard_Row.h>
#include <scapix/java_api/android/inputmethodservice/Keyboard_Key.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::inputmethodservice::Keyboard : public jni::object_base<"android/inputmethodservice/Keyboard",
	java::lang::Object>
{
public:

	using Row = Keyboard_Row;
	using Key = Keyboard_Key;

	static jint EDGE_BOTTOM() { return get_static_field<"EDGE_BOTTOM", jint>(); }
	static jint EDGE_LEFT() { return get_static_field<"EDGE_LEFT", jint>(); }
	static jint EDGE_RIGHT() { return get_static_field<"EDGE_RIGHT", jint>(); }
	static jint EDGE_TOP() { return get_static_field<"EDGE_TOP", jint>(); }
	static jint KEYCODE_ALT() { return get_static_field<"KEYCODE_ALT", jint>(); }
	static jint KEYCODE_CANCEL() { return get_static_field<"KEYCODE_CANCEL", jint>(); }
	static jint KEYCODE_DELETE() { return get_static_field<"KEYCODE_DELETE", jint>(); }
	static jint KEYCODE_DONE() { return get_static_field<"KEYCODE_DONE", jint>(); }
	static jint KEYCODE_MODE_CHANGE() { return get_static_field<"KEYCODE_MODE_CHANGE", jint>(); }
	static jint KEYCODE_SHIFT() { return get_static_field<"KEYCODE_SHIFT", jint>(); }

	static jni::ref<android::inputmethodservice::Keyboard> new_object(jni::ref<android::content::Context> context, jint xmlLayoutResId) { return base_::new_object(context, xmlLayoutResId); }
	static jni::ref<android::inputmethodservice::Keyboard> new_object(jni::ref<android::content::Context> context, jint xmlLayoutResId, jint modeId, jint width, jint height) { return base_::new_object(context, xmlLayoutResId, modeId, width, height); }
	static jni::ref<android::inputmethodservice::Keyboard> new_object(jni::ref<android::content::Context> context, jint xmlLayoutResId, jint modeId) { return base_::new_object(context, xmlLayoutResId, modeId); }
	static jni::ref<android::inputmethodservice::Keyboard> new_object(jni::ref<android::content::Context> context, jint layoutTemplateResId, jni::ref<java::lang::CharSequence> characters, jint columns, jint horizontalPadding) { return base_::new_object(context, layoutTemplateResId, characters, columns, horizontalPadding); }
	jni::ref<java::util::List> getKeys() { return call_method<"getKeys", jni::ref<java::util::List>>(); }
	jni::ref<java::util::List> getModifierKeys() { return call_method<"getModifierKeys", jni::ref<java::util::List>>(); }
	jint getHeight() { return call_method<"getHeight", jint>(); }
	jint getMinWidth() { return call_method<"getMinWidth", jint>(); }
	jboolean setShifted(jboolean shiftState) { return call_method<"setShifted", jboolean>(shiftState); }
	jboolean isShifted() { return call_method<"isShifted", jboolean>(); }
	jint getShiftKeyIndex() { return call_method<"getShiftKeyIndex", jint>(); }
	jni::ref<jni::array<jint>> getNearestKeys(jint x, jint y) { return call_method<"getNearestKeys", jni::ref<jni::array<jint>>>(x, y); }

protected:

	Keyboard(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD
