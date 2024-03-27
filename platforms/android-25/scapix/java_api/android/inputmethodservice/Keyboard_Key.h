// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY_FWD
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::android::inputmethodservice { class Keyboard_Key; }

template<>
struct scapix::jni::object_traits<scapix::java_api::android::inputmethodservice::Keyboard_Key>
{
	static constexpr fixed_string class_name = "android/inputmethodservice/Keyboard$Key";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY)
#define SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/android/content/res/Resources.h>
#include <scapix/java_api/android/content/res/XmlResourceParser.h>
#include <scapix/java_api/android/graphics/drawable/Drawable.h>
#include <scapix/java_api/android/inputmethodservice/Keyboard_Row.h>
#include <scapix/java_api/java/lang/CharSequence.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class android::inputmethodservice::Keyboard_Key : public jni::object_base<"android/inputmethodservice/Keyboard$Key",
	java::lang::Object>
{
public:

	jni::ref<jni::array<jint>> codes() { return get_field<"codes", jni::ref<jni::array<jint>>>(); }
	void codes(jni::ref<jni::array<jint>> v) { set_field<"codes", jni::ref<jni::array<jint>>>(v); }
	jint edgeFlags() { return get_field<"edgeFlags", jint>(); }
	void edgeFlags(jint v) { set_field<"edgeFlags", jint>(v); }
	jint gap() { return get_field<"gap", jint>(); }
	void gap(jint v) { set_field<"gap", jint>(v); }
	jint height() { return get_field<"height", jint>(); }
	void height(jint v) { set_field<"height", jint>(v); }
	jni::ref<android::graphics::drawable::Drawable> icon() { return get_field<"icon", jni::ref<android::graphics::drawable::Drawable>>(); }
	void icon(jni::ref<android::graphics::drawable::Drawable> v) { set_field<"icon", jni::ref<android::graphics::drawable::Drawable>>(v); }
	jni::ref<android::graphics::drawable::Drawable> iconPreview() { return get_field<"iconPreview", jni::ref<android::graphics::drawable::Drawable>>(); }
	void iconPreview(jni::ref<android::graphics::drawable::Drawable> v) { set_field<"iconPreview", jni::ref<android::graphics::drawable::Drawable>>(v); }
	jni::ref<java::lang::CharSequence> label() { return get_field<"label", jni::ref<java::lang::CharSequence>>(); }
	void label(jni::ref<java::lang::CharSequence> v) { set_field<"label", jni::ref<java::lang::CharSequence>>(v); }
	jboolean modifier() { return get_field<"modifier", jboolean>(); }
	void modifier(jboolean v) { set_field<"modifier", jboolean>(v); }
	jboolean on() { return get_field<"on", jboolean>(); }
	void on(jboolean v) { set_field<"on", jboolean>(v); }
	jni::ref<java::lang::CharSequence> popupCharacters() { return get_field<"popupCharacters", jni::ref<java::lang::CharSequence>>(); }
	void popupCharacters(jni::ref<java::lang::CharSequence> v) { set_field<"popupCharacters", jni::ref<java::lang::CharSequence>>(v); }
	jint popupResId() { return get_field<"popupResId", jint>(); }
	void popupResId(jint v) { set_field<"popupResId", jint>(v); }
	jboolean pressed() { return get_field<"pressed", jboolean>(); }
	void pressed(jboolean v) { set_field<"pressed", jboolean>(v); }
	jboolean repeatable() { return get_field<"repeatable", jboolean>(); }
	void repeatable(jboolean v) { set_field<"repeatable", jboolean>(v); }
	jboolean sticky() { return get_field<"sticky", jboolean>(); }
	void sticky(jboolean v) { set_field<"sticky", jboolean>(v); }
	jni::ref<java::lang::CharSequence> text() { return get_field<"text", jni::ref<java::lang::CharSequence>>(); }
	void text(jni::ref<java::lang::CharSequence> v) { set_field<"text", jni::ref<java::lang::CharSequence>>(v); }
	jint width() { return get_field<"width", jint>(); }
	void width(jint v) { set_field<"width", jint>(v); }
	jint x() { return get_field<"x", jint>(); }
	void x(jint v) { set_field<"x", jint>(v); }
	jint y() { return get_field<"y", jint>(); }
	void y(jint v) { set_field<"y", jint>(v); }

	static jni::ref<android::inputmethodservice::Keyboard_Key> new_object(jni::ref<android::inputmethodservice::Keyboard_Row> parent) { return base_::new_object(parent); }
	static jni::ref<android::inputmethodservice::Keyboard_Key> new_object(jni::ref<android::content::res::Resources> res, jni::ref<android::inputmethodservice::Keyboard_Row> parent, jint x, jint y, jni::ref<android::content::res::XmlResourceParser> parser) { return base_::new_object(res, parent, x, y, parser); }
	void onPressed() { return call_method<"onPressed", void>(); }
	void onReleased(jboolean inside) { return call_method<"onReleased", void>(inside); }
	jboolean isInside(jint x, jint y) { return call_method<"isInside", jboolean>(x, y); }
	jint squaredDistanceFrom(jint x, jint y) { return call_method<"squaredDistanceFrom", jint>(x, y); }
	jni::ref<jni::array<jint>> getCurrentDrawableState() { return call_method<"getCurrentDrawableState", jni::ref<jni::array<jint>>>(); }

protected:

	Keyboard_Key(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_ANDROID_INPUTMETHODSERVICE_KEYBOARD_KEY
