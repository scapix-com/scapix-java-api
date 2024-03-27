// Generated by Scapix Java API 2.0
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_JAVA_API_JAVA_TEXT_BIDI_FWD
#define SCAPIX_JAVA_API_JAVA_TEXT_BIDI_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api::java::text { class Bidi; }

template<>
struct scapix::jni::object_traits<scapix::java_api::java::text::Bidi>
{
	static constexpr fixed_string class_name = "java/text/Bidi";
	using base_classes = std::tuple<scapix::java_api::java::lang::Object>;
};

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_BIDI_FWD

#if !defined(SCAPIX_JAVA_API_FWD) && !defined(SCAPIX_JAVA_API_JAVA_TEXT_BIDI)
#define SCAPIX_JAVA_API_JAVA_TEXT_BIDI

#define SCAPIX_JAVA_API_FWD
#include <scapix/java_api/java/lang/String.h>
#include <scapix/java_api/java/text/AttributedCharacterIterator.h>
#undef SCAPIX_JAVA_API_FWD

#include <scapix/jni/java_api/macros_push.h>

namespace scapix::java_api {

class java::text::Bidi : public jni::object_base<"java/text/Bidi",
	java::lang::Object>
{
public:

	static jint DIRECTION_LEFT_TO_RIGHT() { return get_static_field<"DIRECTION_LEFT_TO_RIGHT", jint>(); }
	static jint DIRECTION_RIGHT_TO_LEFT() { return get_static_field<"DIRECTION_RIGHT_TO_LEFT", jint>(); }
	static jint DIRECTION_DEFAULT_LEFT_TO_RIGHT() { return get_static_field<"DIRECTION_DEFAULT_LEFT_TO_RIGHT", jint>(); }
	static jint DIRECTION_DEFAULT_RIGHT_TO_LEFT() { return get_static_field<"DIRECTION_DEFAULT_RIGHT_TO_LEFT", jint>(); }

	static jni::ref<java::text::Bidi> new_object(jni::ref<java::lang::String> p1, jint p2) { return base_::new_object(p1, p2); }
	static jni::ref<java::text::Bidi> new_object(jni::ref<java::text::AttributedCharacterIterator> p1) { return base_::new_object(p1); }
	static jni::ref<java::text::Bidi> new_object(jni::ref<jni::array<jchar>> p1, jint p2, jni::ref<jni::array<jbyte>> p3, jint p4, jint p5, jint p6) { return base_::new_object(p1, p2, p3, p4, p5, p6); }
	jni::ref<java::text::Bidi> createLineBidi(jint p1, jint p2) { return call_method<"createLineBidi", jni::ref<java::text::Bidi>>(p1, p2); }
	jboolean isMixed() { return call_method<"isMixed", jboolean>(); }
	jboolean isLeftToRight() { return call_method<"isLeftToRight", jboolean>(); }
	jboolean isRightToLeft() { return call_method<"isRightToLeft", jboolean>(); }
	jint getLength() { return call_method<"getLength", jint>(); }
	jboolean baseIsLeftToRight() { return call_method<"baseIsLeftToRight", jboolean>(); }
	jint getBaseLevel() { return call_method<"getBaseLevel", jint>(); }
	jint getLevelAt(jint p1) { return call_method<"getLevelAt", jint>(p1); }
	jint getRunCount() { return call_method<"getRunCount", jint>(); }
	jint getRunLevel(jint p1) { return call_method<"getRunLevel", jint>(p1); }
	jint getRunStart(jint p1) { return call_method<"getRunStart", jint>(p1); }
	jint getRunLimit(jint p1) { return call_method<"getRunLimit", jint>(p1); }
	static jboolean requiresBidi(jni::ref<jni::array<jchar>> p1, jint p2, jint p3) { return call_static_method<"requiresBidi", jboolean>(p1, p2, p3); }
	static void reorderVisually(jni::ref<jni::array<jbyte>> p1, jint p2, jni::ref<jni::array<java::lang::Object>> p3, jint p4, jint p5) { return call_static_method<"reorderVisually", void>(p1, p2, p3, p4, p5); }
	jni::ref<java::lang::String> toString() { return call_method<"toString", jni::ref<java::lang::String>>(); }

protected:

	Bidi(handle_type h) : base_(h) {}

};

} // namespace scapix::java_api

#include <scapix/jni/java_api/macros_pop.h>

#endif // SCAPIX_JAVA_API_JAVA_TEXT_BIDI
