// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/awt/event/InputEvent.h>

#ifndef SCAPIX_JAVA_API_JAVA_AWT_EVENT_KEYEVENT_FWD
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_KEYEVENT_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::awt::event { class KeyEvent; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::awt::event::KeyEvent>
{
	static constexpr fixed_string class_name = "java/awt/event/KeyEvent";
	using base_classes = std::tuple<scapix::java_api::java::awt::event::InputEvent>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_KEYEVENT_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_AWT_EVENT_KEYEVENT)
#define SCAPIX_JAVA_API_JAVA_AWT_EVENT_KEYEVENT

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/awt/Component.h>
#include <scapix/java_api/java/lang/String.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::awt::event::KeyEvent : public jni::object_base<"java/awt/event/KeyEvent",
	java::awt::event::InputEvent>
{
public:

	static jint KEY_FIRST() { return get_static_field<"KEY_FIRST", jint>(); }
	static jint KEY_LAST() { return get_static_field<"KEY_LAST", jint>(); }
	static jint KEY_TYPED() { return get_static_field<"KEY_TYPED", jint>(); }
	static jint KEY_PRESSED() { return get_static_field<"KEY_PRESSED", jint>(); }
	static jint KEY_RELEASED() { return get_static_field<"KEY_RELEASED", jint>(); }
	static jint VK_ENTER() { return get_static_field<"VK_ENTER", jint>(); }
	static jint VK_BACK_SPACE() { return get_static_field<"VK_BACK_SPACE", jint>(); }
	static jint VK_TAB() { return get_static_field<"VK_TAB", jint>(); }
	static jint VK_CANCEL() { return get_static_field<"VK_CANCEL", jint>(); }
	static jint VK_CLEAR() { return get_static_field<"VK_CLEAR", jint>(); }
	static jint VK_SHIFT() { return get_static_field<"VK_SHIFT", jint>(); }
	static jint VK_CONTROL() { return get_static_field<"VK_CONTROL", jint>(); }
	static jint VK_ALT() { return get_static_field<"VK_ALT", jint>(); }
	static jint VK_PAUSE() { return get_static_field<"VK_PAUSE", jint>(); }
	static jint VK_CAPS_LOCK() { return get_static_field<"VK_CAPS_LOCK", jint>(); }
	static jint VK_ESCAPE() { return get_static_field<"VK_ESCAPE", jint>(); }
	static jint VK_SPACE() { return get_static_field<"VK_SPACE", jint>(); }
	static jint VK_PAGE_UP() { return get_static_field<"VK_PAGE_UP", jint>(); }
	static jint VK_PAGE_DOWN() { return get_static_field<"VK_PAGE_DOWN", jint>(); }
	static jint VK_END() { return get_static_field<"VK_END", jint>(); }
	static jint VK_HOME() { return get_static_field<"VK_HOME", jint>(); }
	static jint VK_LEFT() { return get_static_field<"VK_LEFT", jint>(); }
	static jint VK_UP() { return get_static_field<"VK_UP", jint>(); }
	static jint VK_RIGHT() { return get_static_field<"VK_RIGHT", jint>(); }
	static jint VK_DOWN() { return get_static_field<"VK_DOWN", jint>(); }
	static jint VK_COMMA() { return get_static_field<"VK_COMMA", jint>(); }
	static jint VK_MINUS() { return get_static_field<"VK_MINUS", jint>(); }
	static jint VK_PERIOD() { return get_static_field<"VK_PERIOD", jint>(); }
	static jint VK_SLASH() { return get_static_field<"VK_SLASH", jint>(); }
	static jint VK_0() { return get_static_field<"VK_0", jint>(); }
	static jint VK_1() { return get_static_field<"VK_1", jint>(); }
	static jint VK_2() { return get_static_field<"VK_2", jint>(); }
	static jint VK_3() { return get_static_field<"VK_3", jint>(); }
	static jint VK_4() { return get_static_field<"VK_4", jint>(); }
	static jint VK_5() { return get_static_field<"VK_5", jint>(); }
	static jint VK_6() { return get_static_field<"VK_6", jint>(); }
	static jint VK_7() { return get_static_field<"VK_7", jint>(); }
	static jint VK_8() { return get_static_field<"VK_8", jint>(); }
	static jint VK_9() { return get_static_field<"VK_9", jint>(); }
	static jint VK_SEMICOLON() { return get_static_field<"VK_SEMICOLON", jint>(); }
	static jint VK_EQUALS() { return get_static_field<"VK_EQUALS", jint>(); }
	static jint VK_A() { return get_static_field<"VK_A", jint>(); }
	static jint VK_B() { return get_static_field<"VK_B", jint>(); }
	static jint VK_C() { return get_static_field<"VK_C", jint>(); }
	static jint VK_D() { return get_static_field<"VK_D", jint>(); }
	static jint VK_E() { return get_static_field<"VK_E", jint>(); }
	static jint VK_F() { return get_static_field<"VK_F", jint>(); }
	static jint VK_G() { return get_static_field<"VK_G", jint>(); }
	static jint VK_H() { return get_static_field<"VK_H", jint>(); }
	static jint VK_I() { return get_static_field<"VK_I", jint>(); }
	static jint VK_J() { return get_static_field<"VK_J", jint>(); }
	static jint VK_K() { return get_static_field<"VK_K", jint>(); }
	static jint VK_L() { return get_static_field<"VK_L", jint>(); }
	static jint VK_M() { return get_static_field<"VK_M", jint>(); }
	static jint VK_N() { return get_static_field<"VK_N", jint>(); }
	static jint VK_O() { return get_static_field<"VK_O", jint>(); }
	static jint VK_P() { return get_static_field<"VK_P", jint>(); }
	static jint VK_Q() { return get_static_field<"VK_Q", jint>(); }
	static jint VK_R() { return get_static_field<"VK_R", jint>(); }
	static jint VK_S() { return get_static_field<"VK_S", jint>(); }
	static jint VK_T() { return get_static_field<"VK_T", jint>(); }
	static jint VK_U() { return get_static_field<"VK_U", jint>(); }
	static jint VK_V() { return get_static_field<"VK_V", jint>(); }
	static jint VK_W() { return get_static_field<"VK_W", jint>(); }
	static jint VK_X() { return get_static_field<"VK_X", jint>(); }
	static jint VK_Y() { return get_static_field<"VK_Y", jint>(); }
	static jint VK_Z() { return get_static_field<"VK_Z", jint>(); }
	static jint VK_OPEN_BRACKET() { return get_static_field<"VK_OPEN_BRACKET", jint>(); }
	static jint VK_BACK_SLASH() { return get_static_field<"VK_BACK_SLASH", jint>(); }
	static jint VK_CLOSE_BRACKET() { return get_static_field<"VK_CLOSE_BRACKET", jint>(); }
	static jint VK_NUMPAD0() { return get_static_field<"VK_NUMPAD0", jint>(); }
	static jint VK_NUMPAD1() { return get_static_field<"VK_NUMPAD1", jint>(); }
	static jint VK_NUMPAD2() { return get_static_field<"VK_NUMPAD2", jint>(); }
	static jint VK_NUMPAD3() { return get_static_field<"VK_NUMPAD3", jint>(); }
	static jint VK_NUMPAD4() { return get_static_field<"VK_NUMPAD4", jint>(); }
	static jint VK_NUMPAD5() { return get_static_field<"VK_NUMPAD5", jint>(); }
	static jint VK_NUMPAD6() { return get_static_field<"VK_NUMPAD6", jint>(); }
	static jint VK_NUMPAD7() { return get_static_field<"VK_NUMPAD7", jint>(); }
	static jint VK_NUMPAD8() { return get_static_field<"VK_NUMPAD8", jint>(); }
	static jint VK_NUMPAD9() { return get_static_field<"VK_NUMPAD9", jint>(); }
	static jint VK_MULTIPLY() { return get_static_field<"VK_MULTIPLY", jint>(); }
	static jint VK_ADD() { return get_static_field<"VK_ADD", jint>(); }
	static jint VK_SEPARATER() { return get_static_field<"VK_SEPARATER", jint>(); }
	static jint VK_SEPARATOR() { return get_static_field<"VK_SEPARATOR", jint>(); }
	static jint VK_SUBTRACT() { return get_static_field<"VK_SUBTRACT", jint>(); }
	static jint VK_DECIMAL() { return get_static_field<"VK_DECIMAL", jint>(); }
	static jint VK_DIVIDE() { return get_static_field<"VK_DIVIDE", jint>(); }
	static jint VK_DELETE() { return get_static_field<"VK_DELETE", jint>(); }
	static jint VK_NUM_LOCK() { return get_static_field<"VK_NUM_LOCK", jint>(); }
	static jint VK_SCROLL_LOCK() { return get_static_field<"VK_SCROLL_LOCK", jint>(); }
	static jint VK_F1() { return get_static_field<"VK_F1", jint>(); }
	static jint VK_F2() { return get_static_field<"VK_F2", jint>(); }
	static jint VK_F3() { return get_static_field<"VK_F3", jint>(); }
	static jint VK_F4() { return get_static_field<"VK_F4", jint>(); }
	static jint VK_F5() { return get_static_field<"VK_F5", jint>(); }
	static jint VK_F6() { return get_static_field<"VK_F6", jint>(); }
	static jint VK_F7() { return get_static_field<"VK_F7", jint>(); }
	static jint VK_F8() { return get_static_field<"VK_F8", jint>(); }
	static jint VK_F9() { return get_static_field<"VK_F9", jint>(); }
	static jint VK_F10() { return get_static_field<"VK_F10", jint>(); }
	static jint VK_F11() { return get_static_field<"VK_F11", jint>(); }
	static jint VK_F12() { return get_static_field<"VK_F12", jint>(); }
	static jint VK_F13() { return get_static_field<"VK_F13", jint>(); }
	static jint VK_F14() { return get_static_field<"VK_F14", jint>(); }
	static jint VK_F15() { return get_static_field<"VK_F15", jint>(); }
	static jint VK_F16() { return get_static_field<"VK_F16", jint>(); }
	static jint VK_F17() { return get_static_field<"VK_F17", jint>(); }
	static jint VK_F18() { return get_static_field<"VK_F18", jint>(); }
	static jint VK_F19() { return get_static_field<"VK_F19", jint>(); }
	static jint VK_F20() { return get_static_field<"VK_F20", jint>(); }
	static jint VK_F21() { return get_static_field<"VK_F21", jint>(); }
	static jint VK_F22() { return get_static_field<"VK_F22", jint>(); }
	static jint VK_F23() { return get_static_field<"VK_F23", jint>(); }
	static jint VK_F24() { return get_static_field<"VK_F24", jint>(); }
	static jint VK_PRINTSCREEN() { return get_static_field<"VK_PRINTSCREEN", jint>(); }
	static jint VK_INSERT() { return get_static_field<"VK_INSERT", jint>(); }
	static jint VK_HELP() { return get_static_field<"VK_HELP", jint>(); }
	static jint VK_META() { return get_static_field<"VK_META", jint>(); }
	static jint VK_BACK_QUOTE() { return get_static_field<"VK_BACK_QUOTE", jint>(); }
	static jint VK_QUOTE() { return get_static_field<"VK_QUOTE", jint>(); }
	static jint VK_KP_UP() { return get_static_field<"VK_KP_UP", jint>(); }
	static jint VK_KP_DOWN() { return get_static_field<"VK_KP_DOWN", jint>(); }
	static jint VK_KP_LEFT() { return get_static_field<"VK_KP_LEFT", jint>(); }
	static jint VK_KP_RIGHT() { return get_static_field<"VK_KP_RIGHT", jint>(); }
	static jint VK_DEAD_GRAVE() { return get_static_field<"VK_DEAD_GRAVE", jint>(); }
	static jint VK_DEAD_ACUTE() { return get_static_field<"VK_DEAD_ACUTE", jint>(); }
	static jint VK_DEAD_CIRCUMFLEX() { return get_static_field<"VK_DEAD_CIRCUMFLEX", jint>(); }
	static jint VK_DEAD_TILDE() { return get_static_field<"VK_DEAD_TILDE", jint>(); }
	static jint VK_DEAD_MACRON() { return get_static_field<"VK_DEAD_MACRON", jint>(); }
	static jint VK_DEAD_BREVE() { return get_static_field<"VK_DEAD_BREVE", jint>(); }
	static jint VK_DEAD_ABOVEDOT() { return get_static_field<"VK_DEAD_ABOVEDOT", jint>(); }
	static jint VK_DEAD_DIAERESIS() { return get_static_field<"VK_DEAD_DIAERESIS", jint>(); }
	static jint VK_DEAD_ABOVERING() { return get_static_field<"VK_DEAD_ABOVERING", jint>(); }
	static jint VK_DEAD_DOUBLEACUTE() { return get_static_field<"VK_DEAD_DOUBLEACUTE", jint>(); }
	static jint VK_DEAD_CARON() { return get_static_field<"VK_DEAD_CARON", jint>(); }
	static jint VK_DEAD_CEDILLA() { return get_static_field<"VK_DEAD_CEDILLA", jint>(); }
	static jint VK_DEAD_OGONEK() { return get_static_field<"VK_DEAD_OGONEK", jint>(); }
	static jint VK_DEAD_IOTA() { return get_static_field<"VK_DEAD_IOTA", jint>(); }
	static jint VK_DEAD_VOICED_SOUND() { return get_static_field<"VK_DEAD_VOICED_SOUND", jint>(); }
	static jint VK_DEAD_SEMIVOICED_SOUND() { return get_static_field<"VK_DEAD_SEMIVOICED_SOUND", jint>(); }
	static jint VK_AMPERSAND() { return get_static_field<"VK_AMPERSAND", jint>(); }
	static jint VK_ASTERISK() { return get_static_field<"VK_ASTERISK", jint>(); }
	static jint VK_QUOTEDBL() { return get_static_field<"VK_QUOTEDBL", jint>(); }
	static jint VK_LESS() { return get_static_field<"VK_LESS", jint>(); }
	static jint VK_GREATER() { return get_static_field<"VK_GREATER", jint>(); }
	static jint VK_BRACELEFT() { return get_static_field<"VK_BRACELEFT", jint>(); }
	static jint VK_BRACERIGHT() { return get_static_field<"VK_BRACERIGHT", jint>(); }
	static jint VK_AT() { return get_static_field<"VK_AT", jint>(); }
	static jint VK_COLON() { return get_static_field<"VK_COLON", jint>(); }
	static jint VK_CIRCUMFLEX() { return get_static_field<"VK_CIRCUMFLEX", jint>(); }
	static jint VK_DOLLAR() { return get_static_field<"VK_DOLLAR", jint>(); }
	static jint VK_EURO_SIGN() { return get_static_field<"VK_EURO_SIGN", jint>(); }
	static jint VK_EXCLAMATION_MARK() { return get_static_field<"VK_EXCLAMATION_MARK", jint>(); }
	static jint VK_INVERTED_EXCLAMATION_MARK() { return get_static_field<"VK_INVERTED_EXCLAMATION_MARK", jint>(); }
	static jint VK_LEFT_PARENTHESIS() { return get_static_field<"VK_LEFT_PARENTHESIS", jint>(); }
	static jint VK_NUMBER_SIGN() { return get_static_field<"VK_NUMBER_SIGN", jint>(); }
	static jint VK_PLUS() { return get_static_field<"VK_PLUS", jint>(); }
	static jint VK_RIGHT_PARENTHESIS() { return get_static_field<"VK_RIGHT_PARENTHESIS", jint>(); }
	static jint VK_UNDERSCORE() { return get_static_field<"VK_UNDERSCORE", jint>(); }
	static jint VK_WINDOWS() { return get_static_field<"VK_WINDOWS", jint>(); }
	static jint VK_CONTEXT_MENU() { return get_static_field<"VK_CONTEXT_MENU", jint>(); }
	static jint VK_FINAL() { return get_static_field<"VK_FINAL", jint>(); }
	static jint VK_CONVERT() { return get_static_field<"VK_CONVERT", jint>(); }
	static jint VK_NONCONVERT() { return get_static_field<"VK_NONCONVERT", jint>(); }
	static jint VK_ACCEPT() { return get_static_field<"VK_ACCEPT", jint>(); }
	static jint VK_MODECHANGE() { return get_static_field<"VK_MODECHANGE", jint>(); }
	static jint VK_KANA() { return get_static_field<"VK_KANA", jint>(); }
	static jint VK_KANJI() { return get_static_field<"VK_KANJI", jint>(); }
	static jint VK_ALPHANUMERIC() { return get_static_field<"VK_ALPHANUMERIC", jint>(); }
	static jint VK_KATAKANA() { return get_static_field<"VK_KATAKANA", jint>(); }
	static jint VK_HIRAGANA() { return get_static_field<"VK_HIRAGANA", jint>(); }
	static jint VK_FULL_WIDTH() { return get_static_field<"VK_FULL_WIDTH", jint>(); }
	static jint VK_HALF_WIDTH() { return get_static_field<"VK_HALF_WIDTH", jint>(); }
	static jint VK_ROMAN_CHARACTERS() { return get_static_field<"VK_ROMAN_CHARACTERS", jint>(); }
	static jint VK_ALL_CANDIDATES() { return get_static_field<"VK_ALL_CANDIDATES", jint>(); }
	static jint VK_PREVIOUS_CANDIDATE() { return get_static_field<"VK_PREVIOUS_CANDIDATE", jint>(); }
	static jint VK_CODE_INPUT() { return get_static_field<"VK_CODE_INPUT", jint>(); }
	static jint VK_JAPANESE_KATAKANA() { return get_static_field<"VK_JAPANESE_KATAKANA", jint>(); }
	static jint VK_JAPANESE_HIRAGANA() { return get_static_field<"VK_JAPANESE_HIRAGANA", jint>(); }
	static jint VK_JAPANESE_ROMAN() { return get_static_field<"VK_JAPANESE_ROMAN", jint>(); }
	static jint VK_KANA_LOCK() { return get_static_field<"VK_KANA_LOCK", jint>(); }
	static jint VK_INPUT_METHOD_ON_OFF() { return get_static_field<"VK_INPUT_METHOD_ON_OFF", jint>(); }
	static jint VK_CUT() { return get_static_field<"VK_CUT", jint>(); }
	static jint VK_COPY() { return get_static_field<"VK_COPY", jint>(); }
	static jint VK_PASTE() { return get_static_field<"VK_PASTE", jint>(); }
	static jint VK_UNDO() { return get_static_field<"VK_UNDO", jint>(); }
	static jint VK_AGAIN() { return get_static_field<"VK_AGAIN", jint>(); }
	static jint VK_FIND() { return get_static_field<"VK_FIND", jint>(); }
	static jint VK_PROPS() { return get_static_field<"VK_PROPS", jint>(); }
	static jint VK_STOP() { return get_static_field<"VK_STOP", jint>(); }
	static jint VK_COMPOSE() { return get_static_field<"VK_COMPOSE", jint>(); }
	static jint VK_ALT_GRAPH() { return get_static_field<"VK_ALT_GRAPH", jint>(); }
	static jint VK_BEGIN() { return get_static_field<"VK_BEGIN", jint>(); }
	static jint VK_UNDEFINED() { return get_static_field<"VK_UNDEFINED", jint>(); }
	static jchar CHAR_UNDEFINED() { return get_static_field<"CHAR_UNDEFINED", jchar>(); }
	static jint KEY_LOCATION_UNKNOWN() { return get_static_field<"KEY_LOCATION_UNKNOWN", jint>(); }
	static jint KEY_LOCATION_STANDARD() { return get_static_field<"KEY_LOCATION_STANDARD", jint>(); }
	static jint KEY_LOCATION_LEFT() { return get_static_field<"KEY_LOCATION_LEFT", jint>(); }
	static jint KEY_LOCATION_RIGHT() { return get_static_field<"KEY_LOCATION_RIGHT", jint>(); }
	static jint KEY_LOCATION_NUMPAD() { return get_static_field<"KEY_LOCATION_NUMPAD", jint>(); }

	static jni::ref<java::awt::event::KeyEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jlong p3, jint p4, jint p5, jchar p6, jint p7) { return base_::new_object(p1, p2, p3, p4, p5, p6, p7); }
	static jni::ref<java::awt::event::KeyEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jlong p3, jint p4, jint p5, jchar p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	static jni::ref<java::awt::event::KeyEvent> new_object(jni::ref<java::awt::Component> p1, jint p2, jlong p3, jint p4, jint p5) { return base_::new_object(p1, p2, p3, p4, p5); }
	jint getKeyCode() { return call_method<"getKeyCode", jint>(); }
	void setKeyCode(jint p1) { return call_method<"setKeyCode", void>(p1); }
	jchar getKeyChar() { return call_method<"getKeyChar", jchar>(); }
	void setKeyChar(jchar p1) { return call_method<"setKeyChar", void>(p1); }
	void setModifiers(jint p1) { return call_method<"setModifiers", void>(p1); }
	jint getKeyLocation() { return call_method<"getKeyLocation", jint>(); }
	static jni::ref<java::lang::String> getKeyText(jint p1) { return call_static_method<"getKeyText", jni::ref<java::lang::String>>(p1); }
	static jni::ref<java::lang::String> getKeyModifiersText(jint p1) { return call_static_method<"getKeyModifiersText", jni::ref<java::lang::String>>(p1); }
	jboolean isActionKey() { return call_method<"isActionKey", jboolean>(); }
	jni::ref<java::lang::String> paramString() { return call_method<"paramString", jni::ref<java::lang::String>>(); }
	jint getExtendedKeyCode() { return call_method<"getExtendedKeyCode", jint>(); }
	static jint getExtendedKeyCodeForChar(jint p1) { return call_static_method<"getExtendedKeyCodeForChar", jint>(p1); }

protected:

	KeyEvent(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_AWT_EVENT_KEYEVENT
