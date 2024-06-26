// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/AWTKeyStroke.h>

#ifndef SCAPIX_JAVA_API_JAVAX_SWING_KEYSTROKE_FWD
#define SCAPIX_JAVA_API_JAVAX_SWING_KEYSTROKE_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::javax::swing { class KeyStroke; }

template<>
struct scapix::jni::object_traits<scapix::java_api::javax::swing::KeyStroke>
{
	static constexpr fixed_string class_name = "javax/swing/KeyStroke";
	using base_classes = std::tuple<scapix::java_api::java::awt::AWTKeyStroke>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_KEYSTROKE_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVAX_SWING_KEYSTROKE)
#define SCAPIX_JAVA_API_JAVAX_SWING_KEYSTROKE

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/event/KeyEvent.h>
#include <scapix/java_api/java/lang/Character.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class javax::swing::KeyStroke : public jni::object_base<"javax/swing/KeyStroke",
	java::awt::AWTKeyStroke>
{
public:

	static jni::ref<javax::swing::KeyStroke> getKeyStroke(jchar p1) { return call_static_method<"getKeyStroke", jni::ref<javax::swing::KeyStroke>>(p1); }
	static jni::ref<javax::swing::KeyStroke> getKeyStroke(jchar p1, jboolean p2) { return call_static_method<"getKeyStroke", jni::ref<javax::swing::KeyStroke>>(p1, p2); }
	static jni::ref<javax::swing::KeyStroke> getKeyStroke(jni::ref<java::lang::Character> p1, jint p2) { return call_static_method<"getKeyStroke", jni::ref<javax::swing::KeyStroke>>(p1, p2); }
	static jni::ref<javax::swing::KeyStroke> getKeyStroke(jint p1, jint p2, jboolean p3) { return call_static_method<"getKeyStroke", jni::ref<javax::swing::KeyStroke>>(p1, p2, p3); }
	static jni::ref<javax::swing::KeyStroke> getKeyStroke(jint p1, jint p2) { return call_static_method<"getKeyStroke", jni::ref<javax::swing::KeyStroke>>(p1, p2); }
	static jni::ref<javax::swing::KeyStroke> getKeyStrokeForEvent(jni::ref<java::awt::event::KeyEvent> p1) { return call_static_method<"getKeyStrokeForEvent", jni::ref<javax::swing::KeyStroke>>(p1); }
	static jni::ref<javax::swing::KeyStroke> getKeyStroke(jni::ref<java::lang::String> p1) { return call_static_method<"getKeyStroke", jni::ref<javax::swing::KeyStroke>>(p1); }

protected:

	KeyStroke(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVAX_SWING_KEYSTROKE
